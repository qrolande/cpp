#include "Fixed.h"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed(const Fixed &a) {
	std::cout << "Copy constructor called" << std::endl;
	*this = a;
}

Fixed::Fixed(const int num) {
	std::cout << "Int constructor called" << std::endl;
	value = (num << bits);
}

Fixed::Fixed(const float num) {
	std::cout << "Float constructor called" << std::endl;
	value = (roundf(num * (1 << bits)));
}

Fixed &Fixed::operator=(const Fixed &a) {
	std::cout << "Copy assigment operator called" << std::endl;
	value = a.getRawBits();
	return (*this);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat() const {
	return ((float)value / (float)(1 << bits));
}

int Fixed::toInt() const {
	return ((int)(value >> bits));
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->value);
}

void Fixed::setRawBits(const int raw) {
	this->value = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

std::ostream& operator<< (std::ostream &out, const Fixed &a) {
	out << a.toFloat();
	return out;
}