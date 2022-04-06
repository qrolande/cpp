//
// Created by Quayle Rolande on 3/27/22.
//

#include "Bureaucrat.h"

Bureaucrat::Bureaucrat() {
	std::cout << "Default Bureaucrat constructor called!" << std::endl;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Default Bureaucrat destructor called!" << std::endl;
}

void Bureaucrat::setGrade(int grade) {
	try {
		if (grade > 150){
			this->grade = 150;
			throw Bureaucrat::GradeTooLowException();
		}
		if (grade < 1){
			this->grade = 1;
			throw Bureaucrat::GradeTooHighException();
		}
		else
			this->grade = grade;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade is to low!");
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade is to high!");
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	this->name = name;
	this->setGrade(grade);
	std::cout << "Bureaucrat constructor called!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a) {
	name = a.getName();
	grade = a.getGrade();
	std::cout << "Bureaucrat copy constructor called!" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &a) {
	this->grade = a.getGrade();
	std::cout << "Bureaucrat assigment operator called!" << std::endl;
	return (*this);
}

std::string Bureaucrat::getName(void) const {
	return (name);
}

int Bureaucrat::getGrade(void) const {
	return (grade);
}

Bureaucrat &Bureaucrat::operator++(void) {
	setGrade(grade - 1);
	return (*this);
}

Bureaucrat &Bureaucrat::operator--(void) {
	setGrade(grade + 1);
	return (*this);
}

std::ostream &operator<<(std::ostream& out, const Bureaucrat &a) {
	out << "My name is " << a.getName() << " and my bureaucrat grade is " << a.getGrade();
	return (out);
}
