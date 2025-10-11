#include <iostream>

int main() {
	int arr[5] = {};

	for(int i = 0; i < 5; i++) {
		int x {};
		std::cout << "Provide " << i + 1 << ". number to the array: ";
		std::cin >> x;
		arr[i] = x;
		//std::cout << std::endl;
	}

	for(int i = 0; i < 5; i++) {
		std::cout << i + 1 << ". number from the array: " << arr[i] << std::endl;
	}

	return 0;
}
