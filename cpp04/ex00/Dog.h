//
// Created by Quayle Rolande on 3/26/22.
//

#ifndef CPP04_DOG_H
#define CPP04_DOG_H

#include "Animal.h"

class Dog : public Animal{
public:
	Dog();
	virtual ~Dog();
	Dog(const Dog &a);
	Dog &operator=(const Dog &a);

	virtual void makeSound()const;
};


#endif //CPP04_DOG_H
