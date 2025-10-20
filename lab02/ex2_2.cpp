#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::string s1;
	std::cout << "Provide a string: ";
	std::getline(std::cin, s1);

	std::string s2 = s1;
	std::reverse(s2.begin(), s2.end());
	std::cout << "Reversed string: " << s2 << std::endl;
	return 0;
}
