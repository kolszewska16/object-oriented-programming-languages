#include <iostream>
#include <string>
#include <algorithm>

int main() {
	std::string s1;
	std::cout << "Provide a string: ";
//	std::getline(std::cin, s1);
	std::cin >> s1;

	std::string s2 = s1;
	std::reverse(s2.begin(), s2.end());

	int n = s2.size();
	bool result = false;
	for(int i = 0; i < n; i++) {
		if(s1[i] != s2[i]) {
			result = false;
			break;
		}
		else {
			result = true;
		}
	}

	if(result == true) {
		std::cout << "Provided string is a palindrome" << std::endl;
	}
	else {
		std::cout << "Provided string is not a palindrome" << std::endl;
	}

	return 0;
}
