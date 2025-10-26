#include <iostream>
#include <string>

class Student {
	private:
		std::string m_name;
		int m_age;

	public:
		Student() {
			m_name = "unknow";
			m_age = 0;
		};

		void setAge(int a) {
			if(a < 0) {
				std::cout << "ERROR! Invalid age" << std::endl;
			}
			else {
				m_age = a;
			}
		}

		int getAge() const {
			return  m_age;
		}

		void setName(std::string n) {
			if(n.size() == 0) {
				std::cout << "ERROR! Invalid name" << std::endl;
			}
			else {
				m_name = n;
			}
		}

		std::string getName() const {
			return m_name;
		}

		void introduce(void) const {
			std::cout << "I'm " << m_name << ", I'm " << m_age << " years old student" << std::endl;
		}
};

int main() {
	Student student1;

	std::string name;
	std::cout << "Provide a name: ";
	std::getline(std::cin, name);
	int age {0};
	std::cout <<  "Provide an age: ";
	std::cin >> age;

	student1.setName(name);
	student1.setAge(age);
	student1.introduce();

	return 0;
}
