#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
	Zombie* dynamo_zombie = new Zombie(name);

	return (dynamo_zombie);
}
