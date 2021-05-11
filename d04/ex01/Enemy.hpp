#ifndef ENEMY_H
# define ENEMY_H

# include <string>
#include <iostream>

class Enemy {

public:

    Enemy(int hp, std::string const & type);
    Enemy(Enemy const & src);
    virtual ~Enemy(void);

    Enemy &  operator=(Enemy const & src);

    std::string getType(void) const;
    int         getHP(void) const;

    virtual void takeDamage(int);

protected:
    std::string type;
    int         hp;
    Enemy(void);

private:

};

std::ostream & operator<<(std::ostream & o, Enemy & ins);

#endif
