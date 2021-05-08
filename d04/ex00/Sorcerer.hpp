#ifndef SORCERER_H
# define SORCERER_H

# include <string>
# include <iostream>
# include "Victim.hpp"

class Sorcerer {

public:

    Sorcerer(std::string name, std::string title);
    Sorcerer(Sorcerer const & src);
    ~Sorcerer(void);

    Sorcerer &  operator=(Sorcerer const & src);

    std::string getName(void) const;
    std::string getTitle(void) const;
    void        polymorph(Victim const &) const;

protected:
    Sorcerer(void);

private:
    std::string name;
    std::string title;

};

std::ostream & operator<<(std::ostream & o, Sorcerer const & ins);

#endif
