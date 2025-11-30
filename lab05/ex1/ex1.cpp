#include <iostream>
#include "ComplexNumber.hpp"

int main() {
	ComplexNumber c1(1.5, 2.0);
	ComplexNumber c2(3.1, 4.9);

	std::cout << "c1: " << c1 << std::endl;
	std::cout << "c2: " << c2 << std::endl;
	std::cout << "+ operation: " << (c1 + c2) << std::endl;
	std::cout << "+= operation: " << (c1 += c2) << std::endl;
	std::cout << "- operation: " << (c1 - c2) << std::endl;
	std::cout << "-= operation: " << (c1 -= c2) << std::endl;

	c1.setReal(2.8);
	c1.setImag(-1.2);
	std::cout << "c1: " << c1 << std::endl;
	std::cout << "c2: " << c2 << std::endl;
	std::cout << "* operation: " << (c1 * c2) << std::endl;
	std::cout << "*= operation: " << (c1 *= c2) << std::endl;
	std::cout << "/ operation: " << (c1 / c2) << std::endl;
	std::cout << "/= operation: " << (c1 /= c2) << std::endl;

	c2.setReal(2.8);
	c2.setImag(1.2);
	std::cout << "c1: " << c1 << std::endl;
	std::cout << "c2: " << c2 << std::endl;
	std::cout << "== operation: " << (c1 == c2) << std::endl;
	std::cout << "!= operation: " << (c1 != c2) << std::endl;
	return 0;
}
