#ifndef LOGGER_HPP
#define LOGGER_HPP

#include <string>
#include <fstream>

class Logger {

public:

    Logger(char *filename);
    ~Logger(void);

    void    log(std::string const &dest, std::string const &message) const;

private:

    std::ofstream   _ofs;
    void            logToConsole(std::string log_msg) const;
    void            logToFile(std::string log_msg) const;
    std::string     makeLogEntry(std::string log_msg) const;
};

#endif