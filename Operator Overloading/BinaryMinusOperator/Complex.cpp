
/*
 *      Author: MaksiKutrolli
 */

#include "Complex.h"

Complex::Complex(double re, double im) : real(re), imaginary(im) {}

double Complex::getReal() const {
    return real;
}

double Complex::getImaginary() const {
    return imaginary;
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imaginary - other.imaginary);
}
