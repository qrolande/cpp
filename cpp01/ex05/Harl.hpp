#ifndef CPP01_HARL_HPP
#define CPP01_HARL_HPP

#include <iostream>

class Harl {
private:
	void (Harl::*ptrFnc[5])(void);

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
public:
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif
