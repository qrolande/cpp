//
// Created by Quayle Rolande on 3/29/22.
//

#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137) {
	std::cout << "ShrubberyCreationForm default constructor called!" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target) {
	std::cout << "ShrubberyCreationForm constructor called with all parameters!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a) : Form(a), target(a.target) {
	std::cout << "ShrubberyCreationForm copy constructor called!" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &a) {
	Form::operator=(a);
	this->target = a.target;
	std::cout << "ShrubberyCreationForm assigment operator called!" << std::endl;
	return (*this);
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!this->getIsSign())
		throw FormNotSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw GradeTooLowException();
	else {
		std::ofstream out;
		std::string const temp = (target + "_shrubbery");
		out.open(temp.c_str(), std::ios_base::out | std::ios_base::trunc);
		if (!out.is_open())
			std::cout << "Error: can't open file!" << std::endl;
		else {
			out <<
			    "                                               ." << std::endl <<
			    "                                   .         ;" << std::endl <<
			    "      .              .              ;%     ;;" << std::endl <<
			    "        ,           ,                :;%  %;" << std::endl <<
			    "         :         ;                   :;%;'     .," << std::endl <<
			    ",.        %;     %;            ;        %;'    ,;" << std::endl <<
			    "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl <<
			    "   %;       %;%;      ,  ;       %;  ;%;   ,%;'" << std::endl <<
			    "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl <<
			    "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl <<
			    "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl <<
			    "         `:%;.  :;bd%;          %;@%;'" << std::endl <<
			    "           `@%:.  :;%.         ;@@%;'" << std::endl <<
			    "             `@%.  `;@%.      ;@@%;" << std::endl <<
			    "               `@%%. `@%%    ;@@%;" << std::endl <<
			    "                 ;@%. :@%%  %@@%;" << std::endl <<
			    "                   %@bd%%%bd%%:;" << std::endl <<
			    "                     #@%%%%%:;;" << std::endl <<
			    "                     %@@%%%::;" << std::endl <<
			    "                     %@@@%(o);  . '" << std::endl <<
			    "                     %@@@o%;:(.,'" << std::endl <<
			    "                 `.. %@@@o%::;" << std::endl <<
			    "                    `)@@@o%::;" << std::endl <<
			    "                     %@@(o)::;" << std::endl <<
			    "                    .%@@@@%::;" << std::endl <<
			    "                    ;%@@@@%::;." << std::endl <<
			    "                   ;%@@@@%%:;;;." << std::endl <<
			    "               ...;%@@@@@%%:;;;;,.." << std::endl;
			out.close();
		}
	}
}
