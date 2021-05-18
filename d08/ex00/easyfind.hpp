#ifndef EASYFIND_H
# define EASYFIND_H

# include <iterator>
# include <algorithm>

template <typename T>
typename T::iterator
easyfind(T & t, int val)
{
	return (std::find(t.begin(), t.end(), val));
}

#endif
