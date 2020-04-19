#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <time.h>
#include <iostream>
#include <windows.h>

class fraction {
private:
	int denominator;
	int numerator;
public:
	void setDenominator(int newDdenominator);
	int getDenominator()const;
	void setNumerator(int newNumerator);
	int getNumerator()const;
	void amount(fraction tmp1, fraction tmp2);
	void subtraction(fraction tmp, fraction tmp2);
	void multiplication(fraction tmpm, fraction tmp2);
    void division(fraction tmp, fraction tmp2);
	friend std::istream& operator>>(std::istream& in, fraction& tmp);
	fraction(int a, int b);
	fraction();
};