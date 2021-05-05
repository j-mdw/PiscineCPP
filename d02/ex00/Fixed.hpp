#ifndef FIXED_H
#define FIXED_H

class Fixed {

public:

    Fixed(void);
    Fixed(Fixed const & src);
    ~Fixed(void);

    Fixed & operator=(Fixed const & src);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);

private:

    int                 _rawBits;
    static int const    fracBits;

};

#endif
