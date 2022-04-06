//
// Created by Quayle Rolande on 3/31/22.
//

#include "Base.h"

int main() {
	Base *ptr;
	for (int i = 0; i < 3; ++i) {
		ptr = generate();
		identify(ptr);
		delete(ptr);
	}
	std::cout << std::endl;
	for (int i = 0; i < 3; ++i) {
		ptr = generate();
		identify(*ptr);
		delete(ptr);
	}
	return 0;
}