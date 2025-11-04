#include <iostream>
#include <string>

class Student {
	private:
		std::string m_name;
		int m_age;

	public:
		void setAge(int a) {
			if(a > 0) {
				m_age = a;
			}
			else {
				std::cout << "ERROR! Invalid age" << std::endl;
			}
		}

		int getAge() const {
			return  m_age;
		}

		void setName(std::string n) {
			if(!n.empty()) {
				m_name = n;
			}
			else {
				std::cout << "ERROR! Invalid name" << std::endl;
			}
		}

		std::string getName() const {
			return m_name;
		}

		void introduce(void) const {
			if(!m_name.empty() && m_age > 0) {
				std::cout << "I'm " << m_name << ", I'm " << m_age << " years old student" << std::endl;
			}
		}
};

int main() {
	Student student1;

	std::string name;
	std::cout << "Provide a name: ";
	std::getline(std::cin, name);
	int age {0};
	std::cout << "Provide an age: ";
	std::cin >> age;

	student1.setName(name);
	student1.setAge(age);
	student1.introduce();

	return 0;
}
