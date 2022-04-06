//
// Created by Quayle Rolande on 4/2/22.
//

#ifndef CPP07_ITER_H
#define CPP07_ITER_H

#include <iostream>

template<typename T>
void iter(T *arr, int size, void (*func)(T &arg)) {
	for (int i = 0; i < size; ++i)
		func(arr[i]);
}

#endif //CPP07_ITER_H
