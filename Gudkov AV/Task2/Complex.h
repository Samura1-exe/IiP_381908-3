#include "Frac.h"
class Complex {
private:
	fraction Re;
	fraction Im;
public:
	Complex();
	~Complex();
	void scan();
	friend ostream& operator<<(ostream& out, Complex& tmp);
	Complex& operator=(const Complex& tmp);
};
