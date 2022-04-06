//
// Created by Quayle Rolande on 3/23/22.
//

#ifndef CPP03_SCAVTRAP_H
#define CPP03_SCAVTRAP_H

#include "ClapTrap.h"

class ScavTrap : public ClapTrap{
public:
	ScavTrap();
	~ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &a);
	ScavTrap &operator=(const ScavTrap &a);

	void attack(std::string const &target);
	void guardGate();

};


#endif //CPP03_SCAVTRAP_H
