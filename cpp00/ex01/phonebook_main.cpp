#include "PhoneBook.hpp"

void intro() {
	std::cout << "+-------------------------------------------------------+\n";
	std::cout << "|                 AWESOME PHONE BOOK                    |\n";
	std::cout << "+-------------------------------------------------------+\n";
	std::cout << "|               Save your contacts here!                |\n";
	std::cout << "+-------------------------------------------------------+\n";
	std::cout << "\n";
	std::cout << "+-------------------------------------------------------+\n";
	std::cout << "|                  AVAILABLE COMMANDS                   |\n";
	std::cout << "+-------------------------------------------------------+\n";
	std::cout << "|                                                       |\n";
	std::cout << "|     ADD     -   use this command to add contact       |\n";
	std::cout << "|                 to phone book                         |\n";
	std::cout << "|                                                       |\n";
	std::cout << "|     SEARCH  -   shows a list of contacts,             |\n";
	std::cout << "|                 then you need to enter the serial     |\n";
	std::cout << "|                 number of the contact to view         |\n";
	std::cout << "|                 the detailed information.             |\n";
	std::cout << "|                                                       |\n";
	std::cout << "|     EXIT    -   exit from PhoneBook                   |\n";
	std::cout << "|                 ATTENTION! All contacts will be lost! |\n";
	std::cout << "|                                                       |\n";
	std::cout << "+-------------------------------------------------------+\n";
}

int main()
{
	std::string line;
	int i = 0;
	PhoneBook phoneBook;

	intro();
	while (1)
	{
		std::cout << "Enter commands: " << '\n';
		if (!(std::getline(std::cin, line)))
			exit(1);
		else if (line == "ADD") {
			if (i == 8) {
				phoneBook.overlap_contact();
				i--;
			}
			phoneBook.add_in_book(i++);
		}
		else if (line == "SEARCH")
			phoneBook.search_in_book();
		else if (line == "EXIT")
			break ;
		else
			std::cout << "Command not found, try again with walid commands [ADD, SEARCH, EXIT]" << '\n';
	}
	return (0);
}