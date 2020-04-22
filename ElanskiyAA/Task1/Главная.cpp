#include "complex.h"
#include "vector.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "rus");
	int denominator1, numerator1, denominator2, numerator2, a, b=0, c, d, e, f;
	fraction first;
	fraction second;
	vector one;
	do {
		system("cls");
		cout << "Вы хотите работать с:\n1 Комплексными числами\n2 Дробью\n3 Другими дробями\n4 Векторами\n404 - Выход из программы" << endl;
		cin >> c;
		switch (c) {
		case 1: {
			cout << "Ведите числитель первой дроби: "; cin >> numerator1;
			first.setNumerator(numerator1);
			do {
				cout << "Ведите знаменатель первой дроби: "; cin >> denominator1;
			} while (denominator1 == 0);
			first.setDenominator(denominator1);
			cout << "Получаем дробь: " << first.getNumerator() << "/" << first.getDenominator() << endl << endl;
			cout << "Ведите числитель второй дроби: "; cin >> numerator2;
			second.setNumerator(numerator2);
			do {
				cout << "Ведите знаменатель второй дроби: "; cin >> denominator2;
				second.setDenominator(denominator2);
			} while (denominator2 == 0);
			cout << "Получаем дробь: " << second.getNumerator() << "/" << second.getDenominator() << endl << endl;
			do {
				system("cls");
				complex some(first, second);
				cout << "Комплексное число = ";
				some.out();	cout << endl;
				cout << "1 Скопировать дробби в другой класс\n2 Проверка перегрузок\n404 - Пропустить шаг" << endl;
				cin >> d;
				switch (d) {
				case 1: {
					complex some(first, second);
					complex tmp12;
					tmp12 = some;
					cout << "Теперь, комплексное число: ";
					tmp12.out();
					cout << " находится в новом объекте" << endl;
				}break;
				case 2: {
					complex some(first, second);
					complex some1;
					cin >> some1; cout << endl;
					cout << some1; cout << " - Вывод комплекса" << endl;
					some1 + some; cout << " - Сумма с комплексом" << endl;
					some1 - some; cout << " - Разность с комплексом" << endl;
					some1 * some; cout << " - Производение с комплексом" << endl;
					some1 / some; cout << " - Частное с комплесом" << endl;
					some1 + 2; cout << " - Сумма с числом" << endl;
					some1 - 2; cout << " - Разность с числом" << endl;
					some1 * 2; cout << " - Произвеюение с числом" << endl;
					some1 / 2; cout << " - Частное с числом" << endl;
					if (some1 > some) {
						cout << "Верно - Сравнение больше" << endl;
					}
					else {
						cout << "Не верно - Сравнение больше" << endl;
					}
					if (some1 < some) {
						cout << "Верно - Сравнение меньше" << endl;
					}
					else {
						cout << "Не верно - Сравнение меньше" << endl;
					}
					if (some1 == some) {
						cout << "Верно - Сравнение эквивалентности" << endl;
					}
					else {
						cout << "Не верно - Сравнение эквивалентности" << endl;
					}
					if (some1 != some) {
						cout << "Верно - Сравнение не эквивалентности" << endl;
					}
					else {
						cout << "Не верно - Сравнение не эквивалентности" << endl;
					}
					if (some1 >= some) {
						cout << "Верно - Сравнение больше или равно" << endl;
					}
					else {
						cout << "Не верно - Сравнение больше или равно" << endl;
					}
					if (some1 <= some) {
						cout << "Верно - Сравнение меньше или равно" << endl;
					}
					else {
						cout << "Не верно - Сравнение меньше или равно" << endl;
					}
					some1 += some; cout << " - += комплекс" << endl;
					some1 -= some; cout << " - -= комплекс" << endl;
					some1 *= some; cout << " - *= комплекс" << endl;
					some1 /= some; cout << " - /= комплекс" << endl;
					some1 += 2; cout << " - += число" << endl;
					some1 -= 2; cout << " - -= число" << endl;
					some1 *= 2; cout << " - *= число" << endl;
					some1 /= 2; cout << " - /= число" << endl;
					}break;
				}
				system("pause");
			} while (d != 404);
		}break;      //Блок с комплексными действиями
		case 2: {
			cout << "Ведите числитель первой дроби: "; cin >> numerator1;
			first.setNumerator(numerator1);
			do {
				cout << "Ведите знаменатель первой дроби: "; cin >> denominator1;
			} while (denominator1 == 0);
			first.setDenominator(denominator1);
			cout << "Ведите числитель второй дроби: "; cin >> numerator2;
			second.setNumerator(numerator2);
			do {
				cout << "Ведите знаменатель второй дроби: "; cin >> denominator2;
				second.setDenominator(denominator2);
			} while (denominator2 == 0);
			do {
				system("cls");
				cout << "У нас есть дробь №1: " << first.getNumerator() << "/" << first.getDenominator() << endl;
				cout << "Ещё есть  дробь №2: " << second.getNumerator() << "/" << second.getDenominator() << endl << endl;
				cout << "Какое действие хотите совершить?\n1 Сложение\n2 Вычитание\n3 Умножение\n4 Деление\n404 - Вернуться на прошлый шаг" << endl << endl;
				cin >> a;
				switch (a) {
				case 1: {
					first.amount(first, second);
				}break;
				case 2: {
					first.subtraction(first, second);
				}break;
				case 3: {
					first.multiplication(first, second);
				}break;
				case 4: {
					first.division(first, second);
				}break;
				}
				system("pause");
			} while (a != 404);
		}break;      //Блок с дробными действиями
		case 3: {
			system("cls");
			do {
				cout << "Ведите числитель первой дроби: "; cin >> numerator1;
			} while (numerator1 == 0);
			first.setNumerator(numerator1);
			cout << "Ведите знаменатель первой дроби: "; cin >> denominator1;
			first.setDenominator(denominator1);
			cout << "Получаем дробь: " << first.getNumerator() << "/" << first.getDenominator() << endl << endl;
			do {
				cout << "Ведите числитель второй дроби: "; cin >> numerator2;
			} while (numerator2 == 0);
			second.setNumerator(numerator2);
			cout << "Ведите знаменатель второй дроби: "; cin >> denominator2;
			second.setDenominator(denominator2);
			cout << "Получаем дробь: " << second.getNumerator() << "/" << second.getDenominator() << endl << endl;
		}break;      //Блок для введения новго числа
		case 4: {
			cout << "Ведите количество измерений вектора:";
			cin >> e;
			one.setSizeMern(e);
			for (int i = 0; i < e; i++) {
				cin >> f;
				this->mass[i] = f;
				cout << "[" << i << "] = " << f;
			}
		}break;
		}
		system("pause");
	} while (c != 404);
	return 0;
}