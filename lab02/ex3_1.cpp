#include <iostream>
#include <string>

int main() {
	std::string s1;
	std::cout << "Provide a string: ";
	std::getline(std::cin, s1);

	std::string s2 = s1;
	int n = s1.size();
	for(int i = 0; i < n; i++) {
		s2[i] = s1[n - i - 1];
	}

	bool result = false;
	for(int i = 0; i < n; i++) {
		if(s1[i] != s2[i]) {
			result = false;
			break;
		}
		else if(s1[i] == s2[i]) {
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
