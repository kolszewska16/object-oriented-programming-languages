#pragma once
#include <math.h>

namespace ko {
	namespace jpo {
		template <typename T>
                        class ComplexNumber {
	                        private:
		                        T m_real;
		                        T m_imag;
	                        
	                        public:
		                        ComplexNumber(double r = 0.0, double i = 0.0) : m_real(r), m_imag(i) {}
		                        
		                        void setReal(double r) {
			                        m_real = r;
		                        }

		                        T getReal() const {
			                        return m_real;
		                        }

		                        void setImag(double i) {
			                        m_imag = i;
		                        }

		                        T getImag() {
			                        return m_imag;
		                        }

		                        ComplexNumber operator+ (const ComplexNumber& other) const {
			                        return ComplexNumber(m_real + other.m_real, m_imag + other.m_imag);
		                        }

		                        ComplexNumber operator+= (const ComplexNumber& other) {
			                        m_real += other.m_real;
			                        m_imag += other.m_imag;
			                        return *this;
		                        }

		                        ComplexNumber operator- (const ComplexNumber& other) const {
			                        return ComplexNumber(m_real - other.m_real, m_imag - other.m_imag);
		                        }

		                        ComplexNumber operator-= (const ComplexNumber& other) {
			                        m_real -= other.m_real;
			                        m_imag -= other.m_imag;
			                        return *this;
		                        }

		                        ComplexNumber operator* (const ComplexNumber& other) const {
			                        return ComplexNumber(m_real * other.m_real - m_imag * other.m_imag, m_real * other.m_imag + other.m_real * m_imag);
		                        }

		                        ComplexNumber operator*= (const ComplexNumber& other) {
			                        T new_real = m_real * other.m_real - m_imag * other.m_imag;
			                        T new_imag = m_real * other.m_imag + other.m_real * m_imag;
			                        m_real = new_real;
			                        m_imag = new_imag;
			                        return *this;
		                        }

		                        ComplexNumber operator/ (const ComplexNumber& other) const {
			                        T denominator = other.m_real * other.m_real + other.m_imag * other.m_imag;
			                        T new_real = (m_real * other.m_real + m_imag * other.m_imag) / denominator;
			                        T new_imag = (m_imag * other.m_real - m_real * other.m_imag) / denominator;
			                        return ComplexNumber(new_real, new_imag);
		                        }

		                        ComplexNumber operator/= (const ComplexNumber& other) {
			                        T denominator = other.m_real * other.m_real + other.m_imag * other.m_imag;
			                        T new_real = (m_real * other.m_real + m_imag * other.m_imag) / denominator;
			                        T new_imag = (m_imag * other.m_real - m_real * other.m_imag) / denominator;
			                        m_real = new_real;
			                        m_imag = new_imag;
			                        return *this;
		                        }

		                        bool operator== (const ComplexNumber& other) const {
			                        return (m_real == other.m_real) && (m_imag == other.m_imag);
		                        }

		                        bool operator!= (const ComplexNumber& other) {
			                        return !(*this == other);
		                        }

		                        friend std::ostream& operator<< (std::ostream& os, const ComplexNumber& c) {
			                        os << c.m_real << (c.m_imag >= 0 ? "+" : "-") << std::abs(c.m_imag) << "i";
			                        return os;
		                        }
                        };
        }
}
