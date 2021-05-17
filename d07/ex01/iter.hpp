#ifndef ITER_H
# define ITER_H

template <typename T>
void
iter(T * arr, int size, void (*f)(T *))
{
    for (int i = 0; i < size; i++)
        f(&arr[i]);
}

#endif