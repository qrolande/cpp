//
// Created by Quayle Rolande on 3/27/22.
//

#include "Form.h"

Form::Form() : gradeToSign(1), gradeToExecute(0) {
	std::cout << "Default Form constructor called!" << std::endl;
}

Form::~Form() {
	std::cout << "Form destructor called!" << std::endl;
}

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : name(name), isSign(false),
		gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	if (gradeToExecute > 150 || gradeToSign > 150)
		throw GradeTooLowException();
	std::cout << "Form constructor called with all parameters!" << std::endl;
}

Form::Form(const Form &a) : name(a.name), isSign(a.isSign),
			gradeToSign(a.gradeToSign), gradeToExecute(a.gradeToExecute) {
	std::cout << "Bureaucrat copy constructor called!" << std::endl;
}

Form &Form::operator=(const Form &a) {
	this->isSign = a.isSign;
	std::cout << "Form assigment operator called!" << std::endl;
	return (*this);
}

std::string Form::getName(void) const {
	return (this->name);
}

bool Form::getIsSign(void) const {
	return this->isSign;
}

int Form::getGradeToSign(void) const {
	return this->gradeToSign;
}

int Form::getGradeToExecute(void) const {
	return this->gradeToExecute;
}

void Form::beSigned(const Bureaucrat &a) {
	if (a.getGrade() <= this->gradeToSign)
		this->isSign = true;
	else
		throw Form::GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw() {
	return ("Grade is to low!");
}

const char *Form::GradeTooHighException::what() const throw() {
	return ("Grade is to high!");
}

std::ostream& operator<<(std::ostream& out, const Form &a) {
	out << "Form name is: " << a.getName() << std::endl
	<< "is it signed?: " << a.getIsSign() << std::endl
	<< "grade to sign is: " << a.getGradeToSign() << std::endl
	<< "grade to execute is: " << a.getGradeToExecute() << std::endl;
	return out;
}

const char *Form::FormNotSignedException::what() const throw() {
	return ("Form is not signed!");
}

