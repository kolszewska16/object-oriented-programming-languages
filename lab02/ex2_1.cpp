#include <iostream>
#include <string>

int main() {
	std::string s1;
	std::cout << "Provide a string: "; 
//	std::getline(std::cin, s1);
	std::cin >> s1;

	std::string s2 = s1;
	int n = s1.size();
	for(int i = 0; i < n; i++) {
		s2[i] = s1[n - i - 1];
	}

	std::cout << "Reversed string: " << s2 << std::endl;

	return 0;
}
