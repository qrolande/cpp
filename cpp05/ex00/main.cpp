//
// Created by Quayle Rolande on 3/27/22.
//

#include "Bureaucrat.h"

int main()
{
	int res;
	std::cout << "Enter default grade:" << std::endl;
	std::cin >> res;
	Bureaucrat a("Cesar", res);
	std::cout << a << std::endl;
	std::cout << std::endl;

	std::cout << "Enter new grade:" << std::endl;
	std::cin >> res;
	a.setGrade(res);
	std::cout << std::endl;

	std::cout << a << std::endl;
	++a;
	std::cout << a << std::endl << std::endl;
	std::cout << a << std::endl;
	--a;
	--a;
	std::cout << a << std::endl << std::endl;
	return 0;
}