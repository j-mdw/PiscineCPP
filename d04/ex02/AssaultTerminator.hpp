#ifndef ASSAULTTERMINATOR_H
# define ASSAULTTERMINATOR_H
 
# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine {

public:

	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const & src);
	~AssaultTerminator(void);

	AssaultTerminator & operator=(AssaultTerminator const & src);

    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;

};

#endif
