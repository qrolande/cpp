//
// Created by Quayle Rolande on 03/04/2022.
//

#ifndef CPP08_EASYFIND_H
#define CPP08_EASYFIND_H

#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <list>

template <typename T>
int easyfind(T & cont, int arg) {
	typename T::iterator ptr;

	ptr = std::find(cont.begin(), cont.end(), arg);
	if (ptr == cont.end())
		throw std::string("Can't find");
	return *ptr;
}

#endif //CPP08_EASYFIND_H
