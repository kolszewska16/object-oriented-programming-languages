#pragma once

#include "Figure.hpp"

class Rectangle : public Figure {
	private:
		double m_a;
		double m_b;

	protected:
		//parametrized constructor
		Rectangle(double a, double b, const Point &p, std::string name) : Figure(p, name), m_a(a), m_b(b) {
			//
		}

	public:
		//parametrized constructor
		Rectangle(double a, double b, const Point &p) : Rectangle(a, b, p, "Rectangle") {
			//
		}

		double area() const override {
			return m_a * m_b;
		}

		double getA() const {
			return m_a;
		}

		double getB() const {
			return m_b;
		}

		void setA(double a) {
			if(a > 0) {
				m_a = a;
			}
		}
		void setB(double b) {
			if(b > 0) {
				m_b = b;
			}
		}

		void description() const override {
			std::cout << "I have sides of length " << m_a << " and " << m_b << std::endl;
			printCentre();
		}
};

