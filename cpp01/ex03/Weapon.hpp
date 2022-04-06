#ifndef CPP01_WEAPON_HPP
#define CPP01_WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon {
private:
	std::string type;
public:
	Weapon(std::string type);
	Weapon();
	~Weapon();

	void setType(std::string type);
	const std::string& getType(void);
};

#endif
