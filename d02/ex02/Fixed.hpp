#ifndef FIXED_H
# define FIXED_H

# include <iostream>

class Fixed {

public:

    Fixed(void);
    Fixed(Fixed const & src);
    Fixed(int val);
    Fixed(float val);
    ~Fixed(void);

    Fixed & operator=(Fixed const & src);

    bool    operator<(Fixed const & cmp);
    bool    operator<=(Fixed const & cmp);
    bool    operator>(Fixed const & cmp);
    bool    operator>=(Fixed const & cmp);
    bool    operator==(Fixed const & cmp);
    bool    operator!=(Fixed const & cmp);
    Fixed   operator+(Fixed const & cmp);
    Fixed   operator-(Fixed const & cmp);
    Fixed   operator*(Fixed const & cmp);
    Fixed   operator/(Fixed const & cmp);
    

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
