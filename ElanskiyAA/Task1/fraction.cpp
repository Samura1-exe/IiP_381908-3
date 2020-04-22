#include "fraction.h"
using namespace std;

void fraction::setDenominator(int newDenominator) {
	this -> denominator = newDenominator;
}

int fraction::getDenominator() const{
	return  this->denominator;
}

void fraction::setNumerator(int newNumerator) {
	this -> numerator = newNumerator;
}

int fraction::getNumerator() const{
	return this->numerator;
}

void fraction::amount(fraction tmp1, fraction tmp2) {
	int numerator1 = tmp1.numerator; cout << "Числитель 1 = " << numerator1 << endl;
	int numerator2 = tmp2.numerator; cout << "Числитель 2 = " << numerator2 << endl;
	int denominator1 = tmp1.denominator; cout << "Знаменатель 1 = " << denominator1 << endl;
	int denominator2 = tmp2.denominator; cout << "Знаменатель 2 = " << denominator2 << endl;
	int denominator12 = denominator1, numerator, a, b, n1, n2, nod = 1;
	if (denominator1 == denominator2) {
		numerator = numerator1 + numerator2;
		denominator12 = denominator1;
	}
	else {
		while (denominator12 % denominator2 != 0) {
			denominator12 = denominator12 + denominator1;
		}
		n1 = denominator12 / denominator1;
		n2 = denominator12 / denominator2;
		numerator = numerator1 * n1 + numerator2 * n2;
	} 
	cout << "Сумма дробей: " << numerator << "/" << denominator12;
	a = denominator12; b = numerator;
	while (a != b) {
		if (a > b) {
			a = a - b;
			nod = a;
		}
		else {
			b = b - a;
			nod = b;
		}
	}
	if (numerator / denominator12 != 0) {
		cout << " = " << numerator / denominator12;
		if (numerator % denominator12 > 0) {
			cout << " " << numerator % denominator12 / nod << "/" << denominator12 / nod;
		}
	}
	else {
		if (nod > 1) {
			cout << " = " << numerator / nod << "/" << denominator12 / nod;
		}
	}
	cout << endl;
}

void fraction::subtraction(fraction tmp1, fraction tmp2) {
	int numerator1 = tmp1.numerator; cout << "Числитель 1 = " << numerator1 << endl;
	int numerator2 = tmp2.numerator; cout << "Числитель 2 = " << numerator2 << endl;
	int denominator1 = tmp1.denominator; cout << "Знаменатель 1 = " << denominator1 << endl;
	int denominator2 = tmp2.denominator; cout << "Знаменатель 2 = " << denominator1 << endl;
	int denominator12 = denominator1, numerator, a, b, n1, n2, nod = 1;
	if (denominator1 == denominator2) {
		numerator = numerator1 + numerator2;
		denominator12 = denominator1;
	}
	else {
		while (denominator12 % denominator2 != 0) {
			denominator12 = denominator12 + denominator1;
		}
		n1 = denominator12 / denominator1;
		n2 = denominator12 / denominator2;
		numerator = numerator1 * n1 - numerator2 * n2;
	}
	cout << "Разность дробей: " << numerator << "/" << denominator12;
	a = denominator12; b = numerator;
	while (a != b) {
		if (a > b) {
			a = a - b;
			nod = a;
		}
		else {
			b = b - a;
			nod = b;
		}
	}
	if (numerator / denominator12 != 0) {
		cout << " = " << numerator / denominator12;
		if (numerator % denominator12 > 0) {
			cout << " " << numerator % denominator12 / nod << "/" << denominator12 / nod;
		}
	}
	else {
		if (nod > 1) {
			cout << " = " << numerator / nod << "/" << denominator12 / nod;
		}
	}
	cout << endl;
}

void fraction::multiplication(fraction tmp1, fraction tmp2) {
	int numerator1 = tmp1.numerator; cout << "Числитель 1 = " << numerator1 << endl;
	int numerator2 = tmp2.numerator; cout << "Числитель 2 = " << numerator2 << endl;
	int denominator1 = tmp1.denominator; cout << "Знаменатель 1 = " << denominator1 << endl;
	int denominator2 = tmp2.denominator; cout << "Знаменатель 2 = " << denominator1 << endl;
	int denominator, numerator, a, b, nod = 1;
	denominator = denominator1 * denominator2;
	numerator = numerator1 * numerator2;
	cout << "Произведение дробей: " << numerator << "/" << denominator;
	a = denominator; b = numerator;
	while (a != b) {
		if (a > b) {
			a = a - b;
			nod = a;
		}
		else {
			b = b - a;
			nod = b;
		}
	}
	if (numerator / denominator != 0) {
		cout << " = " << numerator / denominator;
		if (numerator % denominator > 0) {
			cout << " " << numerator % denominator / nod << "/" << denominator / nod;
		}
	}
	else {
		if (nod > 1) {
			cout << " = " << numerator / nod << "/" << denominator / nod;
		}
	}
	cout << endl;
}

void fraction::division(fraction tmp1, fraction tmp2) {
	int numerator1 = tmp1.numerator; cout << "Числитель 1 = " << numerator1 << endl;
	int numerator2 = tmp2.numerator; cout << "Числитель 2 = " << numerator2 << endl;
	int denominator1 = tmp1.denominator; cout << "Знаменатель 1 = " << denominator1 << endl;
	int denominator2 = tmp2.denominator; cout << "Знаменатель 2 = " << denominator1 << endl;
	int denominator, numerator, a, b, nod = 1;
	int smt = numerator2;
	numerator2 = denominator2;
	denominator2 = smt;
	numerator = numerator1 * numerator2;
	denominator = denominator1 * denominator2;
	cout << "Деление дробей: " << numerator << "/" << denominator;
	a = denominator; b = numerator;
	while (a != b) {
		if (a > b) {
			a = a - b;
			nod = a;
		}
		else {
			b = b - a;
			nod = b;
		}
	}
	if (numerator / denominator != 0) {
		cout << " = " << numerator / denominator;
		if (numerator % denominator > 0) {
			cout << " " << numerator % denominator / nod << "/" << denominator / nod;
		}
	}
	else {
		if (nod > 1) {
			cout << " = " << numerator / nod << "/" << denominator / nod;
		}
	}
	cout << endl;
}

fraction::fraction(int a, int b){
	this->numerator = a;
	this->denominator = b;
}

fraction::fraction(){
	this->denominator = 1;
	this->numerator = 0;
}

std::istream& operator>>(std::istream& in, fraction& tmp){
	cout << "Числитель: ";
	in >> tmp.numerator;
	cout << "Знаменатель: ";
	in >> tmp.denominator;
	return in;
}
