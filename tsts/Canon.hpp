#ifndef CANON_H
# define CANON_H

class Canon {

public:

    Canon(void);
    Canon(Canon const & src);
    ~Canon(void);

    Canon &  operator=(Canon const & src);

private:

};

#endif