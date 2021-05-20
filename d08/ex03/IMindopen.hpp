#ifndef IMINDOPEN_H
# define IMINDOPEN_H

# include <vector>

class IMindopen {
    public:
        virtual ~IMindopen(void) {};

        virtual void execute(std::vector<char>::iterator it) const = 0; 
};

#endif