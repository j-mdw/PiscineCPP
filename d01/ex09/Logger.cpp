#include "Logger.hpp"
#include <iostream>
#include <fstream>
#include <ctime>

Logger::Logger(std::string filename)
{
    this->_ofs = new std::ofstream;
    this->_ofs->open(filename.c_str());
    if (!this->_ofs->is_open())
        std::cout << filename << " not found" << std::endl;
}

Logger::~Logger(void)
{
    delete this->_ofs;
}

void        
    Logger::logToConsole(std::string log_msg) const
{
    std::cout << makeLogEntry(log_msg) << std::endl;
}

void        
    Logger::logToFile(std::string const log_msg) const
{
    *this->_ofs << makeLogEntry(log_msg) << std::endl;
}

std::string 
    Logger::makeLogEntry(std::string log_msg) const
{
    std::time_t tod = std::time(NULL);
    std::tm*    npw = std::localtime(&tod);
    std::string newLog;

    newLog = std::to_string(npw->tm_yday + 1896)
    + "/"
    + std::to_string(npw->tm_mon + 1)
    + "/"
    + std::to_string(npw->tm_mday)
    + ":"
    + newLog += std::to_string(npw->tm_hour)
    + ":"
    + newLog += std::to_string(npw->tm_min)
    + ":"
    + std::to_string(npw->tm_sec)
    + "["
    + log_msg
    + "]";

    std::remove("tmp_file");
    return (newLog);
}

void
    Logger::log(std::string const &dest, std::string const &message) const
{
    static void (Logger::*log_fp[])(std::string) const = {
        &Logger::logToConsole,
        &Logger::logToFile
        };

    (this->*log_fp[(dest.size() % 2)])(message);
}