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
    
    Fixed & operator++(void);
    Fixed & operator--(void);

    float operator++(int);
    float operator--(int);

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    static Fixed & min(Fixed & v1, Fixed & v2);
    static Fixed const & min(Fixed const & v1, Fixed const & v2);
    static Fixed & max(Fixed & v1, Fixed & v2);
    static Fixed const & max(Fixed const & v1, Fixed const & v2);

private:

    int                 _rawBits;
    static int const    fracBits;

};

std::ostream & operator<<(std::ostream & o, Fixed const & ins);

#endif
