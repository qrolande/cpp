#ifndef CPP01_ZOMBIE_HPP
#define CPP01_ZOMBIE_HPP

#include <iostream>
#include <iomanip>

class Zombie {
private:
	std::string name;
public:
	Zombie();
	~Zombie();

	void announce(void);
	void setname(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
