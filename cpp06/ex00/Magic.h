//
// Created by Quayle Rolande on 3/30/22.
//

#ifndef CPP06_MAGIC_H
#define CPP06_MAGIC_H

#include "iostream"
#include "string"
#include "limits"

#define NONE    0
#define SPECIAL 1
#define CHAR    2
#define INT     3
#define FLOAT   4
#define DOUBLE  5

class Magic {
private:
	std::string value;
	char c;
	int type;
	double num;
public:
	Magic(std::string value);
	Magic(const Magic &a);
	Magic &operator=(const Magic &a);
	~Magic();

	int typeDetector() const;
	void printFunc();

	bool Char() const;
	bool Int() const;
	bool Float() const;
	bool Double() const;
	bool Special() const;
	bool FloatSpec() const;

	void printChar() const;
	void printInt() const;
	void printFloat() const;
	void printDouble();
};

#endif //CPP06_MAGIC_H
