#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <string>

class Zombie {

public:

    Zombie(std::string type, std::string name);
    ~Zombie(void);

    void    annonce(void) const;
    void    setname(std::string name);
    void    settype(std::string type);

private:

    std::string _type;
    std::string _name;

};

#endif