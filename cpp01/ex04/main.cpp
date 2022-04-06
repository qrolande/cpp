#include <iostream>
#include <fstream>

void changes(std::string *str, char *oldS, char *newS, int num) {
	std::string tmp1 = str->substr(num);
	int pos = tmp1.find(oldS);

	if (pos == -1)
		return;
	*str = str->substr(0, pos + num);
	str->append(newS);
	num = str->length();
	str->append(tmp1.substr(pos + strlen(oldS)));
	changes(str, oldS, newS, num);
}

std::string* replaceFilename(char *str) {
	std::string *temp = new std::string;
	int i = 0;
	while (str[i] && str[i] != '.') {
		*temp += str[i];
		i++;
	}
	*temp += ".replace";
	return temp;
}

int main(int ac, char **av) {
	std::ifstream   ifs;
	std::ofstream   ofs;
	std::string     *temp, line;
	std::string     replaced = "";


	if (ac == 4) {
		std::string s1 = av[2];
		std::string s2 = av[3];
		if (s1.empty() || s2.empty()) {
			std::cout << "str1 or str2 is empty!" << std::endl;
			return 1;
		}
		ifs.open(av[1]);
		if (!ifs) {
			std::cout << "Can't open file!" << std::endl;
			return 1;
		}
		temp = replaceFilename(av[1]);
		ofs.open(*temp);
		if (!ofs) {
			std::cout << "Can't open file!" << std::endl;
			return 1;
		}
		while (!ifs.eof()) {
			line = "";
			getline(ifs, line);
			replaced += line + '\n';
		}
		changes(&replaced, av[2], av[3], 0);
		ofs << replaced;
		ifs.close();
		ofs.close();
		delete temp;
		return 0;
	}
	else {
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
}