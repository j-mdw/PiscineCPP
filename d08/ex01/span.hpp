#ifndef SPAN_H
# define SPAN_H

# include <exception>
# include <vector>
# include <algorithm>

class Span {

public:

    Span(unsigned int N);
    Span(Span const & src);
    ~Span(void);

    Span &  operator=(Span const & src);

    unsigned int        getSize(void) const;
    std::vector<int> *  getVec(void) const;
    
    void    addNumber(int);
    int     shortestSpan(void) const;
    int     longestSpan(void) const;

    class ArrayIsFullException : public std::exception {
        virtual const char * what() const throw();
    };
    class  NotEnoughElementsInArray : public std::exception {
        virtual const char * what() const throw();
    };

private:
    Span(void);
    unsigned int _maxSize;
    std::vector<int> *_vec;
};

#endif
