#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>
# include <queue>

template <typename T>
class MutantStack : public std::stack<T> {

public:
    typedef typename std::stack<T>::container_type::iterator iterator;

    MutantStack(void) {};
    MutantStack(MutantStack const & src) : std::stack<T>(src) {};
    ~MutantStack(void) {};
    MutantStack &  operator=(MutantStack const & src) { src = std::stack<T>::operator=(src); };

    iterator begin(void)
    {
        return (std::stack<T>::c.begin()) ;
    };
    iterator end(void)
    {
        return (std::stack<T>::c.end());
    };
};

#endif
