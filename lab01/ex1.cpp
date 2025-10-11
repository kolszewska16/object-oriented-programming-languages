#include <iostream>

int main() {
	int x {};
	int sum {};
	std::cout << "Provide a number: ";
	std::cin >> x;
	
	if(x >= 0) {
		for(int i = 0; i <= x; i++) {
			std::cout << i << std::endl;
			sum += i;
		}
		std::cout << "The sum from 0 to " << x << " is: " << sum << std::endl;
	}
	else {
		std::cout << "Provided number is negative!" << std::endl;
	}

	return 0;
}
