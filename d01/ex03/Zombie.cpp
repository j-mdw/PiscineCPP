#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string type, std::string name) : _type(type), _name(name) {
}

Zombie::~Zombie(void) {
}

void
    Zombie::annonce(void) const {

    std::cout << this->_name 
    << " (" << this->_type << ") "
    << ": Grrrrzzzzzz"
    << std::endl;
}

void
    Zombie::setname(std::string name) {
    this->_name = name;
}

void
    Zombie::settype(std::string type) {
    this->_type = type;
}