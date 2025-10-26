#include <iostream>
#include <math.h>
#include "Point.hpp"

class Circle {
	private:
		double *m_radius;

	public:
		Point center;

		Circle(double r, double x, double y) : center(x, y) {
			m_radius = new double;
			
			if(r >= 0.0) {
				*m_radius = r;
			}
			else {
				*m_radius = 0.0;
			}
		}

		~Circle() {
			delete m_radius;
		}

		void setRadius(double r) {
			if(r >= 0.0) {
				*m_radius = r;
			}
			else {
				*m_radius = 0.0;
			}
		}

		double getRadius() const {
			return *m_radius;
		}

		double area() const{
			return M_PI * (*m_radius) * (*m_radius);
		}
};
