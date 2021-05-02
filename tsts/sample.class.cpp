#include "sample.class.hpp"
#include <iostream>

Sample::Sample(const int v1) : i(v1), j(42), _k(0) {

//	std::cout << "Constructing class" << std::endl;
//	this->pprint();
//	this->_ppprint();
//	std::cout << this->_k << std::endl;
	
	Sample::_count++;

	return ;
}

Sample::~Sample(void) {
	std::cout << "Destructing class" << std::endl;

	this->_count--;
	return ;
}

void
	Sample::pprint(void) const {

	std::cout << "Oh hello there" << std::endl;

}

void
	Sample::_ppprint(void) const {

	std::cout << "-- Private -- Get out --" << std::endl;

}

int
	Sample::getk(void) const {
	
	return (this->_k);

}

void
	Sample::setk(int val) {
	
	if (val > 0)
		this->_k = val;
	return ;

}

void
	Sample::printcount(void) {

	//Sample::_count *= 10;
	std::cout << Sample::_count << std::endl;
	return ;

}

int Sample::_count = 0;
