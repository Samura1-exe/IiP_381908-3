#ifndef COMPLEX_H
#define COMPLEX_H
#include "Fraction.h"
class Complex
{
public:
	Complex();
	Complex(Fraction& _Re, Fraction& _Im);
	Complex(const Complex& complex);
	~Complex();

	Complex& operator=(const Complex& complex);

	void printComplex();

private:
	Fraction mRe;
	Fraction mIm;
};
#endif

