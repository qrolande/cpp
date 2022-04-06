//
// Created by Quayle Rolande on 3/27/22.
//

#include "Bureaucrat.h"

int main()
{
	int grade;
	int gr_to_sing;
	std::cout << "Enter default grade:" << std::endl;
	std::cin >> grade;
	std::cout << "Enter grade to sing:" << std::endl;
	std::cin >> gr_to_sing;

	if (gr_to_sing < 1)
		gr_to_sing = 1;
	if (gr_to_sing > 150)
		gr_to_sing = 150;

	try {
		Bureaucrat a("Cezar", grade);
		std::cout << a << std::endl << std::endl;
		Form b("formB", gr_to_sing, 40);
		std::cout << b << std::endl;
		try {
			a.signForm(b);
			b.beSigned(a);
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
		std::cout << std::endl;
		std::cout << b << std::endl;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
	return 0;
}