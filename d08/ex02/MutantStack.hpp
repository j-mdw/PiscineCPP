#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <stack>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {

public:

    MutantStack(void) {};
    MutantStack(MutantStack const & src) : std::stack<T>(src) {};
    ~MutantStack(void) {};
    MutantStack &  operator=(MutantStack const & src) { src = std::stack<T>::operator=(src); };

    class iterator {
        public:
            iterator(void) : _valAdr(NULL) {};
            iterator(T * val) : _valAdr(val) {};
            iterator(iterator const & src) : _valAdr(src.getVal())  {};
            ~iterator(void) {};
            iterator & operator=(iterator const & src) { this->_valAdr = src.getVal(); };

            T * getVal(void) const { return (this->_valAdr); };
            iterator operator++(void) { return (--this->_valAdr); };
            iterator operator--(void) { return (++this->_valAdr); };
            iterator operator++(int) { return (--this->_valAdr); };
            iterator operator--(int) { return (++this->_valAdr); }; 
            int operator*(void) const { return (*this->_valAdr); };

        private:
            T *_valAdr;
    };
    iterator begin(void) const
    {
        iterator it( &const_cast<T &>( this->top() ) );
        return (it);
    };
    iterator end(void) const
    {
        iterator it( &( const_cast<T &>( this->top() ) ) - this->size() );
        return (it);
    };
};

#endif
