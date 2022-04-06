//
// Created by Quayle Rolande on 3/29/22.
//

#ifndef CPP05_SHRUBBERYCREATIONFORM_H
#define CPP05_SHRUBBERYCREATIONFORM_H

#include "Form.h"
#include "fstream"

class ShrubberyCreationForm : public Form {
private:
	std::string target;
public:
	ShrubberyCreationForm();
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &a);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &a);
	virtual void execute(Bureaucrat const &executor) const;
};


#endif //CPP05_SHRUBBERYCREATIONFORM_H
