#ifndef CHARACTER_H
# define CHARACTER_H

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {

public:

    Character(std::string name);
    Character(Character const & src);
    ~Character(void);

    Character &  operator=(Character const & src);

    AMateria *  getMateria(int idx) const;
    int         getMatCount(void) const;
    std::string const & getName() const;
    
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);

protected:
    Character(void);
    AMateria *  mArr[4];
    std::string name;
    int         materiaCount;
    void        delMateria(void);

};

#endif
