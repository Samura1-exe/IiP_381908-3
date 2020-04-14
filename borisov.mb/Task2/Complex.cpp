#include "Complex.h"

Complex::Complex()
{
	mRe = Fraction();
	mIm = Fraction();
}

Complex::Complex(Fraction& _Re, Fraction& _Im)
{
	mRe = _Re;
	mIm = _Im;
}

Complex::Complex(const Complex& complex)
{
	mRe = complex.mRe;
	mIm = complex.mIm;
}

Complex::~Complex()
{
	mRe = Fraction();
	mIm = Fraction();
}

Complex& Complex::operator=(const Complex& complex)
{
	mRe = complex.mRe;
	mIm = complex.mIm;
	return *this;
}

void Complex::printComplex()
{
	std::cout << "Complex Number: (" << mRe.toString() << ")+(" << mIm.toString() << ")i" << std::endl;
}
