#ifndef ARRAY_H
# define ARRAY_H

# include <exception>
# include <stdexcept>

template <typename T>
class Array {

    public:

        Array(void) : _arr(new T [0]), _size(0) {};
        Array (unsigned int n) : _arr(new T [n]), _size(n) {};
        Array(Array & cpy)
        {
            this->_size = cpy.size();
            this->_arr = new T (this->_size);
            for (int i = 0; i < this->_size; i++)
                this->_arr[i] = cpy[i];
        };
        ~Array(void) {delete [] this->_arr;};
        Array & operator=(Array const & src)
        {
            delete [] this->_arr;
            this->_size = src.size();
            this->_arr = new T (this->_size);
            for (int i = 0; i < this->_size; i++)
                this->_arr[i] = src[i];
            return (*this);
        };
        T & operator[](int i) const
        {
            if (i < 0 || i >= this->_size)
                throw std::out_of_range("Out of range");
            else
                return (this->_arr[i]);
        };
        int size(void) const {return (this->_size);};
        T * getArr(void) const {return (this->_arr);};

    private:
        T   *_arr;
        int _size;
};

#endif