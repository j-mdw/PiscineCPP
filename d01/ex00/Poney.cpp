#include "Poney.hpp"
#include <iostream>

Poney::Poney(int age, int size, std::string color) : _age(age), _size(size), _color(color) {
    Poney::poney_count++;
    this->_id = Poney::poney_count;
}

Poney::~Poney(void) {
    std::cout << "Bye bye poney " << this->_id << std::endl;
    Poney::poney_count--;
}

void
    Poney::poney_run(void) const {
    std::cout << "Poney " << this->_id << " runs in the mud" << std::endl;
}

void
    Poney::poney_sleep(void) const {
    std::cout << "Poney " << this->_id << " sleeps quietly" << std::endl;
}

void
    Poney::poney_print(void) const {
    std::cout << "Poney " << this->_id << std::endl;
    std::cout << "Age: " << this->_age << std::endl;
    std::cout << "Size: " << this->_size << std::endl;
    std::cout << "Color: " << this->_color << std::endl;
}

int Poney::poney_count = 0;