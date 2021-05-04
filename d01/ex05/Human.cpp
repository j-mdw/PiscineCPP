#include "Human.hpp"

Human::Human(void) {
}

Human::~Human(void) {
}

const Brain *
    Human::idenfify(void) const {
    
    return (this->_mybrain.identify());
}

const Brain *
    Human::idenfify2(void) const {
    
    return (this->_yourbrain.identify());
}

Brain
    Human::getbrain(void) const {

    return (this->_mybrain);
}

Brain
    Human::getyourbrain(void) const {

    return (this->_yourbrain);
}

