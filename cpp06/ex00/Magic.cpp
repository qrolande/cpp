//
// Created by Quayle Rolande on 3/30/22.
//

#include "Magic.h"

Magic::Magic(std::string value) : value(value) {
	type = typeDetector();
	if (type == CHAR) {
		c = value[0];
		num = static_cast<double>(value[0]);
	} else if (type != SPECIAL)
		num = std::atof(value.c_str());
}

Magic::~Magic() {}

Magic::Magic(const Magic &a): value(a.value), c(a.c), type(a.type), num(a.num) {}

Magic &Magic::operator=(const Magic &a) {
	value = a.value;
	type = a.type;
	c = a.c;
	num = a.num;
	return (*this);
}

int Magic::typeDetector() const {
	if (Char())
		return (CHAR);
	else if (Special())
		return (SPECIAL);
	else if (Int())
		return (INT);
	else if (Float())
		return (FLOAT);
	else if (Double())
		return (DOUBLE);
	return (NONE);
}

bool Magic::Special() const {
	std::string temp[] = {"-inff", "+inff", "nanf","-inf", "+inf", "nan"};
	for (int i = 0; i < 6; ++i) {
		if (temp[i].find(value) != std::string::npos)
			return (true);
	}
	return (false);
}

bool Magic::Char() const {
	return (value.length() == 1 && isprint(value[0]) && !isdigit(value[0]));
}

bool Magic::Int() const {
	if (value.find('.') == std::string::npos) {
		for (int i = 0; value[i]; ++i) {
			if (isdigit(value[i]))
				continue;
			else
				return (false);
		}
		return (true);
	}
	return (false);
}

bool Magic::Float() const {
	if (value.length() > 1 && value.find('.') && value.back() == 'f')
		return (true);
	return (false);
}

bool Magic::Double() const {
	if (value.length() > 1 && value.find('.') != std::string::npos)
		return (true);
	return (false);
}

bool Magic::FloatSpec() const {
	std::string temp[] = {"nanf", "+inff", "-inff"};
	for (int i = 0; i < 3; ++i) {
		if (!value.compare(temp[i]))
			return (true);
	}
	return (false);
}

void Magic::printChar() const {
	std::cout << "char: ";
	if (type == CHAR)
		std::cout << c;
	else if (type == SPECIAL)
		std::cout << "impossible";
	else if (type == NONE)
		std::cout << "Bad argument!";
	else if (!isprint(static_cast<int>(num)))
		std::cout << "Non displayable";
	else
		std::cout << static_cast<char>(num);
	std::cout << std::endl;
}

void Magic::printInt() const {
	std::cout << "int: ";
	if (type == INT)
		std::cout << num;
	else if (type == SPECIAL || num > INT32_MAX || num < INT32_MIN)
		std::cout << "impossible";
	else if (type == NONE)
		std::cout << "Bad argument!";
	else
		std::cout << static_cast<int>(num);
	std::cout << std::endl;
}

void Magic::printFloat() const {
	std::cout << "float: ";
	if (type == FLOAT || type == DOUBLE)
		std::cout << num << 'f';
	else if (type == SPECIAL) {
		if (FloatSpec())
			std::cout << value;
		else
			std::cout << value << 'f';
	}
	else if (type == NONE)
		std::cout << "Bad argument!";
	else
		std::cout << static_cast<float>(num) << ".0f";
	std::cout << std::endl;
}

void Magic::printDouble() {
	std::cout << "double: ";
	if (type == DOUBLE || type == FLOAT)
		std::cout << num;
	else if (type == SPECIAL) {
		if (FloatSpec())
			value.erase(value.length() - 1);
		std::cout << value;
	}
	else if (type == NONE)
		std::cout << "Bad argument!";
	else
		std::cout << static_cast<double>(num) << ".0";
	std::cout << std::endl;
}

void Magic::printFunc() {
	this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();
}