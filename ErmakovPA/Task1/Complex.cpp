#include "Complex.h"

complex::complex(fraction _Re, fraction _Im) // конструктор
{
		this->Re= _Re;
		this->Im= _Im;
		//cout << " онструктор сконструировалс€" << this << endl;
}

complex::complex()
{
	this->Re = fraction(0, 1);
	this->Im = fraction(0, 1);
	//cout << " онструктор 2 сконструировалс€" << this << endl;
	
}

complex::~complex()// деструктор
{
	this->Re = fraction(0, 1);
	this->Im = fraction(0, 1);
	//cout << "ƒеструктор сдеструктил" << this << endl;
}

void complex::toString()
{
	int re = this->Re.getFracChisl();
	int re1 = this->Re.getFracZnam();
	int im = this->Im.getFracChisl();
	int im1 = this->Im.getFracZnam();
	cout << re << "/" << re1 <<"+"<< "(" << im << "/" << im1 << ")" << "*i" << endl<<endl;

}

complex complex::operator+(const complex& tmp) const
{
	
	int ch1 = this->Re.getFracChisl() * tmp.Re.getFracZnam();
	int ch2 = this->Re.getFracZnam() * tmp.Re.getFracChisl();

	int ch3 = this->Im.getFracChisl() * tmp.Im.getFracZnam();
	int ch4 = this->Im.getFracZnam() * tmp.Im.getFracChisl();
	complex res(fraction(ch1 + ch2, this->Re.getFracZnam() * tmp.Re.getFracZnam()),fraction(ch3 + ch4,this->Im.getFracZnam() * tmp.Im.getFracZnam()));

	return res;
}

complex complex::operator-(const complex& tmp) const
{
	int vib;
	int z = this->Re.getFracZnam() * tmp.Re.getFracZnam();
	int ch1 = this->Re.getFracChisl() * tmp.Re.getFracZnam();
	int ch2 = this->Re.getFracZnam() * tmp.Re.getFracChisl();

	int ch3 = this->Im.getFracChisl() * tmp.Im.getFracZnam();
	int ch4 = this->Im.getFracZnam() * tmp.Im.getFracChisl();
	complex res;
	do {
		cout << "1)»з первого числа вычесть второе\n2)Ќаоборот" << endl;
		cin >> vib;
	} while (1 > vib || vib > 2);
	if (vib == 1)
		 res = complex(fraction(ch1 - ch2, z), fraction(ch3 - ch4, this->Im.getFracZnam() * tmp.Im.getFracZnam()));
	else
		res = complex(fraction(ch2 - ch1, z), fraction(ch4 - ch3, this->Im.getFracZnam() * tmp.Im.getFracZnam()));

	return res;
}

complex complex::operator/(const complex& tmp) const
{
	int vib;
	complex res;
	do {
		cout << "1)ѕервое число разделить на второе\n2)Ќаоборот" << endl;
		cin >> vib;
	} while (1 > vib || vib > 2);
	if (vib==1)
	res = complex(fraction(this->Re.getFracChisl() * tmp.Re.getFracZnam(),
		this->Re.getFracZnam() * tmp.Re.getFracChisl()),
		fraction(this->Im.getFracChisl() * tmp.Im.getFracZnam(),
			this->Im.getFracZnam() * tmp.Im.getFracChisl()));
	else
		res = complex(fraction(this->Re.getFracZnam() * tmp.Re.getFracChisl(),
			this->Re.getFracChisl() * tmp.Re.getFracZnam()),
			fraction(this->Im.getFracZnam() * tmp.Im.getFracChisl(),
				this->Im.getFracChisl() * tmp.Im.getFracZnam()));
	return res;
}

complex complex::operator*(const complex& tmp) const
{
	
	complex res(fraction(this->Re.getFracChisl() * tmp.Re.getFracChisl(),
		this->Re.getFracZnam() * tmp.Re.getFracZnam()), 
		fraction(this->Im.getFracChisl() * tmp.Im.getFracChisl(),
			this->Im.getFracZnam() * tmp.Im.getFracZnam()));
	return res;
}

complex& complex::operator=(const complex& tmp)
{
	this->Re = tmp.Re;
	this->Im = tmp.Im;
	//cout << "ѕерегрузка = перегрузилась" << this << endl;
	return *this;	
	
}
//complex complex::operator!=(const complex& tmp) const
//{
//	
//
//
//	return ;
//}

complex complex::operator+(int tmp)const
{
	return complex(fraction(this->Re.getFracChisl() + tmp * this->Re.getFracZnam(), this->Re.getFracZnam()), fraction(this->Im.getFracChisl(), this->Im.getFracZnam()));
}

complex complex::operator-(int tmp) const
{
	complex res;

	return res = complex(fraction(this->Re.getFracChisl() - tmp * this->Re.getFracZnam(), this->Re.getFracZnam()), fraction(this->Im.getFracChisl(), this->Im.getFracZnam()));

}

complex complex::operator/(int tmp) const
{
	complex res;
	if (tmp == 0)
	{
		cout << "Ќа ноль низ€€€€€€€€€";
		return *this;
	}
	else
	return res = complex(fraction(this->Re.getFracChisl(), this->Re.getFracZnam()*tmp), fraction(this->Im.getFracChisl(), this->Im.getFracZnam() * tmp));

}

complex complex::operator*(int tmp) const
{
	return complex(fraction(this->Re.getFracChisl() * tmp, this->Re.getFracZnam()), fraction(this->Im.getFracChisl() * tmp, this->Im.getFracZnam()));

}

bool complex::operator>(const complex& tmp)
{
	bool res;
	int ch1, ch2, ch3, ch4;
	ch1 = this->Re.getFracChisl() * tmp.Re.getFracZnam();
	ch2 = tmp.Re.getFracChisl() * this->Re.getFracZnam();
	ch3 = this->Im.getFracChisl() * tmp.Im.getFracZnam();
	ch4 = tmp.Im.getFracChisl() * this->Im.getFracZnam();
	res = (ch1>ch2) && (ch3 > ch4);
	return res;
}

bool complex::operator<(const complex& tmp)
{
	bool res;
	int ch1, ch2, ch3, ch4;
	ch1 = this->Re.getFracChisl() * tmp.Re.getFracZnam();
	ch2 = tmp.Re.getFracChisl() * this->Re.getFracZnam();
	ch3 = this->Im.getFracChisl() * tmp.Im.getFracZnam();
	ch4 = tmp.Im.getFracChisl() * this->Im.getFracZnam();
	res = (ch1 < ch2) && (ch3 < ch4);
	return res;
}

bool complex::operator==(const complex& tmp)
{
	bool res;
	int ch1, ch2, ch3, ch4;
	ch1 = this->Re.getFracChisl() * tmp.Re.getFracZnam();
	ch2 = tmp.Re.getFracChisl() * this->Re.getFracZnam();
	ch3 = this->Im.getFracChisl() * tmp.Im.getFracZnam();
	ch4 = tmp.Im.getFracChisl() * this->Im.getFracZnam();
	res = (ch1 == ch2) && (ch3 == ch4);
	return res;
}

bool complex::operator!=(const complex& tmp)
{
	bool res;
	int ch1, ch2, ch3, ch4;
	ch1 = this->Re.getFracChisl() * tmp.Re.getFracZnam();
	ch2 = tmp.Re.getFracChisl() * this->Re.getFracZnam();
	ch3 = this->Im.getFracChisl() * tmp.Im.getFracZnam();
	ch4 = tmp.Im.getFracChisl() * this->Im.getFracZnam();
	res = (ch1 != ch2) && (ch3 != ch4);
	return res;
}

bool complex::operator>=(const complex& tmp)
{
	bool res;
	int ch1, ch2, ch3, ch4;
	ch1 = this->Re.getFracChisl() * tmp.Re.getFracZnam();
	ch2 = tmp.Re.getFracChisl() * this->Re.getFracZnam();
	ch3 = this->Im.getFracChisl() * tmp.Im.getFracZnam();
	ch4 = tmp.Im.getFracChisl() * this->Im.getFracZnam();
	res = (ch1 >= ch2) && (ch3 >= ch4);
	return res;
}

bool complex::operator<=(const complex& tmp)
{
	bool res;
	int ch1, ch2, ch3, ch4;
	ch1 = this->Re.getFracChisl() * tmp.Re.getFracZnam();
	ch2 = tmp.Re.getFracChisl() * this->Re.getFracZnam();
	ch3 = this->Im.getFracChisl() * tmp.Im.getFracZnam();
	ch4 = tmp.Im.getFracChisl() * this->Im.getFracZnam();
	res = (ch1 <= ch2) && (ch3 <= ch4);
	return res;
}

complex& complex::operator+=(const complex& tmp)
{
	int ch1 = this->Re.getFracChisl() * tmp.Re.getFracZnam();
	int ch2 = this->Re.getFracZnam() * tmp.Re.getFracChisl();
	int ch3 = this->Im.getFracChisl() * tmp.Im.getFracZnam();
	int ch4 = this->Im.getFracZnam() * tmp.Im.getFracChisl();
	complex res(fraction(ch1 + ch2, this->Re.getFracZnam() * tmp.Re.getFracZnam()), fraction(ch3 + ch4, this->Im.getFracZnam() * tmp.Im.getFracZnam()));
	*this = res;
	return *this;
}

complex& complex::operator-=(const complex& tmp)
{
	
	complex res;
	int z = this->Re.getFracZnam() * tmp.Re.getFracZnam();
	int ch1 = this->Re.getFracChisl() * tmp.Re.getFracZnam();
	int ch2 = this->Re.getFracZnam() * tmp.Re.getFracChisl();

	int ch3 = this->Im.getFracChisl() * tmp.Im.getFracZnam();
	int ch4 = this->Im.getFracZnam() * tmp.Im.getFracChisl();
	
	res = complex(fraction(ch1 - ch2, z), fraction(ch3 - ch4, this->Im.getFracZnam() * tmp.Im.getFracZnam()));

	*this = res;
	return *this;
}

complex& complex::operator/=(const complex& tmp)
{
	complex res;
		res = complex(fraction(this->Re.getFracChisl() * tmp.Re.getFracZnam(),
			this->Re.getFracZnam() * tmp.Re.getFracChisl()),
			fraction(this->Im.getFracChisl() * tmp.Im.getFracZnam(),
				this->Im.getFracZnam() * tmp.Im.getFracChisl()));
	*this = res;
	return *this;
}

complex& complex::operator*=(const complex& tmp)
{
	complex res(fraction(this->Re.getFracChisl() * tmp.Re.getFracChisl(),
		this->Re.getFracZnam() * tmp.Re.getFracZnam()),
		fraction(this->Im.getFracChisl() * tmp.Im.getFracChisl(),
			this->Im.getFracZnam() * tmp.Im.getFracZnam()));
	*this = res;
	return *this;
}

complex& complex::operator+=(int tmp)
{
	complex res(fraction(this->Re.getFracChisl() + tmp * this->Re.getFracZnam(), this->Re.getFracZnam()), fraction(this->Im.getFracChisl(), this->Im.getFracZnam()));

	*this = res;
	return *this;
}

complex& complex::operator-=(int tmp)
{
	 complex res(fraction(this->Re.getFracChisl() - tmp * this->Re.getFracZnam(), this->Re.getFracZnam()), fraction(this->Im.getFracChisl(), this->Im.getFracZnam()));

	*this = res;
	return *this;
}

complex& complex::operator/=(int tmp)
{
	complex res(fraction(this->Re.getFracChisl(), this->Re.getFracZnam() * tmp), fraction(this->Im.getFracChisl(), this->Im.getFracZnam() * tmp));

	*this = res;
	return *this;
}

complex& complex::operator*=(int tmp)
{
	 complex res(fraction(this->Re.getFracChisl() * tmp, this->Re.getFracZnam()), fraction(this->Im.getFracChisl() * tmp, this->Im.getFracZnam()));

	*this = res;
	return *this;
}






std::ostream& operator<<(std::ostream& out, const complex& tmp)
{
	
	int re = tmp.Re.getFracChisl();
	int re1 = tmp.Re.getFracZnam();
	int im = tmp.Im.getFracChisl();
	int im1 = tmp.Im.getFracZnam();
	return cout << re << "/" << re1 << "+" << "(" << im << "/" << im1 << ")" << "*i" << endl << endl;
}

std::istream& operator>>(std::istream& in, complex& tmp)
{
	cout << "ƒействительна€ часть" << endl;
	in >> tmp.Re;
	cout << "ћнима€ часть" << endl;
	in >> tmp.Im;
	return in;
}


