#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Tutu.hpp"

int main(void)
{
    std::cout << "\n-----Sorcerer Tests-----\n" << std::endl;
    {
        Sorcerer s1("John", "Goalee");
        Sorcerer s2("Terry", "Defender");

        std::cout << s1;
        std::cout << s2;
        std::cout << "\n---Sorcerer = operator---\n" << std::endl;    
        s1 = s2;
        std::cout << s2;
        std::cout << "\n---Sorcerer copy constructor---\n" << std::endl; 
        Sorcerer s3(s2);
        std::cout << s2;
    }
    std::cout << "\n-----Victim Tests-----\n" << std::endl;
    {
        Victim v1("Nono");
        Victim v2("Nana");
    
        std::cout << v1 << v2;
        std::cout << "\n---Victim = operator---\n" << std::endl;
        v2 = v1;
        std::cout << v2;
        std::cout << "\n---Victim copy constructor---\n" << std::endl; 
        Victim v3(v2);
        std::cout << v3;
        v3.getPolymorphed();
    }
    std::cout << "\n-----Peon Tests-----\n" << std::endl;
    {
        Peon v1("Pono");
        Peon v2("Pana");
    
        std::cout << v1 << v2;
        std::cout << "\n---Peon = operator---\n" << std::endl;
        v2 = v1;
        std::cout << v2;
        std::cout << "\n---Peon copy constructor---\n" << std::endl; 
        Peon v3(v2);
        std::cout << v3;
        v3.getPolymorphed();
    }
    std::cout << "\n-----Tutu Tests-----\n" << std::endl;
    {
        Tutu v1("Tuta");
        Tutu v2("Tuto");
    
        std::cout << v1 << v2;
        std::cout << "\n---Tutu = operator---\n" << std::endl;
        v2 = v1;
        std::cout << v2;
        std::cout << "\n---Tutu copy constructor---\n" << std::endl; 
        Tutu v3(v2);
        std::cout << v3;
        v3.getPolymorphed();
    }
    std::cout << "\n-----Putting it all together-----\n" << std::endl;
    {
        Victim *v1;
        Victim v2("Henri");
        Peon p1("Natasha");
        v1 = &p1;
        Sorcerer    s("Jim", "Small boss");

        s.polymorph(v2);
        s.polymorph(p1);
        v1->getPolymorphed();
    }
    std::cout << "\n-----42 subject tests-----\n" << std::endl;
    {
        Sorcerer robert("Robert", "the Magnificent");
        Victim jim("Jimmy");
        Peon joe("Joe");
        std::cout << robert << jim << joe;
        robert.polymorph(jim);
        robert.polymorph(joe);
    }
    return (0);
}