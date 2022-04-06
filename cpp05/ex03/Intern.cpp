//
// Created by Quayle Rolande on 3/29/22.
//

#include "Intern.h"

Intern::Intern() {
	std::cout << "Intern default constructor called!" << std::endl;
}

Intern::~Intern() {
	std::cout << "Intern destructor called!" << std::endl;
}

Intern::Intern(const Intern &a) {
	*this = a;
	std::cout << "Intern copy constructor called!" << std::endl;
}


int get_status(std::string a) {
	int i, j;
	std::string forms[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (i = 0, j = 0; i < 4 && j == 0; i++)
		j = a.compare(forms[i]) == 0 ? i + 1 : 0;
	return (j);
}

Form* Intern::makeForm(std::string name, std::string target) {
	int num = get_status(name);
	switch (num) {
		case 1:
			std::cout << "Intern creates " << name << " form" << std::endl;
			return new ShrubberyCreationForm(target);
		case 2:
			std::cout << "Intern creates " << name << " form" << std::endl;
			return new RobotomyRequestForm(target);
		case 3:
			std::cout << "Intern creates " << name << " form" << std::endl;
			return new PresidentialPardonForm(target);
	}
	std::cout << "Form creation error" << std::endl;
	return NULL;
}