#include <iostream>
#include <string>

class MyClass {
	private:
		std::string m_name;

	public:
		MyClass(std::string n) : m_name(n) {
			std::cout << "Constructor of " << m_name << " called" << std::endl;
		}

		~MyClass() {
			std:: cout << "Destructor of " << m_name << " called" << std::endl;
		}
};

MyClass globalObject("global");

int main() {
	std::cout << "Entering main() function" << std::endl;
	MyClass localObject("local");
	{
		MyClass blockObject("block");
	}
	std::cout << "Leaving main() function" << std::endl;

	return 0;
}
