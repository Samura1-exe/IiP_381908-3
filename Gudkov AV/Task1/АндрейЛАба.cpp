
#include "Frac.h"
#include "locale"

int main()
{
    setlocale(LC_ALL, "Russian");
    fraction test;
    fraction test1;
    int c, d;
    cout << "Введите числитель" << endl;
    cin >> c;
    cout << "Введите знаменатель" << endl;
    do
    {
        cin >> d;
        if (d == 0)
            cout << "Нельзя так"<<endl;
    } while (d==0);
    
    test.SetChisl(c);
    test.SetZnam(d);
    cout << "Введите числитель" << endl;
    cin >> c;
    cout << "Введите знаменатель" << endl;
    do
    {
        cin >> d;
        if (d == 0)
            cout << "Нельзя так" << endl;
    } while (d == 0);

    test1.SetChisl(c);
    test1.SetZnam(d);
    test.Umn(test,test1);
    cout << endl;
    cout << endl;
    test.Del(test, test1);
    cout << endl;
    cout << endl;
    test.Sum(test, test1);
    cout << endl;
    cout << endl;
    test.Vuch(test, test1);
}
