#include <iostream>
#include "Array.hpp"


class Baba {
		public:

            Baba(void) : c('a') {};
            ~Baba(void) {};
            void print(void) const { std::cout << this->c << std::endl; };
            void setC(char c) { this->c = c; };

		private:
            char c;
};

int
main(void)
{
    {
        try {
            Array <float>a1;

            std::cout << a1.size() << std::endl;
            Array <float>a2(4);
            std::cout << a2.size() << std::endl;
            a2[0] = 10.09;
            a2[3] = 5.0008;
            std::cout << a2[0] << " " << a2[3] << std::endl;

            Array <float>a3(a2);
            std::cout << a3[0] << " " << a3[3] << std::endl;
            a2[0]++;
            std::cout << a2[0] << " " << a2[3] << std::endl;
            std::cout << a3[0] << " " << a3[3] << std::endl;

            a1 = a3;
            std::cout << a1[0] << " " << a1[3] << std::endl;

            std::cout << a2[9] << std::endl;
        }
        catch (std::exception & e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
    try
    {
        Array <Baba>b1(5);
        b1[0].print();
        b1[4].print();
        b1[3].setC('G');
        b1[3].print();
        b1[-1].print();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}
