#ifndef CPP02_FIXED_H
#define CPP02_FIXED_H

#include <iostream>
# include <cmath>

class Fixed {

private:
	int value;
	static const int bits = 8;

public:
	Fixed(void);
	Fixed(Fixed const &src);
	Fixed(const int num);
	Fixed(const float num);
	Fixed &operator = (const Fixed &src);
	~Fixed(void);

	float toFloat( void ) const;
	int toInt( void ) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
};

std::ostream& operator<< (std::ostream &out, const Fixed &point);

#endif
