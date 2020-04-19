#include <iostream>
using namespace std;
class fraction
{
private:
	int chisl;
	int znam;
public:
	void SetChisl(int n);
	void SetZnam(int n);
	int GetChisl();
	int GetZnam();
	int Umn(fraction drob1, fraction drob2);
	int Del(fraction drob1, fraction drob2);
	int Sum(fraction drob1, fraction drob2);
	int Vuch(fraction drob1, fraction drob2);

};