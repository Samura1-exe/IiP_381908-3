#include <iostream>
#include "Complex.h"

int main()
{
	std::cout << "========FIRST COMPLEX========" << std::endl;
	Fraction firstFraction;
	firstFraction.enterFraction();
	Fraction secondFraction;
	secondFraction.enterFraction();
	Complex firstComplex(firstFraction, secondFraction);
	std::cout << "========SECOND COMPLEX========" << std::endl;
	Fraction thirdFraction;
	thirdFraction.enterFraction();
	Fraction fouthFraction;
	fouthFraction.enterFraction();
	Complex secondComplex(thirdFraction, fouthFraction);
	system("cls");
	firstComplex.printComplex();
	secondComplex.printComplex();
}