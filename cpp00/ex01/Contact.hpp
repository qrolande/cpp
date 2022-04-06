#ifndef CPP00_CONTACT_HPP
#define CPP00_CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		~Contact();

		int add(void);
		void print(int num);
		void index(void);
};

#endif
