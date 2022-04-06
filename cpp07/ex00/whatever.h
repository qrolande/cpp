//
// Created by Quayle Rolande on 4/2/22.
//

#ifndef CPP07_WHATEVER_H
#define CPP07_WHATEVER_H

#include "iostream"

template<typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template<typename T>
T min(T& a, T& b) {
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T max(T& a, T& b) {
	if (a > b)
		return (a);
	else
		return (b);
}

#endif //CPP07_WHATEVER_H
