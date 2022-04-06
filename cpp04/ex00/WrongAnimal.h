//
// Created by Quayle Rolande on 3/26/22.
//

#ifndef CPP04_WRONGANIMAL_H
#define CPP04_WRONGANIMAL_H

#include <iostream>

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &a);
	WrongAnimal(std::string type);
	~WrongAnimal();
	WrongAnimal &operator=(const WrongAnimal &src);
	void makeSound()const;
};


#endif //CPP04_WRONGANIMAL_H
