//
// Created by Quayle Rolande on 3/22/22.
//

#include "ScavTrap.h"

int main(void)
{
	int dm;
	int st;
	ScavTrap a;
	ScavTrap b(a);
	ScavTrap c("Death Star");

	a = c;
	std::cout << "Enter 'Stamina' point" << std::endl;
	std::cin >> st;
	b.setEnergy(st);
	while (a.getHealth() > 0 && b.getEnergy() > 0) {
		std::cout << "Enter 'Damage' point" << std::endl;
		std::cin >> dm;
		b.setDamage(dm);
		if (b.getDamage() > 0) {
			std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
			b.attack(a.getName());
			a.takeDamage(b.getDamage());
			if (a.getHealth() > 0) {
				std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
				a.beRepaired(10);
				std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
				a.guardGate();
				std::cout << "Now Rebels are doooomed!" << std::endl << std::endl;
			}
			std::cout << b.getName() << " have " << b.getEnergy() << " stamina points!" << std::endl;
		} else
			std::cout << b.getName() << " don't have any fire power! We are dooooomed!" << std::endl << std::endl;
	}
	if (a.getHealth() <= 0) {
		std::cout << a.getName() << ": current hp is: " << a.getHealth() << std::endl;
		std::cout << a.getName() << " exploded, the Rebels won!" << std::endl << std::endl;
		return 0;
	} else if (b.getEnergy() <= 0){
		std::cout << b.getName() << " spent all the stamina and lost the battle!" << std::endl << std::endl;
		return 1;
	}
}
