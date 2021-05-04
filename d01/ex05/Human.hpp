#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human {

public:

    Human(void);
    ~Human(void);

    const Brain *idenfify(void) const;
    const Brain *idenfify2(void) const;
    const Brain &getyourbrain(void) const;
    const Brain &getbrain(void) const;

private:

    Brain _mybrain;
    Brain _yourbrain;

};

#endif