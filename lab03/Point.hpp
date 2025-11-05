#pragma once
#include <iostream>

class Point {
	public:
		double x;
		double y;

		Point(double ox, double oy) : x(ox), y(oy) {
			//
		}

		void display(void) const {
			std::cout << "(" << x << ", " << y << ")" << std::endl;
		}
};
