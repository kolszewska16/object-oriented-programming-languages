#pragma once
#include <string.h>
#include <math.h>
#include "Figure.hpp"

class Circle : public Figure {
	private:
		double m_radius;

	private:
		Circle(double r, const Point &p, std::string name) : Figure(p, name), m_radius(r) {
			//
		}

	public:
		Circle(double r, const Point &p) : Circle(r, p, "Circle") {
			//
		}

		double area() const override {
			return M_PI * m_radius * m_radius;
		}

		double getRadius() const {
			return m_radius;
		}

		void setRadius(double r) {
			if(r > 0) {
				m_radius = r;
			}
		}

		void description() const override {
			std::cout << "I have radius of length " << m_radius << std::endl;
			printCentre();
		}
};
