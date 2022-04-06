//
// Created by Quayle Rolande on 3/29/22.
//

#ifndef CPP05_PRESIDENTIALPARDONFORM_H
#define CPP05_PRESIDENTIALPARDONFORM_H

#include "Form.h"

class PresidentialPardonForm : public Form {
private:
	std::string target;
public:
	PresidentialPardonForm();
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &a);
	PresidentialPardonForm& operator=(const PresidentialPardonForm &a);
	virtual void execute(Bureaucrat const &executor) const;
};


#endif //CPP05_PRESIDENTIALPARDONFORM_H
