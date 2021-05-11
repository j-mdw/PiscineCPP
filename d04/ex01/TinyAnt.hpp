#ifndef TINYANT_H
# define TINYANT_H

# include <string>
# include <iostream>
# include "Enemy.hpp"

class TinyAnt : public Enemy {

public:

    TinyAnt(void);
    TinyAnt(TinyAnt const & src);
    virtual ~TinyAnt(void);

    TinyAnt &  operator=(TinyAnt const & src);

private:

};

#endif
