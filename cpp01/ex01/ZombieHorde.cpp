#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
	Zombie* horde = NULL;
	int i = 0;
	if (N < 1)
		std::cout << "N cannot be less than zero!" << std::endl;
	else {
		horde = new Zombie[N];
		while (i < N) {
			horde[i].setname(name);
			i++;
		}
	}
	return (horde);
}