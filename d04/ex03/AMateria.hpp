#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>  
# include "ICharacter.hpp"

class AMateria {

public:

    AMateria(std::string const & type);
    AMateria(AMateria const & src);
    virtual ~AMateria(void);

    AMateria &  operator=(AMateria const & src);

    std::string const & getType() const;
    unsigned int getXP() const;  
    
    virtual void use(ICharacter& target);
    virtual AMateria* clone() const = 0;

protected:
    unsigned int    _xp;
    std::string     type;
    AMateria(void);

};

#endif
