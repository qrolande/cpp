//
// Created by Quayle Rolande on 3/27/22.
//

#ifndef CPP05_BUREAUCRAT_H
#define CPP05_BUREAUCRAT_H

#include <iostream>
#include "Form.h"

class Form;

class Bureaucrat {
private:
	std::string name;
	int grade;
public:
	Bureaucrat();
	virtual ~Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &a);
	Bureaucrat &operator=(const Bureaucrat &a);
	Bureaucrat &operator++();
	Bureaucrat &operator--();

	std::string getName(void) const;
	int getGrade(void) const;
	void setGrade(int grade);

	void signForm(Form &a) const;
	void executeForm(Form const &form);

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

};

std::ostream &operator<<(std::ostream& out, const Bureaucrat &a);

#endif //CPP05_BUREAUCRAT_H
