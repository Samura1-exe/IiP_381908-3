#include "complex.h"
using namespace std;

complex::complex() {
	this->first = fraction(0,1);
	this->second = fraction(0,1);
}

complex::complex(fraction newFirst, fraction newSecond) {
	this->first = newFirst;
	this->second = newSecond;
}

complex::~complex() {
	this->first = fraction(0, 1);
	this->second = fraction(0, 1);
}

void complex::out(){
	int re, re1, im, im1;
	re = this->first.getNumerator();
	re1 = this->first.getDenominator();
	im = this->second.getNumerator();
	im1 = this->second.getDenominator();
	cout << re << "/" << re1 << "+" << "(" << im << "/" << im1 << ")" << "*i";
}

complex::complex(const complex& tmp) {
	this->first = tmp.first;
	this->second = tmp.second;
}

complex& complex::operator=(const complex& tmp){
	this->first = tmp.first;
	this->second = tmp.second;
	return *this;
}

complex complex::operator*(const complex& tmp)const{
	int numerator1 = this->first.getNumerator() * tmp.first.getNumerator();
	int denominator1 = this->first.getDenominator() * tmp.first.getDenominator();
	int numerator2 = this->second.getNumerator() * tmp.second.getNumerator();
	int denominator2 = this->second.getDenominator() * tmp.second.getDenominator();
	int denominator12 = denominator1, numerator, a, b, n1, n2, nod = 1;
	if (denominator1 == denominator2) {
		numerator = numerator1 - numerator2;
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
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << " + ";
	int num1 = this->first.getNumerator() * tmp.second.getNumerator();
	int den1 = this->first.getDenominator() * tmp.second.getDenominator();
	int num2 = this->second.getNumerator() * tmp.first.getNumerator();
	int den2 = this->second.getDenominator() * tmp.first.getDenominator();
	int den12 = den1, num, a1, b1, n13, n23, NOD = 1;
	if (den1 == den2) {
		num = num1 + num2;
		den12 = den1;
	}
	else {
		while (den12 % den2 != 0) {
			den12 = den12 + den1;
		}
		n13 = den12 / den1;
		n23 = den12 / den2;
		num = num1 * n13 + num2 * n23;
	}
	a1 = den12; b1 = num;
	while (a1 != b1) {
		if (a1 > b1) {
			a1 = a1 - b1;
			NOD = a1;
		}
		else {
			b1 = b1 - a1;
			NOD = b1;
		}
	}
	if (num / den12 != 0) {
		cout << num / den12;
		if (num % den12 > 0) {
			cout << "(" << num % den12 / NOD << "/" << den12 / NOD << ")";
		}
	}
	else {
		if (nod >= 1) {
			cout << "(" << num / NOD << "/" << den12 / NOD << ")";
		}
	}
	cout << "i";
	return *this;
}

complex complex::operator+(const complex& tmp)const {
	int numerator1 = this->first.getNumerator();
	int denominator1 = this->first.getDenominator();
	int numerator2 = tmp.first.getNumerator();
	int denominator2 = tmp.first.getDenominator();
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
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << "+";
	int num1 = this->second.getNumerator();
	int den1 = this->second.getDenominator();
	int num2 = tmp.second.getNumerator();
	int den2 = tmp.second.getDenominator();
	int den12 = den1, num, a1, b1, n13, n23, NOD = 1;
	if (den1 == den2) {
		num = num1 + num2;
		den12 = den1;
	}
	else {
		while (den12 % den2 != 0) {
			den12 = den12 + den1;
		}
		n13 = den12 / den1;
		n23 = den12 / den2;
		num = num1 * n13 + num2 * n23;
	}
	a1 = den12; b1 = num;
	while (a1 != b1) {
		if (a1 > b1) {
			a1 = a1 - b1;
			NOD = a1;
		}
		else {
			b1 = b1 - a1;
			NOD = b1;
		}
	}
	if (num / den12 != 0) {
		cout << num / den12;
		if (num % den12 > 0) {
			cout << "(" << num % den12 / NOD << "/" << den12 / NOD << ")";
		}
	}
	else {
		if (nod >= 1) {
			cout << "(" << num / NOD << "/" << den12 / NOD << ")";
		}
	}
	cout << "i";
	return *this;
}

complex complex::operator-(const complex& tmp)const {
	int numerator1 = this->first.getNumerator();
	int denominator1 = this->first.getDenominator();
	int numerator2 = tmp.first.getNumerator();
	int denominator2 = tmp.first.getDenominator();
	int denominator12 = denominator1, numerator, a, b, n1, n2, nod = 1;
	if (denominator1 == denominator2) {
		numerator = numerator1 - numerator2;
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
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << "+";
	int num1 = this->second.getNumerator();
	int den1 = this->second.getDenominator();
	int num2 = tmp.second.getNumerator();
	int den2 = tmp.second.getDenominator();
	int den12 = den1, num, a1, b1, n13, n23, NOD = 1;
	if (den1 == den2) {
		num = num1 - num2;
		den12 = den1;
	}
	else {
		while (den12 % den2 != 0) {
			den12 = den12 - den1;
		}
		n13 = den12 / den1;
		n23 = den12 / den2;
		num = num1 * n13 - num2 * n23;
	}
	a1 = den12; b1 = num;
	if (den12 != 0 && num != 0) {
		while (a1 != b1) {
			if (a1 > b1) {
				a1 = a1 - b1;
				NOD = a1;
			}
			else {
				b1 = b1 - a1;
				NOD = b1;
			}
		}
		if (num / den12 != 0) {
			cout << num / den12;
			if (num % den12 > 0) {
				cout << "(" << num % den12 / NOD << "/" << den12 / NOD << ")";
			}
		}
		else {
			if (nod >= 1) {
				cout << "(" << num / NOD << "/" << den12 / NOD << ")";
			}
		}
	}
	else {
		cout << "0";
	}
	cout << "i";
	return *this;
}

complex complex::operator/(const complex& tmp)const {
	int numerator1 = this->first.getNumerator() * tmp.first.getNumerator();
	int denominator1 = this->first.getDenominator() * tmp.first.getDenominator();
	int numerator2 = this->second.getNumerator() * tmp.second.getNumerator();
	int denominator2 = this->second.getDenominator() * tmp.second.getDenominator();
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
	int newnumerator1 = tmp.first.getNumerator() * tmp.first.getNumerator();
	int newdenominator1 = tmp.first.getDenominator() * tmp.first.getDenominator();
	int newnumerator2 = tmp.second.getNumerator() * tmp.second.getNumerator();
	int newdenominator2 = tmp.second.getDenominator() * tmp.second.getDenominator();
	int newdenominator12 = newdenominator1, newnumerator, newn1, newn2;
	if (newdenominator1 == newdenominator2) {
		newnumerator = newnumerator1 + newnumerator2;
		newdenominator12 = newdenominator1;
	}
	else {
		while (newdenominator12 % newdenominator2 != 0) {
			newdenominator12 = newdenominator12 + newdenominator1;
		}
		newn1 = newdenominator12 / newdenominator1;
		newn2 = newdenominator12 / newdenominator2;
		newnumerator = newnumerator1 * newn1 + newnumerator2 * n2;
	}
	numerator = numerator * newdenominator12;
	denominator12 = denominator12 * newnumerator;
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << " + ";
	int num1 = tmp.first.getNumerator() * this->second.getNumerator();
	int den1 = tmp.first.getDenominator() * this->second.getDenominator();
	int num2 = this->first.getNumerator() * tmp.second.getNumerator();
	int den2 = this->first.getDenominator() * tmp.second.getDenominator();
	int den12 = den1, num, a1, b1, n13, n23, NOD = 1;
	if (den1 == den2) {
		num = num1 + num2;
		den12 = den1;
	}
	else {
		while (den12 % den2 != 0) {
			den12 = den12 + den1;
		}
		n13 = den12 / den1;
		n23 = den12 / den2;
		num = num1 * n13 + num2 * n23;
	}
	int newnum1 = tmp.first.getNumerator() * tmp.first.getNumerator();
	int newden1 = tmp.first.getDenominator() * tmp.first.getDenominator();
	int newnum2 = tmp.second.getNumerator() * tmp.second.getNumerator();
	int newden2 = tmp.second.getDenominator() * tmp.second.getDenominator();
	int newden12 = newden1, newnum, newn13, newn23;
	if (newden1 == newden2) {
		newnum = newnum1 - newnum2;
		newden12 = newden1;
	}
	else {
		while (newden12 % newden2 != 0) {
			newden12 = newden12 + newden1;
		}
		newn13 = newden12 / newden1;
		newn23 = newden12 / newden2;
		newnum = newnum1 * newn13 + newnum2 * newn23;
	}
	num = num * newden12;
	den12 = den12 * newnum;
	a1 = den12; b1 = num;
	if (den12 != 0 && num != 0) {
		while (a1 != b1) {
			if (a1 > b1) {
				a1 = a1 - b1;
				NOD = a1;
			}
			else {
				b1 = b1 - a1;
				NOD = b1;
			}
		}
		if (num / den12 != 0) {
			cout << num / den12;
			if (num % den12 > 0) {
				cout << num % den12 / NOD << "/" << den12 / NOD;
			}
		}
		else {
			if (NOD > 1) {
				cout << num / NOD << "/" << den12 / NOD;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << "i";
	return *this;
}

complex complex::operator+(const int tmp)const {
	int numerator1 = this->first.getNumerator();
	int denominator1 = this->first.getDenominator();
	int denominator12 = denominator1, numerator, a, b, nod = 1;
	numerator = numerator1 + tmp * denominator12;
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << " " << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << " + ";
	cout << this->second.getNumerator() << "/" << this->second.getDenominator() << "i";
	return *this;
}

complex complex::operator-(const int tmp)const {
	int numerator1 = this->first.getNumerator();
	int denominator1 = this->first.getDenominator();
	int denominator12 = denominator1, numerator, a, b, nod = 1;
	numerator = numerator1 - tmp * denominator12;
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator > 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << " " << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		if (numerator < 0) {
			cout << numerator << "/" << denominator12;
		}
		else {
			cout << "0";
		}
	}
	cout << " + ";
	cout << this->second.getNumerator() << "/" << this->second.getDenominator() << "i";
	return *this;

}

complex complex::operator*(const int tmp)const {
	int numerator1 = this->first.getNumerator();
	int denominator1 = this->first.getDenominator();
	int denominator12 = denominator1, numerator, a, b, nod = 1;
	numerator = numerator1 * tmp;
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << " " << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << " + ";
	cout << this->second.getNumerator() << "/" << this->second.getDenominator() << "i";
	return *this;
}

complex complex::operator/(const int tmp)const {
	int numerator1 = this->first.getNumerator();
	int denominator1 = this->first.getDenominator();
	int denominator12 = denominator1 * tmp, numerator, a, b, nod = 1;
	numerator = numerator1;
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << " " << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod >= 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << " + ";
	cout << this->second.getNumerator() << "/" << this->second.getDenominator() << "i";
	return *this;
}

bool complex::operator>(complex& tmp) {
	bool f;
	int n1 = this->first.getNumerator() * tmp.first.getDenominator();
	int n2 = this->first.getDenominator() * tmp.first.getNumerator();
	f = n1 > n2;
	return f;
}

bool complex::operator<(complex& tmp) {
	bool f;
	int n1 = this->first.getNumerator() * tmp.first.getDenominator();
	int n2 = this->first.getDenominator() * tmp.first.getNumerator();
	f = n1 < n2;
	return f;
}

bool complex::operator==(complex& tmp) {
	bool f;
	int n1 = this->first.getNumerator() * tmp.first.getDenominator();
	int n2 = this->first.getDenominator() * tmp.first.getNumerator();
	int n3 = this->second.getNumerator() * tmp.second.getDenominator();
	int n4 = this->second.getDenominator() * tmp.second.getNumerator();
	f = (n1 == n2)&&(n3 == n4);
	return f;
}

bool complex::operator!=(complex& tmp) {
	bool f;
	int n1 = this->first.getNumerator() * tmp.first.getDenominator();
	int n2 = this->first.getDenominator() * tmp.first.getNumerator();
	int n3 = this->second.getNumerator() * tmp.second.getDenominator();
	int n4 = this->second.getDenominator() * tmp.second.getNumerator();
	f = (n1 != n2) && (n3 != n4);
	return f;
}

bool complex::operator>=(complex& tmp) {
	bool f;
	int n1 = this->first.getNumerator() * tmp.first.getDenominator();
	int n2 = this->first.getDenominator() * tmp.first.getNumerator();
	int n3 = this->second.getNumerator() * tmp.second.getDenominator();
	int n4 = this->second.getDenominator() * tmp.second.getNumerator();
	f = (n1 >= n2) && (n3 >= n4);
	return f;
}

bool complex::operator<=(complex& tmp) {
	bool f;
	int n1 = this->first.getNumerator() * tmp.first.getDenominator();
	int n2 = this->first.getDenominator() * tmp.first.getNumerator();
	int n3 = this->second.getNumerator() * tmp.second.getDenominator();
	int n4 = this->second.getDenominator() * tmp.second.getNumerator();
	f = (n1 <= n2) && (n3 <= n4);
	return f;
}

complex complex::operator+=(const complex& tmp)const {
	int numerator1 = this->first.getNumerator();
	int denominator1 = this->first.getDenominator();
	int numerator2 = tmp.first.getNumerator();
	int denominator2 = tmp.first.getDenominator();
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
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << "+";
	int num1 = this->second.getNumerator();
	int den1 = this->second.getDenominator();
	int num2 = tmp.second.getNumerator();
	int den2 = tmp.second.getDenominator();
	int den12 = den1, num, a1, b1, n13, n23, NOD = 1;
	if (den1 == den2) {
		num = num1 + num2;
		den12 = den1;
	}
	else {
		while (den12 % den2 != 0) {
			den12 = den12 + den1;
		}
		n13 = den12 / den1;
		n23 = den12 / den2;
		num = num1 * n13 + num2 * n23;
	}
	a1 = den12; b1 = num;
	while (a1 != b1) {
		if (a1 > b1) {
			a1 = a1 - b1;
			NOD = a1;
		}
		else {
			b1 = b1 - a1;
			NOD = b1;
		}
	}
	if (num / den12 != 0) {
		cout << num / den12;
		if (num % den12 > 0) {
			cout << "(" << num % den12 / NOD << "/" << den12 / NOD << ")";
		}
	}
	else {
		if (nod >= 1) {
			cout << "(" << num / NOD << "/" << den12 / NOD << ")";
		}
	}
	cout << "i";
	return *this;

}

complex complex::operator-=(const complex& tmp)const {
	int numerator1 = this->first.getNumerator();
	int denominator1 = this->first.getDenominator();
	int numerator2 = tmp.first.getNumerator();
	int denominator2 = tmp.first.getDenominator();
	int denominator12 = denominator1, numerator, a, b, n1, n2, nod = 1;
	if (denominator1 == denominator2) {
		numerator = numerator1 - numerator2;
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
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << "+";
	int num1 = this->second.getNumerator();
	int den1 = this->second.getDenominator();
	int num2 = tmp.second.getNumerator();
	int den2 = tmp.second.getDenominator();
	int den12 = den1, num, a1, b1, n13, n23, NOD = 1;
	if (den1 == den2) {
		num = num1 - num2;
		den12 = den1;
	}
	else {
		while (den12 % den2 != 0) {
			den12 = den12 - den1;
		}
		n13 = den12 / den1;
		n23 = den12 / den2;
		num = num1 * n13 - num2 * n23;
	}
	a1 = den12; b1 = num;
	if (den12 != 0 && num != 0) {
		while (a1 != b1) {
			if (a1 > b1) {
				a1 = a1 - b1;
				NOD = a1;
			}
			else {
				b1 = b1 - a1;
				NOD = b1;
			}
		}
		if (num / den12 != 0) {
			cout << num / den12;
			if (num % den12 > 0) {
				cout << "(" << num % den12 / NOD << "/" << den12 / NOD << ")";
			}
		}
		else {
			if (nod >= 1) {
				cout << "(" << num / NOD << "/" << den12 / NOD << ")";
			}
		}
	}
	else {
		cout << "0";
	}
	cout << "i";
	return *this;
}

complex complex::operator*=(const complex& tmp)const {
	int numerator1 = this->first.getNumerator() * tmp.first.getNumerator();
	int denominator1 = this->first.getDenominator() * tmp.first.getDenominator();
	int numerator2 = this->second.getNumerator() * tmp.second.getNumerator();
	int denominator2 = this->second.getDenominator() * tmp.second.getDenominator();
	int denominator12 = denominator1, numerator, a, b, n1, n2, nod = 1;
	if (denominator1 == denominator2) {
		numerator = numerator1 - numerator2;
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
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << " + ";
	int num1 = this->first.getNumerator() * tmp.second.getNumerator();
	int den1 = this->first.getDenominator() * tmp.second.getDenominator();
	int num2 = this->second.getNumerator() * tmp.first.getNumerator();
	int den2 = this->second.getDenominator() * tmp.first.getDenominator();
	int den12 = den1, num, a1, b1, n13, n23, NOD = 1;
	if (den1 == den2) {
		num = num1 + num2;
		den12 = den1;
	}
	else {
		while (den12 % den2 != 0) {
			den12 = den12 + den1;
		}
		n13 = den12 / den1;
		n23 = den12 / den2;
		num = num1 * n13 + num2 * n23;
	}
	a1 = den12; b1 = num;
	while (a1 != b1) {
		if (a1 > b1) {
			a1 = a1 - b1;
			NOD = a1;
		}
		else {
			b1 = b1 - a1;
			NOD = b1;
		}
	}
	if (num / den12 != 0) {
		cout << num / den12;
		if (num % den12 > 0) {
			cout << "(" << num % den12 / NOD << "/" << den12 / NOD << ")";
		}
	}
	else {
		if (nod >= 1) {
			cout << "(" << num / NOD << "/" << den12 / NOD << ")";
		}
	}
	cout << "i";
	return *this;

}

complex complex::operator/=(const complex& tmp)const {
	int numerator1 = this->first.getNumerator() * tmp.first.getNumerator();
	int denominator1 = this->first.getDenominator() * tmp.first.getDenominator();
	int numerator2 = this->second.getNumerator() * tmp.second.getNumerator();
	int denominator2 = this->second.getDenominator() * tmp.second.getDenominator();
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
	int newnumerator1 = tmp.first.getNumerator() * tmp.first.getNumerator();
	int newdenominator1 = tmp.first.getDenominator() * tmp.first.getDenominator();
	int newnumerator2 = tmp.second.getNumerator() * tmp.second.getNumerator();
	int newdenominator2 = tmp.second.getDenominator() * tmp.second.getDenominator();
	int newdenominator12 = newdenominator1, newnumerator, newn1, newn2;
	if (newdenominator1 == newdenominator2) {
		newnumerator = newnumerator1 + newnumerator2;
		newdenominator12 = newdenominator1;
	}
	else {
		while (newdenominator12 % newdenominator2 != 0) {
			newdenominator12 = newdenominator12 + newdenominator1;
		}
		newn1 = newdenominator12 / newdenominator1;
		newn2 = newdenominator12 / newdenominator2;
		newnumerator = newnumerator1 * newn1 + newnumerator2 * n2;
	}
	numerator = numerator * newdenominator12;
	denominator12 = denominator12 * newnumerator;
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << " + ";
	int num1 = tmp.first.getNumerator() * this->second.getNumerator();
	int den1 = tmp.first.getDenominator() * this->second.getDenominator();
	int num2 = this->first.getNumerator() * tmp.second.getNumerator();
	int den2 = this->first.getDenominator() * tmp.second.getDenominator();
	int den12 = den1, num, a1, b1, n13, n23, NOD = 1;
	if (den1 == den2) {
		num = num1 + num2;
		den12 = den1;
	}
	else {
		while (den12 % den2 != 0) {
			den12 = den12 + den1;
		}
		n13 = den12 / den1;
		n23 = den12 / den2;
		num = num1 * n13 + num2 * n23;
	}
	int newnum1 = tmp.first.getNumerator() * tmp.first.getNumerator();
	int newden1 = tmp.first.getDenominator() * tmp.first.getDenominator();
	int newnum2 = tmp.second.getNumerator() * tmp.second.getNumerator();
	int newden2 = tmp.second.getDenominator() * tmp.second.getDenominator();
	int newden12 = newden1, newnum, newn13, newn23;
	if (newden1 == newden2) {
		newnum = newnum1 - newnum2;
		newden12 = newden1;
	}
	else {
		while (newden12 % newden2 != 0) {
			newden12 = newden12 + newden1;
		}
		newn13 = newden12 / newden1;
		newn23 = newden12 / newden2;
		newnum = newnum1 * newn13 + newnum2 * newn23;
	}
	num = num * newden12;
	den12 = den12 * newnum;
	a1 = den12; b1 = num;
	if (den12 != 0 && num != 0) {
		while (a1 != b1) {
			if (a1 > b1) {
				a1 = a1 - b1;
				NOD = a1;
			}
			else {
				b1 = b1 - a1;
				NOD = b1;
			}
		}
		if (num / den12 != 0) {
			cout << num / den12;
			if (num % den12 > 0) {
				cout << num % den12 / NOD << "/" << den12 / NOD;
			}
		}
		else {
			if (NOD > 1) {
				cout << num / NOD << "/" << den12 / NOD;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << "i";
	return *this;

}

complex complex::operator+=(const int tmp)const {
	int numerator1 = this->first.getNumerator();
	int denominator1 = this->first.getDenominator();
	int denominator12 = denominator1, numerator, a, b, nod = 1;
	numerator = numerator1 + tmp * denominator12;
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << " " << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << " + ";
	cout << this->second.getNumerator() << "/" << this->second.getDenominator() << "i";
	return *this;
}

complex complex::operator-=(const int tmp)const {
	int numerator1 = this->first.getNumerator();
	int denominator1 = this->first.getDenominator();
	int denominator12 = denominator1, numerator, a, b, nod = 1;
	numerator = numerator1 - tmp * denominator12;
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator > 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << " " << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		if (numerator < 0) {
			cout << numerator << "/" << denominator12;
		}
		else {
			cout << "0";
		}
	}
	cout << " + ";
	cout << this->second.getNumerator() << "/" << this->second.getDenominator() << "i";
	return *this;
}

complex complex::operator*=(const int tmp)const {
	int numerator1 = this->first.getNumerator();
	int denominator1 = this->first.getDenominator();
	int denominator12 = denominator1, numerator, a, b, nod = 1;
	numerator = numerator1 * tmp;
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << " " << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod > 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << " + ";
	cout << this->second.getNumerator() << "/" << this->second.getDenominator() << "i";
	return *this;
}

complex complex::operator/=(const int tmp)const {
	int numerator1 = this->first.getNumerator();
	int denominator1 = this->first.getDenominator();
	int denominator12 = denominator1 * tmp, numerator, a, b, nod = 1;
	numerator = numerator1;
	a = denominator12; b = numerator;
	if (denominator12 != 0 && numerator != 0) {
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
			cout << numerator / denominator12;
			if (numerator % denominator12 > 0) {
				cout << " " << numerator % denominator12 / nod << "/" << denominator12 / nod;
			}
		}
		else {
			if (nod >= 1) {
				cout << numerator / nod << "/" << denominator12 / nod;
			}
		}
	}
	else {
		cout << "0";
	}
	cout << " + ";
	cout << this->second.getNumerator() << "/" << this->second.getDenominator() << "i";
	return *this;
}

std::ostream& operator<<(std::ostream& out, const complex& tmp){
	int num1 = tmp.first.getNumerator();
	int den1 = tmp.first.getDenominator();
	int num2 = tmp.second.getNumerator();
	int den2 = tmp.second.getDenominator();
	out << num1 << "/" << den1 << " + " << num2 << "/" << den2 << "i";
	return out;
}

std::istream& operator>>(std::istream& in, complex& tmp){
	cout << "Действительная часть: " << endl;
	in >> tmp.first;
	cout << "Мнимая часть: " << endl;
	in >> tmp.second;
	return in;
}
