#include "Frac.h"

int found0(int c) {
	if (c == 0) {

		return 0;
	}
	else return 1;


}
void fraction::SetChisl(int n)
{
	this->chisl = n;
}

void fraction::SetZnam(int n)
{
	this->znam = n;
}

fraction::fraction(int i, int j)
{
	this->chisl = i;
	this->znam = j;
}
fraction::fraction()
{
	this->chisl = 0;
	this->znam = 1;
}
fraction::~fraction()
{
	this->chisl = 0;
	this->znam = 1;
}
int fraction::GetChisl()
{
	return this->chisl;
}

int fraction::GetZnam()
{
	return this->znam;
}

int fraction::Umn(fraction drob1, fraction drob2)
{
	int c;
	int d;
	c = drob1.GetChisl() * drob2.GetChisl();
	if (found0(c) == 0)
	{
		cout << "0";
		return 0;
	}
	else
	{
		d = drob1.GetZnam() * drob2.GetZnam();
		cout << c << '/' << d;
	}
	return 0;

}

int fraction::Del(fraction drob1, fraction drob2)
{
	int c;
	int d;
	c = drob1.GetChisl() * drob2.GetZnam();
	if (found0(c) == 0)
	{
		cout << "0";
		return 0;
	}
	else
	{
		d = drob1.GetZnam() * drob2.GetChisl();
		cout << c << '/' << d;
	}
	return 0;
}

int fraction::Sum(fraction drob1, fraction drob2)
{
	int c;
	int d;
	c = drob1.GetChisl() * drob2.GetZnam() + drob1.GetZnam() * drob2.GetChisl();
	if (found0(c) == 0)
	{
		cout << "0";
		return 0;
	}
	else
	{
		d = drob1.GetZnam() * drob2.GetZnam();
		cout << c << '/' << d;
	}
	return 0;
}

int fraction::Vuch(fraction drob1, fraction drob2)
{
	int c;
	int d;
	c = drob1.GetChisl() * drob2.GetZnam() - drob1.GetZnam() * drob2.GetChisl();
	if (found0(c) == 0)
	{
		cout << "0";
		return 0;
	}
	else
	{
		d = drob1.GetZnam() * drob2.GetZnam();
		cout << c << '/' << d;
	}
	return 0;
}


