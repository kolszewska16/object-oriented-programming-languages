#include <iostream>
#include "Point.hpp"

int main() {
	float x {0};
	float y {0};

	std::cout << "Provide x coordinate: ";
	std::cin >> x;
	std::cout << "Provide y coordinate: ";
	std::cin >> y;

	Point p1(x, y);
	p1.display();
	
	return 0;
}
