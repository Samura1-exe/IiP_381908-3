#include <iostream>
#include "Fraction.h"


int main()
{
	std::cout << "========FIRST FRACTION========" << std::endl;
	Fraction firstFraction;
	firstFraction.enterFraction();
	firstFraction.printFraction();
	std::cout << "========SECOND FRACTION========" << std::endl;
	Fraction secondFraction;
	secondFraction.enterFraction();
	secondFraction.printFraction();
	Fraction resultFraction;
	system("cls");
	firstFraction.printFraction();
	secondFraction.printFraction();
	std::cout << "========FIRST + SECOND========" << std::endl;
	resultFraction = firstFraction.addition(secondFraction);
	resultFraction.printFraction();
	std::cout << "========FIRST - SECOND========" << std::endl;
	resultFraction = firstFraction.substraction(secondFraction);
	resultFraction.printFraction();
	std::cout << "========FIRST * SECOND========" << std::endl;
	resultFraction = firstFraction.multiplication(secondFraction);
	resultFraction.printFraction();
	std::cout << "========FIRST / SECOND========" << std::endl;
	resultFraction = firstFraction.division(secondFraction);
	resultFraction.printFraction();
}
