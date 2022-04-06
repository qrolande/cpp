//
// Created by Quayle Rolande on 3/27/22.
//

#include "Bureaucrat.h"
#include "Intern.h"

int main() {
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	std::cout << rrf->getName() << " create successfully!" << std::endl;
	return 0;
}
