#ifndef FRACTION_H
#define FRACTION_H
#include <iostream>
#include <cassert>
#include <string>
class Fraction
{
public:
	Fraction();
	Fraction(int _numerator, int _denominator);

	void setNumerator(int _numerator);
	void setDenumerator(int _denominator);

	int getNumerator();
	int getDenominator();

	Fraction addition(const Fraction& fraction);
	Fraction substraction(const Fraction& fraction);
	Fraction multiplication(const Fraction& fraction);
	Fraction division(const Fraction& fraction);

	void printFraction();
	void enterFraction();
	std::string toString();

private:
	int mNumerator;
	int mDenominator;
};

#endif
