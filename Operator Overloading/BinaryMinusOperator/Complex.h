
/*
 *      Author: MaksiKutrolli
 */

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex(double re, double im);
    double getReal() const;
    double getImaginary() const;

    // Overloading the - operator for complex number subtraction
    Complex operator-(const Complex& other) const;
};

#endif // COMPLEX_H





