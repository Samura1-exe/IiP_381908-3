#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
class fraction
{
public:
        fraction();
        fraction(int _a, int _b);
        void input(int *a, int *b, int n);
        void showFrac(int n);
        int getFracChisl()const;
        int getFracZnam()const;
        void setFracChisl(int newChis);
        void setFracZnam(int newZnam);
        int sum(fraction f1, fraction f2);
        int diff(fraction f1, fraction f2);
        int mult(fraction f1, fraction f2);
        int divis(fraction f1, fraction f2);
        ~fraction();
        friend std::istream& operator>> (std::istream& in, fraction& tmp);
private:
    int chils;
    int znam;
};

void twomin(int* a, int* b);