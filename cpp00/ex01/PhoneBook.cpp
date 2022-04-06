#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->num_contacts = 0;
}

PhoneBook::~PhoneBook() {
	std::cout << "\nExit program, goodbye!" << '\n';
}

void PhoneBook::add_in_book(int i) {
	int n = 1;
	if (this->num_contacts != 8)
		this->num_contacts++;
	while (n)
		n = this->contacts[i].add();
}

void PhoneBook::overlap_contact(void) {
	std::cout << "\nPhonebook is full! Oldest contact was deleted\n";
	for (int i = 0; i < 7; i++)
		this->contacts[i] = this->contacts[i + 1];
}

int PhoneBook::checkindex(void) {
	std::string line;
	if (!(std::getline(std::cin, line)))
		exit (1);
	if (line == "0") {
		std::cout << "\nEnd of SEARCH" << std::endl;
		return (0);
	}
	if (line.length() != 1) {
		std::cout << "\nThere is no index like " << line << std::endl;
		return (1);
	}
	for (int i = 0; i < this->num_contacts; i++) {
		if (i == (line[0] - '0') - 1) {
			this->contacts[i].index();
			return (0);
		}
	}
	std::cout << "There is no index like " << line << std::endl;
	return (1);
}

void PhoneBook::search_in_book(void) {
	if (this->num_contacts == 0) {
		std::cout << "\nYour phonebook is empty\n";
		return;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->num_contacts; i++) {
		this->contacts[i].print(i);
		std::cout << "|-------------------------------------------|" << std::endl;
	}
	do {
		std::cout << "\nEnter index of contact: ";
	}
	while (this->checkindex());
}
