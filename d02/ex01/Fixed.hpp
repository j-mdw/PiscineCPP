#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {

public:

    Fixed(void);
    Fixed(Fixed const & src);
    Fixed(const int val);
    Fixed(const float val);
    ~Fixed(void);

    Fixed & operator=(Fixed const & src);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

private:

    int                 _rawBits;
    static int const    fracBits;

};

std::ostream & operator<<(std::ostream & o, Fixed const & ins);

#endif
