#include "Human.hpp"

Human::Human(void) {
}

Human::~Human(void) {
}

const Brain *
    Human::idenfify(void) const 
{
    return (this->_mybrain.identify());
}

const Brain *
    Human::idenfify2(void) const
{    
    return (this->_yourbrain.identify());
}

const Brain &
    Human::getbrain(void) const
{
    return (this->_mybrain);
}

const Brain &
    Human::getyourbrain(void) const
{
    return (this->_yourbrain);
}

