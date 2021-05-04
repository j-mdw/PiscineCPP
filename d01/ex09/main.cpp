#include "Logger.hpp"

int main(void)
{
    Logger logger("newfile");

    logger.log("console", "psg sucks");
    logger.log("file", "Herrera sucks");
    logger.log("console", "Diallo sucks");
    logger.log("console", "Neymar sucks");
    logger.log("file", "Kimpembe sucks");
    logger.log("file", "Di Maria sucks");
    logger.log("console", "Icardi sucks");
    logger.log("console", "Paredes sucks");
    logger.log("file", "Bakker sucks");

    return (0);
}


