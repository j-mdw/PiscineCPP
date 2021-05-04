#ifndef BRAIN_H
# define BRAIN_H

class Brain {

public:

    Brain(void);
    ~Brain(void);

    const Brain *identify(void) const;

    void        print(void) const;

private:

    Brain           *_brain_address;
    int             _amigdula;
    long long int   _cells;
    int             _cortex;
    int             _monkey;

};

#endif