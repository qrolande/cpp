//
// Created by Quayle Rolande on 3/27/22.
//

#include "ShrubberyCreationForm.h"
#include "Bureaucrat.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main() {

	int grade;
	std::cout << "Enter default grade:" << std::endl;
	std::cin >> grade;

	try {
		Bureaucrat a("R2D2", grade);
		Form *one = new ShrubberyCreationForm("C3PO");
		Form *two = new RobotomyRequestForm("Han Solo");
		Form *three = new PresidentialPardonForm("BB8");
		try {
			a.signForm(*two);
			a.signForm(*one);
			a.signForm(*three);
			a.executeForm(*one);
			a.executeForm(*three);
			for (int i = 0; i < 5; ++i) {
				a.executeForm(*two);
			}
		}
		catch (const std::exception & e) {
			std::cerr << e.what() << std::endl;
		}
	}
	catch (const std::exception & e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
