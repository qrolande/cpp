#include "Zombie.hpp"

int main(void) {
	Zombie* dynamo_zombie = newZombie("Dota player");
	dynamo_zombie->announce();
	randomChump("CSGO player");
	delete dynamo_zombie;
	return (0);
}

