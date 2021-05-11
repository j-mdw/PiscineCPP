#include "Squad.hpp"
#include <cstring>

Squad::Squad(void) :
	_count(0)
{}

Squad::Squad(Squad const & src)
{
	this->_count = src.getCount();
	this->_squads = new ISpaceMarine * [this->_count];
	for (int i = 0; i < this->_count; i++)
		this->_squads[i] = src.getUnit(i)->clone();
}

Squad::~Squad(void)
{	 
	this->destroyUnits();
}

Squad &
Squad::operator=(Squad const & src)
{
	if (this->_count > 0)
		this->destroyUnits();
	this->_count = src.getCount();
	this->_squads = new ISpaceMarine * [this->_count];
	for (int i = 0; i < this->_count; i++)
		this->_squads[i] = src.getUnit(i)->clone();
	return (*this);
}

int
Squad::getCount(void) const
{
	return (this->_count);
}

ISpaceMarine *
Squad::getUnit(int index) const
{
	if (index > this->_count - 1)
		return (NULL);
	else
		return (this->_squads[index]);
}

int
Squad::push(ISpaceMarine* sm)
{
	if (!sm)
		return (-1);
	for (int i = 0; i < this->_count; i++)
	{
		if (this->_squads[i] == sm)
			return (-1);
	}
	this->_count++;
	ISpaceMarine **newSquad = new ISpaceMarine * [this->_count];
	if (this->_count > 1)
	{
		std::memcpy(newSquad, this->_squads, (this->_count - 1) * sizeof(ISpaceMarine *));
		delete [] this->_squads;
	}
	newSquad[this->_count - 1] = sm;
	this->_squads = newSquad;
	return(_count);
}

void
Squad::destroyUnits(void)
{
	for (int i = 0; i < this->_count; i++)
		delete this->_squads[i];
	if (this->_count > 0)
		delete [] this->_squads;
}