#ifndef CPP02_FIXED_H
#define CPP02_FIXED_H

#include <iostream>

class Fixed {

private:
	int value;
	static const int bits = 8;

public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed &operator = (const Fixed &src);
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw);
};


#endif
