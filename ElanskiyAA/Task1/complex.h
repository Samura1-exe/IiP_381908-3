#include "fraction.h"

class complex{
private:
	fraction first;
	fraction second;
public:
	complex();
	complex(fraction newFirst, fraction newSecond);
	complex(const complex& tmp);
	~complex();
	void out();
	complex& operator=(const complex& tmp);
	complex operator+(const complex& tmp)const;
	complex operator*(const complex& tmp)const;
	complex operator-(const complex& tmp)const;
	complex operator/(const complex& tmp)const;
	complex operator+(const int tmp)const;
	complex operator-(const int tmp)const;
	complex operator*(const int tmp)const;
	complex operator/(const int tmp)const;
	bool operator>(complex& tmp);
	bool operator<(complex& tmp);
	bool operator==(complex& tmp);
	bool operator!=(complex& tmp);
	bool operator>=(complex& tmp);
	bool operator<=(complex& tmp);
	complex operator+=(const complex& tmp)const;
	complex operator-=(const complex& tmp)const;
	complex operator*=(const complex& tmp)const;
	complex operator/=(const complex& tmp)const;
	complex operator+=(const int tmp)const;
	complex operator-=(const int tmp)const;
	complex operator*=(const int tmp)const;
	complex operator/=(const int tmp)const;
	friend std::ostream& operator<<(std::ostream& out, const complex& tmp);
	friend std::istream& operator>>(std::istream& in, complex& tmp);
};
