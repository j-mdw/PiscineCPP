#include "Enemy.hpp"

Enemy::Enemy(void)
{
    std::cout << "Enemy default constructor called" << std::endl;
}

Enemy::Enemy(int hp, std::string const & type) :
    type(type),
    hp(hp)
{
    std::cout << "Enemy constructor called" << std::endl;
}


Enemy::Enemy(Enemy const & src)
{
    this->type = src.getType();
    this->hp = src.getHP();
    std::cout << "Enemy Copy constructor called" << std::endl;
}

Enemy::~Enemy(void)
{
    std::cout << "Enemy destructor called" << std::endl;
}

Enemy &
    Enemy::operator=(Enemy const & src)
{
    this->type = src.getType();
    this->hp = src.getHP();
    std::cout << "Enemy Assignment operator called" << std::endl;
    return (*this);
}

std::string
Enemy::getType(void) const
{
    return (this->type);
}

int        
Enemy::getHP(void) const
{
    return (this->hp);
}

void
Enemy::takeDamage(int val)
{
    int damage;

    if (this->hp == 0)
        return ;
    else if (this->hp > val)
        damage = val;
    else
        damage = this->hp;
    this->hp -= damage;
    std::cout << "Enemy of type " << this->type << " takes "
    << damage << " damages." << std::endl;
}

std::ostream & operator<<(std::ostream & o, Enemy & ins)
{
    o << "Enemy Type: " << ins.getType() << "\nHP: " << ins.getHP()
    << std::endl;
    return (o);
}