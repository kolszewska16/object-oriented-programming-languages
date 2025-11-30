#include <iostream>
#include "ComplexNumber.hpp"

int main() {
	ko::jpo::ComplexNumber<double> c1(1.5, 2.0);
	ko::jpo::ComplexNumber<double> c2(3.1, 4.9);

	std::cout << "c1: " << c1 << std::endl;
	std::cout << "c2: " << c2 << std::endl;
	std::cout << "+ operation: " << (c1 + c2) << std::endl;
	std::cout << "+= operation: " << (c1 += c2) << std::endl;
	std::cout << "- operation: " << (c1 - c2) << std::endl;
	std::cout << "-= operation: " << (c1 -= c2) << std::endl;

	ko::jpo::ComplexNumber<float> c3(2.5f, 0.3f);
	ko::jpo::ComplexNumber<float> c4(0.7f, -0.2f);
	std::cout << "c3: " << c1 << std::endl;
	std::cout << "c4: " << c2 << std::endl;
	std::cout << "* operation: " << (c3 * c4) << std::endl;
	std::cout << "*= operation: " << (c3 *= c4) << std::endl;
	std::cout << "/ operation: " << (c3 / c4) << std::endl;
	std::cout << "/= operation: " << (c3 /= c4) << std::endl;

	ko::jpo::ComplexNumber<int> c5(2, 1);
	ko::jpo::ComplexNumber<int> c6(3, 7);
	std::cout << "c5: " << c1 << std::endl;
	std::cout << "c6: " << c2 << std::endl;
	std::cout << "== operation: " << (c5 == c6) << std::endl;
	std::cout << "!= operation: " << (c5 != c6) << std::endl;
	return 0;
}
