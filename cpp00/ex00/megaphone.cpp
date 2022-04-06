#include <iostream>

int main(int ac, char **av)
{
	int j;
	int i;

	i = 0;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (++i < ac) {
		j = -1;
		while (av[i][++j]) {
			std::cout << (char) toupper(av[i][j]);
		}
	}
	std::cout << std::endl;
	return (0);
}