//
// Created by Quayle Rolande on 3/29/22.
//

#ifndef CPP05_INTERN_H
#define CPP05_INTERN_H

# include "Form.h"
# include "PresidentialPardonForm.h"
# include "RobotomyRequestForm.h"
# include "ShrubberyCreationForm.h"

class Intern {
public:
	Intern();
	virtual ~Intern();
	Intern(const Intern &a);

	Form* makeForm(std::string name, std::string target);
};


#endif //CPP05_INTERN_H
