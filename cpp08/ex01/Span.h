//
// Created by Quayle Rolande on 03/04/2022.
//

#ifndef CPP08_SPAN_H
#define CPP08_SPAN_H

#include "iostream"
#include "set"
#include "limits"

class Span {
private:
	std::multiset<int> data;
	unsigned int capacity;
public:
	Span();
	Span(unsigned int cap);
	Span(const Span& a);
	~Span();
	Span& operator=(const Span& a);

	void addNumber(int a);
	int shortestSpan() const;
	int longestSpan() const;

	template<typename T>
	void addNumber(const typename T::iterator it, const typename T::iterator ite) {
		typename T::iterator it1 = it;
		typename T::iterator ite1 = ite;
		for (unsigned int i = 0; i < capacity; ++i) {
			if (i == capacity)
				throw SpanIsFull();
			if (it1 != ite1)
				data.insert(*it1);
			else
				break;
			it1++;
		}
	}

	class SpanIsFull : public std::exception {
		virtual const char * what() const throw();
	};
	class SizeIsSmall : public std::exception {
		virtual const char * what() const throw();
	};

};


#endif //CPP08_SPAN_H
