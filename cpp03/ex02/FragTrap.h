//
// Created by Quayle Rolande on 3/24/22.
//

#ifndef CPP03_FRAGTRAP_H
#define CPP03_FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap{
public:
	FragTrap();
	~FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &a);
	FragTrap &operator=(const FragTrap &a);
	void highFiveGuys(void);
};


#endif //CPP03_FRAGTRAP_H
