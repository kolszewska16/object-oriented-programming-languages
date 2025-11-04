#include <iostream>
#include "Circle.hpp"

int main() {
	double r {0};
	double x {0};
	double y {0};

	std::cout << "Provide the radius: ";
	std::cin >> r;
	std::cout << "Provide x coordinate: ";
	std::cin >> x;
	std::cout << "Provide y coordinate: ";
	std::cin >> y;

	Circle c1(r, x, y);
	std::cout << "Coordinates of the circle: ";
	c1.center.display();
//	std::cout << std::endl;
//	std::cout << "x coordinate: " << c1.center.x << std::endl;
//	std::cout << "y coordinate: " << c1.center.y << std::endl;
	std::cout << "Radius of the circle: " << c1.getRadius() << std::endl;
	std::cout << "Area of the circle: " << c1.area() << std::endl;
	
	double r_new {0};
	std::cout << "Provide new radius: ";
	std::cin >> r_new;
	c1.setRadius(r_new);
	std::cout << "New radius of the circle: " << c1.getRadius() << std::endl;
	std::cout << "Area of the circle with new radius: " << c1.area() << std::endl;
	
	return 0;
}
