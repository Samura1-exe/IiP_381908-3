
#include "locale"
#include "Complex.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int a;
    cout << "Выберите:1.Обычные или 2.Комплексные дроби";
    do {
        cin >> a;
        
    } while (a<1 || a>2);
    if (a == 1) {
        fraction test(0, 1);
        fraction test1;
        int c, d;
        cout << "Введите числитель" << endl;
        cin >> c;
        cout << "Введите знаменатель" << endl;
        do
        {
            cin >> d;
            if (d == 0)
                cout << "Нельзя так" << endl;
        } while (d == 0);

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
        test.Umn(test, test1);
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
    else if (a == 2) {


        Complex fr1,fr2;
        fr1.scan();
        cout << fr1<<endl;
        fr2 = fr1;
        cout << fr2;
    }

}
