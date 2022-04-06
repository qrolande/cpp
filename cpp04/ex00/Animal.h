//
// Created by Quayle Rolande on 3/26/22.
//

#ifndef CPP04_ANIMAL_H
#define CPP04_ANIMAL_H

#include <iostream>

class Animal {
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(std::string type);
	Animal(const Animal &a);
	Animal &operator=(const Animal &a);

	std::string getType()const;

	virtual void makeSound()const;
};


#endif //CPP04_ANIMAL_H
