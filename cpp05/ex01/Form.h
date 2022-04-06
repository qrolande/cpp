//
// Created by Quayle Rolande on 3/27/22.
//

#ifndef CPP05_FORM_H
#define CPP05_FORM_H

#include "Bureaucrat.h"

class Bureaucrat;

class Form {
private:
	const std::string name;
	bool isSign;
	const int gradeToSign;
	const int gradeToExecute;
public:
	Form();
	Form(std::string name, int gradeToSign, int gradeToExecute);
	Form(const Form& a);
	Form& operator=(const Form& a);
	~Form();

	std::string getName(void) const;
	bool getIsSign(void) const;
	int getGradeToSign(void) const;
	int getGradeToExecute(void) const;

	void beSigned(const Bureaucrat &a);

	class GradeTooHighException : public std::exception {
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
	public:
		virtual const char* what() const throw();
	};

};

std::ostream &operator<<(std::ostream& out, const Form &a);


#endif //CPP05_FORM_H
