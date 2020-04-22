
#include "Complex.h"
#include <locale>

int nin()
{
    int c;
    cout << "Введите число:\n"; 
    cin >> c;
    return c;
}


int main()
{
    int ch1, ch2, z1, z2, vib,z,c;
    setlocale(LC_ALL, "Rus");
    fraction fraction3, fraction4;
    fraction a = {1,5};
    fraction* fraction1 = new fraction();
    fraction* fraction2 = new fraction();
   do {
        cout << "1)Работать с обычными дробями" << endl << "2)Работать с комплексными дробями" << endl;
        cin >> z;        
    } while (z<1||2<z);
    if (z == 1) {
        

        do {
            fraction1->input(&ch1, &z1, 1);
            fraction2->input(&ch2, &z2, 2);
            twomin(&ch1, &z1);
            twomin(&ch2, &z2);

            fraction1->setFracChisl(ch1);
            fraction2->setFracChisl(ch2);
            fraction2->setFracZnam(z2);
            fraction1->setFracZnam(z1);
            do {
                do {
                    system("cls");
                    fraction1->showFrac(1);
                    fraction2->showFrac(2);
                    cout << endl << "Ваши действия:" << endl;
                    cout << "\n1)Сложение" << endl;
                    cout << "2)Вычитание" << endl;
                    cout << "3)Умножение" << endl;
                    cout << "4)Деление" << endl;
                    cout << "5)Ввести новые данные" << endl;
                    cout << "0)Выход" << endl;
                    cin >> vib;
                } while (0 > vib || vib > 5);
                switch (vib)
                {
                case 1:fraction1->sum(*fraction1, *fraction2); break;
                case 2:fraction1->diff(*fraction1, *fraction2); break;
                case 3:fraction1->mult(*fraction1, *fraction2); break;
                case 4:fraction1->divis(*fraction1, *fraction2); break;
                case 0: break;
                default: break;
                }
                system("pause");
            } while (vib != 0 && vib != 5);
        } while (vib == 5);
    }
    else
    {
        system("cls");
        do {
            fraction1->input(&ch1, &z1, 1);
            fraction2->input(&ch2, &z2, 2);
            cout << "Теперь введите второе число" << endl;
            fraction3.input(&ch1, &z1, 1);
            fraction4.input(&ch2, &z2, 2);
          
            complex frc(*fraction1, a);
            complex frc2(fraction3, fraction4), res;
            cout << frc;
            do {
                do {
                    system("cls");
                    cout << "Число №1" << endl;
                    frc.toString();
                    cout << "Число №2" << endl;
                    frc2.toString();
                    cout << "Ваши действия:" << endl;
                    cout << "\n1)Сложение" << endl;
                    cout << "2)Вычитание" << endl;
                    cout << "3)Умножение" << endl;
                    cout << "4)Деление" << endl;
                    cout << "5)Прибавить обычное число" << endl;
                    cout << "6)Вычесть обычное число" << endl;
                    cout << "7)Умножить на обычное число" << endl;
                    cout << "8)Разделить на обычное число" << endl;
                    cout << "9)Проверить перегрузку оператора вывода на первой дроби" << endl;
                    cout << "\n10)Ввести новые данные" << endl;
                    cout << "0)Выход" << endl;
                    cin >> vib;
                } while (0 > vib || vib > 9);
                switch (vib)
                {
                case 1:frc += frc2; cout << frc; break;
				case 2:res = frc - frc2; break;
				case 3:res = frc2 * frc; break;
				case 4:res = frc / frc2; break;
				case 5:c = nin();res = frc += c;
					break;
				case 6:c = nin();
					res = frc - c;
					break;
				case 7:c = nin();
					res = frc * c;
					break;
				case 8:
                    
                        c = nin();
                        res = frc / c;
					break;
				case 0: break;
				default: break;
                }
                cout << "\nРезультат:"<<endl;
                cout << res;
                system("pause");
            } while (vib != 0 && vib != 10);
        } while (vib == 10);
      

    }
}
