//
// Created by Quayle Rolande on 3/26/22.
//

#ifndef CPP04_WRONGCAT_H
#define CPP04_WRONGCAT_H

#include "WrongAnimal.h"

class WrongCat: public WrongAnimal{
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &a);
	WrongCat &operator=(const WrongCat &a);

	void makeSound() const;
};


#endif //CPP04_WRONGCAT_H
