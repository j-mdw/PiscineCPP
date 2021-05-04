#include "Brain.hpp"
#include <iostream>

Brain::Brain(void) : _amigdula(1),
                     _cells(100000000), 
                     _cortex(1),
                     _monkey(1) {
}

Brain::~Brain(void) {
}

const Brain *
    Brain::identify(void) const
{
    return (this);
}

void
    Brain::print(void) const {

    std::cout << "Amigdula " << this->_amigdula << std::endl;
    std::cout << "Brain cells: " << this->_cells << std::endl;
    std::cout << "Cortex: " << this->_cortex << std::endl;
    std::cout << "Monkey brain: " << this->_monkey << std::endl;
}
    