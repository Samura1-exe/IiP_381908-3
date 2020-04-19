// нахождение корня.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include<Windows.h>
using namespace std;
int main()// просто проверочка)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double a, b, c, d, x1, x2;
	cout << "Введите a" << endl;
	cin >> a;
	cout << "Введите b" << endl;
	cin >> b;
	cout << "Введите c" << endl;
	cin >> c;
	if (a > 0 && b > 0 && c > 0)
	{
		cout << "\t" << "" << a << "x^2" << " +" << " " << b << "x +" << " " << c << endl;
	}
	else {
		if (a < 0 && b > 0 && c > 0)
		{
			cout << "\t" << "" << a << "x^2" << " +" << " " << b << "x +" << " " << c << endl;
		}
		else {
			if (a < 0 && b < 0 && c > 0)
			{
				cout << "\t" << "" << a << "x^2" << " " << b << "x +" << " " << c << endl;
			}
			else {
				if (a < 0 && b > 0 && c > 0)
				{
					cout << "\t" << "" << a << "x^2" << " +" << " " << b << "x +" << " " << c << endl;
				}
				else {
					if (a > 0 && b < 0 && c < 0)
					{
						cout << "\t" << "" << a << "x^2" << " " << b << "x " << " " << c << endl;
					}
					else {
						if (a > 0 && b < 0 && c > 0)
						{
							cout << "\t" << "" << a << "x^2" << " " << b << "x +" << " " << c << endl;
						}
						else cout << "\t" << " " << a << "x^2" << " " << b << "x" << " " << c << endl;
					}
				}
			}
		}

	}
	d = (b * b) - 4 * a * c;

	if (d > 0)
	{
		cout << "\t" << "D =" << "" << b * b << "-4" << "*" << a << "*" << c << endl;
		cout << "\t" << "D =" << "" << sqrt(d) << endl;
		cout << "\t" << "x1 =" << "-" << "" << b << "+" << "" << sqrt(d) << "/" << "2*" << "" << a << endl;
		cout << "\t" << "x2 =" << "-" << "" << b << "-" << "" << sqrt(d) << "/" << "2*" << "" << a << endl;
		x1 = (-b) + sqrt(d) / (2 * a);
		x2 = (-b) - sqrt(d) / (2 * a);
		cout << "\t" << "x1 =" << "" << x1 << endl;
		cout << "\t" << "x2 =" << "" << x2 << endl;
		return 0;


	}
	else {
		if (d == 0)
		{
			cout << "\t" << "D =" << "" << b * b << " - 4" << "*" << a << "*" << c << endl;
			cout << "\t" << "D =" << "" << sqrt(d) << endl;
			cout << "\t" << "x1 =" << "-" << "" << b << "+" << "" << sqrt(d) << "/" << "2*" << "" << a << endl;
			x1 = (-b) + sqrt(d) / (2 * a);
			cout << "\t" << "x1 =" << "" << x1 << endl;
			return 0;


		}

		else
			cout << "\t" << "D =" << " " << b * b << " - 4" << "*" << a << "*" << c << endl;
		cout << "\t" << "Корней нет!";
		return 0;

	}

}



