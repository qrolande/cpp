//
// Created by Quayle Rolande on 3/29/22.
//

#ifndef CPP05_ROBOTOMYREQUESTFORM_H
#define CPP05_ROBOTOMYREQUESTFORM_H

#include "Form.h"
#include "cmath"

class RobotomyRequestForm : public Form {
private:
	std::string target;
public:
	RobotomyRequestForm();
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &a);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &a);
	virtual void execute(Bureaucrat const &executor) const;
};


#endif //CPP05_ROBOTOMYREQUESTFORM_H
