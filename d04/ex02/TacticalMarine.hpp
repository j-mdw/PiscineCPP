#ifndef TacticalMarine_H
# define TacticalMarine_H
 
# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine : public ISpaceMarine {

public:

	TacticalMarine(void);
	TacticalMarine(TacticalMarine const & src);
	~TacticalMarine(void);

	TacticalMarine & operator=(TacticalMarine const & src);

    ISpaceMarine* clone() const;
    void battleCry() const;
    void rangedAttack() const;
    void meleeAttack() const;

private:

};

#endif
