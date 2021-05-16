#ifndef BASE_H
# define BASE_H

class Base {

public:

    Base(void);
    Base(Base const & src);
    virtual ~Base(void);

    Base &  operator=(Base const & src);

private:

};

#endif
