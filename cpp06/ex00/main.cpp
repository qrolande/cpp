//
// Created by Quayle Rolande on 3/30/22.
//

#include "Magic.h"

int main(int argc, char **argv) {
	if (argc == 2) {
		Magic test(argv[1]);
		test.printFunc();
	}
	else
		std::cout << "Error!" << std::endl;
}