#include "Logger.hpp"
#include <iostream>
#include <ctime>

Logger::Logger(char *filename)
{
    this->_ofs.open("filename");
    if (!this->_ofs.is_open())
        std::cout << filename << " not found" << std::endl;
}

Logger::~Logger(void) {
}

void        
    Logger::logToConsole(std::string log_msg) const
{
    std::cout << log_msg << std::endl;
}

void        
    Logger::logToFile(std::string log_msg) const
{
    this->_ofs << log_msg << std::endl;
}

std::string 
    Logger::makeLogEntry(std::string log_msg) const
{
    std::time_t tod = std::time(NULL);
    std::tm*    npw = std::localtime(&tod);
    std::string newLog;
    
    newLog += (npw->tm_yday + 1900) + '-' +
                (npw->tm_mon + 1) + '-' +
                npw->tm_mday + ':' +
                npw->tm_hour + ':' +
                npw->tm_min + ':' +
                npw->tm_sec + '[' +
                log_msg + ']';
    return (newLog);
}

void
    Logger::log(std::string const &dest, std::string const &message) const
{
    void (Logger::*log_fp[])(std::string) const = {
        &Logger::logToConsole,
        &Logger::logToFile
        };

    log_fp[(dest.size() % 2)];
}