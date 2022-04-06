#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

int Contact::add() {
	std::cout << "Fields must not be empty!" << '\n';
	std::cout << "Enter First Name: ";
	if (!(std::getline(std::cin, this->first_name)))
		exit (1);
	std::cout << "Enter Last Name: ";
	if (!(std::getline(std::cin, this->last_name)))
		exit (1);
	std::cout << "Enter Nickname: ";
	if (!(std::getline(std::cin, this->nickname)))
		exit (1);
	std::cout << "Enter Phone Number: ";
	if (!(std::getline(std::cin, this->phone_number)))
		exit (1);
	std::cout << "Enter Darkest Secret: ";
	if (!(std::getline(std::cin, this->darkest_secret)))
		exit (1);
	if (this->first_name.length() == 0 || this->last_name.length() == 0 || this->nickname.length() == 0
		|| this->phone_number.length() == 0 || this->darkest_secret.length() == 0) {
		std::cout << "One or several fields are empty, try again!\n";
		return (1);
	}
	std::cout << "Success!\n";
	return (0);
}

void Contact::print(int i) {
	std::cout << "|";
	std::cout << std::setw(10) << i + 1 << "|";
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->first_name << "|";
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << this->last_name << "|";
	if (this->nickname.length() > 10)
		std::cout << this->nickname.substr(0, 9) << ".|\n";
	else
		std::cout << std::setw(10) << this->nickname << "|\n";
}

void Contact::index() {
	std::cout << "\nFirst name is: " << this->first_name << std::endl;
	std::cout << "Last name is: " << this->last_name << std::endl;
	std::cout << "Nickname is: " << this->nickname << std::endl;
	std::cout << "Phone number is: " << this->phone_number << std::endl;
	std::cout << "Darkest secret is: " << this->darkest_secret << std::endl;
}
