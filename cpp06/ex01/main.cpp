//
// Created by Quayle Rolande on 3/31/22.
//

#include <iostream>

struct Data {
	std::string firstName;
	std::string lastName;
	double 		dickSize;
	int 		age;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

std::ostream& operator<<(std::ostream& out, const Data &a) {
	out << "Name is " << a.firstName << " " << a.lastName << " i am " << a.age << " years old and my snake size is " << a.dickSize << " sm.";
	return (out);
}

int main(void) {
	Data *test = new Data;
	test->firstName = "Bold";
	test->lastName = "FromBrazzers";
	test->age = 43;
	test->dickSize = 35.68;

	std::cout << *test << std::endl;
	uintptr_t raw = serialize(test);
	std::cout << "Raw = " << raw << std::endl;
	Data *ptr = deserialize(raw);
	std::cout << *ptr << std::endl;

	std::cout << "Pointer of test = " << test << std::endl;
	std::cout << "Pointer of ptr = " << ptr << std::endl;

	return 0;
}