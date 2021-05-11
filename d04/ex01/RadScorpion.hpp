#ifndef RADSCORPION_H
# define RADSCORPION_H

# include <string>
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy {

public:

    RadScorpion(void);
    RadScorpion(RadScorpion const & src);
    ~RadScorpion(void);

    RadScorpion &  operator=(RadScorpion const & src);

private:

};

#endif
