#ifndef INCPTR_H
# define INCPTR_H

# include "IMindopen.hpp"

class IncPtr {

public:

    IncPtr(void);
    IncPtr(IncPtr const & src);
    ~IncPtr(void);

    IncPtr &  operator=(IncPtr const & src);

    void execute(std::vector<char>::iterator it) const;

};

#endif
