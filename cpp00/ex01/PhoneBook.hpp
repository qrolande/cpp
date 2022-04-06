#ifndef CPP00_PHONEBOOK_HPP
#define CPP00_PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	private:
		Contact contacts[8];
		int num_contacts;
	public:
		PhoneBook();
		~PhoneBook();

		void add_in_book(int i);
		void print_book(int i);
		void overlap_contact(void);
		void search_in_book(void);
		int checkindex(void);
};

#endif
