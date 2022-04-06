//
// Created by Quayle Rolande on 3/26/22.
//

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"

int main() {
	int res;
	std::cin >> res;

	Animal *zoo[res];

	for (int i = 1; i <= res; ++i) {
		if (i % 2)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
	}
	std::cout << std::endl;
	for (int i = 1; i <= res; ++i) {
		std::cout << "My number is " << i << " and i'm " << zoo[i]->getType() << "! " << std::endl;
		zoo[i]->makeSound();
		delete (zoo[i]);
		std::cout << std::endl;
	}
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		std::cout << std::endl;
		delete j;//should not create a leak
		delete i;
	}
	return 0;
}