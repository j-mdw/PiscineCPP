#ifndef SQUAD_H
 # define SQUAD_H
 
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad {

public:

    Squad(void);
    Squad(Squad const & src);
    ~Squad(void);

    Squad & operator=(Squad const & src);

    int getCount(void) const;
    ISpaceMarine* getUnit(int) const;
    int push(ISpaceMarine*);
    
private:
   int _count;
   ISpaceMarine **_squads;
   void    destroyUnits(void);
};

#endif
