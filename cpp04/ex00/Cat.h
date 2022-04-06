//
// Created by Quayle Rolande on 3/26/22.
//

#ifndef CPP04_CAT_H
#define CPP04_CAT_H

#include "Animal.h"

class Cat : public Animal{
public:
	Cat();
	virtual ~Cat();
	Cat(const Cat &a);
	Cat &operator=(const Cat &a);

	virtual void makeSound()const;
};


#endif //CPP04_CAT_H
