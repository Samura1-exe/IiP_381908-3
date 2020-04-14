#include "Fraction.h"
Fraction::Fraction()
{
	mNumerator = 0;
	mDenominator = 0;
}

Fraction::Fraction(int _numerator, int _denominator)
{
	mNumerator = _numerator;
	mDenominator = _denominator;
}

void Fraction::setNumerator(int _numerator)
{
	mNumerator = _numerator;
}

void Fraction::setDenumerator(int _denominator)
{
	mDenominator = _denominator;
}

int Fraction::getNumerator()
{
	return mNumerator;
}

int Fraction::getDenominator()
{
	return mDenominator;
}

Fraction Fraction::addition(const Fraction& fraction)
{
	int tmpNum1 = 0, tmpNum2 = 0;
	Fraction resultFraction;
	if (mDenominator == fraction.mDenominator) {
		resultFraction.mNumerator = mNumerator + fraction.mNumerator;
		resultFraction.mDenominator = fraction.mDenominator;
	}
	else {
		tmpNum1 = mNumerator * fraction.mDenominator;
		tmpNum2 = fraction.mNumerator * mDenominator;
		resultFraction.mNumerator = tmpNum1 + tmpNum2;
		resultFraction.mDenominator = mDenominator * fraction.mDenominator;
	}
	return resultFraction;
}

Fraction Fraction::substraction(const Fraction& fraction)
{
	int tmpNum1 = 0, tmpNum2 = 0;
	Fraction resultFraction;
	if (mDenominator == fraction.mDenominator) {
		resultFraction.mNumerator = mNumerator - fraction.mNumerator;
		resultFraction.mDenominator = fraction.mDenominator;
	}
	else {
		tmpNum1 = mNumerator * fraction.mDenominator;
		tmpNum2 = fraction.mNumerator * mDenominator;
		resultFraction.mNumerator = tmpNum1 - tmpNum2;
		resultFraction.mDenominator = mDenominator * fraction.mDenominator;
	}
	return resultFraction;
}

Fraction Fraction::multiplication(const Fraction& fraction)
{
	Fraction resultFraction;
	resultFraction.mNumerator = mNumerator * fraction.mNumerator;
	resultFraction.mDenominator = mDenominator * fraction.mDenominator;
	return resultFraction;
}

Fraction Fraction::division(const Fraction& fraction)
{
	Fraction resultFraction;
	assert(fraction.mDenominator != 0);
	assert(mNumerator != 0);
	resultFraction.mNumerator = mNumerator * fraction.mDenominator;
	resultFraction.mDenominator = mDenominator * fraction.mNumerator;
	return resultFraction;
}

void Fraction::printFraction()
{
	std::cout << "Fraction: " << mNumerator << "/" << mDenominator << std::endl;
}

void Fraction::enterFraction()
{
	int tmpNum, tmpDen;
	do {
		std::cout << "Enter numerator: ";
		std::cin >> tmpNum;
		if (tmpNum == 0) {
			std::cout << "ERROR: NUMERATOR IS ZERO" << std::endl;
		}
	} while (tmpNum == 0);
	do {
		std::cout << "Enter denominator: ";
		std::cin >> tmpDen;
		if (tmpDen == 0) {
			std::cout << "ERROR: DENOMINATOR IS ZERO" << std::endl;
		}
	} while (tmpDen == 0);
	mNumerator = tmpNum;
	mDenominator = tmpDen;
}

std::string Fraction::toString()
{
	return std::to_string(mNumerator) + "/" + std::to_string(mDenominator);
}
