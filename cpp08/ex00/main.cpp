//
// Created by Quayle Rolande on 03/04/2022.
//

#include "easyfind.h"

int main() {
	{
		std::list<int> value;
//		std::vector<int> value;
//		std::deque<int> value;

		for (int count = 0; count <= 6; count++)
			value.push_back(count);

		try {
			std::cout << "Result = " << easyfind(value, 8) << std::endl;
		}
		catch (const std::string & e){
			std::cout << e << std::endl;
		}
	}
	std::cout << std::endl;
	{
		try {
			std::string arr("check");
			std::cout << "Result = " << (char)easyfind(arr, 'c') << std::endl;
		}
		catch (const std::string &e){
			std::cout << e << std::endl;
		}
	}
	return 0;
}