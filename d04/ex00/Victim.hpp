#ifndef VICTIM_H
# define VICTIM_H

# include <string>
# include <iostream>

class Victim {

public:

    Victim(std::string name);
    Victim(Victim const & src);
    ~Victim(void);

    Victim &  operator=(Victim const & src);

    std::string getName(void) const;
    virtual void    getPolymorphed(void) const;

protected:
    Victim(void);
    std::string name;

};

std::ostream & operator<<(std::ostream & o, Victim const & ins);

#endif
