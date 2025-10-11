#include <iostream>

double fahrenheit_to_celsius(double in) {
	return ((in - 32.0) * 5.0) / 9.0; 
}

int main() {
	double in {};
	std::cout << "Provide temperature in Fahrenheit degrees: ";
	std::cin >> in;

	double out = fahrenheit_to_celsius(in);
	std::cout << in << " Fahrenheit degrees is " << out << " Celsius degrees" << std::endl;
	
	return 0;
}
