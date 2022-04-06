#ifndef CPP01_HUMANA_HPP
#define CPP01_HUMANA_HPP

#include "Weapon.hpp"

class HumanA {
private:
	Weapon* weapon;
	std::string name;
public:
	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack(void);
};

#endif
