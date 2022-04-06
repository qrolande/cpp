//
// Created by Quayle Rolande on 03/04/2022.
//

#include "Span.h"

Span::Span() {}

Span::~Span() {}

Span::Span(const Span &a) {
	data = a.data;
	capacity = a.capacity;
}

Span &Span::operator=(const Span &a) {
	data = a.data;
	capacity = a.capacity;
	return (*this);
}

Span::Span(unsigned int cap) {
	capacity = cap;
}

void Span::addNumber(int a) {
	try {
		if (data.size() < capacity)
			data.insert(a);
		else
			throw SpanIsFull();
	}
	catch (std::exception &e) {
		std::cout << "Cant add number " << a << " Reason: " << e.what() << std::endl;
	}
}

int Span::shortestSpan() const {
	unsigned int min = UINT_MAX;
	std::multiset<int>::iterator it = data.begin();
	std::multiset<int>::iterator temp = data.begin();
	try {
		if (data.size() < 2)
			throw SizeIsSmall();
		for (std::size_t i = 0; i < data.size() - 2; i++) {
			temp++;
			if ((unsigned int)(*temp - *it) < min)
				min = *temp - *it;
			it++;
		}
	}
	catch (std::exception &e) {
		std::cout << "Can't find shortest span! Reason: " << e.what() << std::endl;
	}
	return (min);
}

int Span::longestSpan() const {
	std::multiset<int>::iterator it = data.begin();
	std::multiset<int>::iterator ite = data.end();
	try {
		if (data.size() < 2)
			throw SizeIsSmall();
		ite--;
	}
	catch (std::exception &e) {
		std::cout << "Can't find longest span! Reason: " << e.what() << std::endl;
		return (-1);
	}
	return (*ite - *it);

}

const char *Span::SpanIsFull::what() const throw() {
	return ("Span is full!");
}

const char *Span::SizeIsSmall::what() const throw() {
	return ("Size is too small to comparison!");
}