#include "Zombie.hpp"

int main(void) {
	Zombie* Battalion;
	int i = 0;
	int res;

	std::cin >> res;
	Battalion = zombieHorde(res, "Stormtrooper");
	while (i < res) {
		Battalion[i].announce();
		i++;
	}
	delete[] Battalion;
	return (0);
}
