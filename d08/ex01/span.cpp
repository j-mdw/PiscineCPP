#include "span.hpp"

Span::Span(void) {}

Span::Span(unsigned int N) : 
    _maxSize(N),
    _vec(new std::vector<int>)
{}


Span::Span(Span const & src)
{
    this->_vec = NULL;
    this->operator=(src);
}

Span::~Span(void)
{
    delete this->_vec;
}

Span &
Span::operator=(Span const & src)
{
    if (this->_vec)
        delete this->_vec;
    this->_maxSize = src.getSize();
    this->_vec = new std::vector<int>(this->_maxSize);
    
    std::vector<int>::iterator it_this = this->getVec()->begin();
    for (std::vector<int>::iterator it_src = src.getVec()->begin();
    it_src != src.getVec()->end(); it_src++)
        *it_this = *it_src;
    return (*this);
}

unsigned int
Span::getSize(void) const
{
    return (this->_maxSize);
}

std::vector<int> *
Span::getVec(void) const
{
    return (this->_vec);
}

void
Span::addNumber(int val)
{
    if (this->_vec->size() >= this->_maxSize)
        throw ArrayIsFullException();
    this->_vec->push_back(val);
    std::sort(this->_vec->begin(), this->_vec->end());
}

int
Span::shortestSpan(void) const
{
    int span;
    int val;
    int last_val;

    if (this->_vec->size() <= 1)
        throw NotEnoughElementsInArray();

    std::vector<int>::iterator it = this->_vec->begin();
    last_val = *it;
    it++;
    val = *it;
    span = val - last_val;
    it++;
    for (;
    it != this->_vec->end(); it++)
    {
        last_val = val;
        val = *it;
        if ((val - last_val) < span)
            span = val - last_val;
    }
    return (span);
}

int
Span::longestSpan(void) const
{
    int min = *std::min_element(this->_vec->begin(), this->_vec->end());
    int max = *std::max_element(this->_vec->begin(), this->_vec->end());
    return (max - min);
}

const char *
Span::ArrayIsFullException::what(void) const throw()
{
   return ("Array is full");
}

const char *
Span::NotEnoughElementsInArray::what() const throw()
{
    return ("Not enough elements to compute span");
}