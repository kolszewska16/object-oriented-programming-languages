#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
	srand(static_cast<unsigned int>(time(0)));
	int randomNumber = rand() % 100 + 1;

	int in {};
	do {
		std::cout<< "Enter a number: ";
		std::cin >> in;

		if(in < randomNumber) {
			std::cout << "The number is too low" << std::endl;
		}
		else if(in > randomNumber) {
			std::cout << "The number is too high" << std::endl;
		}
		else if(in == randomNumber) {
			std::cout << "CONGRATULATIONS! The number is: " << in << std::endl;
		}
	} while(in != randomNumber);

	return 0;
}
