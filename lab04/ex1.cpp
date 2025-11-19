#include <iostream>

class Animal {
	public:
		virtual void makeSound() {
			std::cout << "The sound of animal: " << std::endl;
		}
};

class Dog : public Animal {
	public:
		void makeSound() override {
			std::cout << "Woof woof!" << std::endl;
		}
};

class Cat : public Animal {
	public:
		void makeSound() override {
			std::cout << "Meow meow!" << std::endl;
		}
};

Animal* chooseAnimal(int num) {
	if(num % 2 == 0) {
		return new Dog();
	}
	else {
		return new Cat();
	}
}

int main() {
	int num {0};
	std::cout << "Provide a number to choose an animal: ";
	std::cin >> num;

	Animal *myAnimal = chooseAnimal(num);
	myAnimal->makeSound();
	delete myAnimal;

	return 0;
}
