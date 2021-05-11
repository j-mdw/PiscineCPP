#include "Character.hpp"

Character::Character(void)
{
    std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const & name) :
    _name(name),
    _ap(40),
    _weapon(NULL)
{
    std::cout << "Character constructor called" << std::endl;
}

Character::Character(Character const & src)
{
    this->_name = src.getName();
    this->_ap = src.getAP();
    std::cout << "Character Copy constructor called" << std::endl;
}

Character::~Character(void)
{
    std::cout << "Character destructor called" << std::endl;
}

Character &
    Character::operator=(Character const & src)
{
    this->_name = src.getName();
    this->_ap = src.getAP();
    std::cout << "Character Assignment operator called" << std::endl;
    return (*this);
}

std::string
Character::getName(void) const
{
    return (this->_name);
}

int        
Character::getAP(void) const
{
    return (this->_ap);
}

AWeapon *
Character::getWeapon(void) const
{
    return (this->_weapon);
}

void
Character::recoverAP(void)
{
    if (this->_ap < 30)
        this->_ap += 10;
    else
        this->_ap = 40;
}

void
Character::equip(AWeapon *w)
{
    this->_weapon = w;
}

void
Character::attack(Enemy *e)
{
    if (this->_weapon)
    {
        if (this->_weapon->getAPCost() < this->_ap)
        {
            std::cout << this->_name << " attacks " << e->getType()
            << " with a " << this->_weapon->getName() << std::endl;
            this->_weapon->attack();
            e->takeDamage(this->_weapon->getDamage());
            this->_ap -= this->_weapon->getAPCost();
            if (e->getHP() == 0)
                delete e;
        }
        else
            std::cout << this->_name << " cannon attack, not enough AP" << std::endl;
    }
}

std::ostream & operator<<(std::ostream & o, Character & ins)
{
    if (ins.getWeapon())
        o << ins.getName() << " has " << ins.getAP() << " AP and wields a "
        << ins.getWeapon()->getName() << std::endl;
    else
        o << ins.getName() << " has " << ins.getAP() << " AP and is unarmed"
        << std::endl;
    return (o);
}
