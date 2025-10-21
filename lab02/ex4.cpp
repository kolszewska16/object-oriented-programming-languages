#include <iostream>
#include <string>
#include <cctype>

int main() {
	std::string sentence;
	char ch {0};
	std::cout << "Provide a string: ";
	std::getline(std::cin, sentence);
	std::cout << "Provide a letter: ";
	std::cin >> ch;

	char ch_low = std::tolower(ch);
	int sum {0};

	for(char c : sentence) {
		char lower_c = std::tolower(c);
		if(ch_low == lower_c) {
			sum++;
		}
	}

	std::cout << "Character: " << ch << " appears " << sum << " times in the sentence" << std::endl;

	return 0;
}
