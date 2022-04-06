//
// Created by Quayle Rolande on 3/26/22.
//

#include "Animal.h"
#include "Cat.h"
#include "Dog.h"
#include "WrongCat.h"

int main() {
	const Animal *animal = new Animal();
	const Animal *cat = new Cat();
	const Animal *dog = new Dog();
	{
		std::cout << std::endl;
		std::cout << animal->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		std::cout << dog->getType() << " " << std::endl;
		std::cout << std::endl;
		animal->makeSound();
		cat->makeSound();
		dog->makeSound();
	}
	{
		std::cout << std::endl;
		WrongAnimal wronganimal = WrongCat();
		WrongCat wrongcat = WrongCat();
		std::cout << std::endl;
		wronganimal.makeSound();
		wrongcat.makeSound();
		std::cout << std::endl;
	}
	delete animal;
	delete cat;
	delete dog;
	return 0;
}