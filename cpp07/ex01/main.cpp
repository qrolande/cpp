//
// Created by Quayle Rolande on 4/2/22.
//

#include "iter.h"

template<typename T>
void ft_toupper(T &i) {
	std::cout << (char)toupper(i);
}

int main()
{
	std::string array;
	int len;

	std::cin >> array;
	len = array.length();
	iter(array.c_str(), len, ft_toupper);
	std::cout << std::endl;
	return 0;
}
