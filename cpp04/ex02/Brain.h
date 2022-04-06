//
// Created by Quayle Rolande on 3/26/22.
//

#ifndef CPP04_BRAIN_H
#define CPP04_BRAIN_H

#include <iostream>

class Brain {
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain &a);
	~Brain();
	Brain& operator=(const Brain &a);
};


#endif //CPP04_BRAIN_H
