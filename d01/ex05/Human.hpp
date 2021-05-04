#ifndef HUMAN_H
# define HUMAN_H

# include "Brain.hpp"

class Human {

public:

    Human(void);
    ~Human(void);

    const Brain *idenfify(void) const;
    const Brain *idenfify2(void) const;
    Brain   getyourbrain(void) const;
    Brain       getbrain(void) const;

private:

    Brain _mybrain;
    Brain _yourbrain;

};

#endif