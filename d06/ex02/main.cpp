# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <iostream>
# include <cstdlib>
# include <exception>

Base *
new_A(void)
{
    A * a = new A;
    return (static_cast<Base *>(a));
}

Base *
new_B(void)
{
    B * b = new B;
    return (static_cast<Base *>(b));
}

Base *
new_C(void)
{
    C * c = new C;
    return (static_cast<Base *>(c));
}

Base *
generate(void)
{
    Base * (*f[])(void) = {
        new_A,
        new_B,
        new_C
    };
    int rand = clock() % 3;
    // std::cout << rand << std::endl;
    return (f[rand]());
}

void
identify_from_pointer(Base * p)
{
    A * a = dynamic_cast<A *>(p);
    if (a)
    {
        std::cout << 'A' << std::endl;
        return ;
    }
    B * b = dynamic_cast<B *>(p);
    if (b)
    {
        std::cout << 'B' << std::endl;
        return ;
    } 
    std::cout << 'C' << std::endl;
}

void
idenfity_from_reference(Base & p)
{
    try {
        A & a = dynamic_cast<A &>(p);
        (void)a;
    }
    catch (std::exception & e) {
        try {
            B & b = dynamic_cast<B &>(p);
            (void)b;
        }
        catch (std::exception & e) {
            std::cout << 'C' << std::endl;
            return ;
        }
        std::cout << 'B' << std::endl;
        return ;
    }
    std::cout << 'A' << std::endl;
}

int
main(void)
{
    Base * p;
    for (int i = 100; i > 0; i--)
    {
        p = generate();
        idenfity_from_reference(*p);
        identify_from_pointer(p);
        std::cout << "_____\n";
        delete p;
    }
    return (0);
}