//
// Created by Quayle Rolande on 03/04/2022.
//

#include "Span.h"
#include "vector"

int main(){
	{
	    Span sp = Span(5);
	    sp.addNumber(6);
	    sp.addNumber(3);
	    sp.addNumber(11);
	    sp.addNumber(9);
	    sp.addNumber(17);
	    sp.addNumber(13);
	    std::cout << "Shortest " << sp.shortestSpan() << std::endl;
	    std::cout << "Longest " << sp.longestSpan() << std::endl;
	}
	std::cout << "---------------------------------" << std::endl;
	{
		Span span(10000);
		std::vector<int> vector;

		for (std::size_t i = 0; i <= 10000; i++) {
			vector.push_back(rand() % 100000);
		}
		span.addNumber< std::vector<int> >(vector.begin(), vector.end());
		std::cout << "Shortest " << span.shortestSpan() << std::endl;
		std::cout << "Longest " << span.longestSpan() << std::endl;
	}
	return 0;
}