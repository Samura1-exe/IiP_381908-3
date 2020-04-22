#include "fraction.h"

class complex {
private:
	fraction Re;
	fraction Im;
public:
	complex(fraction _Re, fraction _Im);
	complex();
	~complex();
	void toString();
	complex operator+(const complex& tmp) const;
	complex operator-(const complex& tmp)const;
	complex operator/(const complex& tmp)const;
	complex operator*(const complex& tmp)const;
	complex operator+ (int tmp) const;
	complex operator- (int tmp) const;
	complex operator/ (int tmp) const;
	complex operator* (int tmp) const;
	complex& operator=(const complex& tmp);
	friend std::ostream& operator<< (std::ostream& out, const complex& tmp);
	friend std::istream& operator>> (std::istream& in,  complex& tmp);
	bool operator>(const complex& tmp);
	bool operator<(const complex& tmp);
	bool operator==(const complex& tmp);
	bool operator!=(const complex& tmp);
	bool operator>=(const complex& tmp);
	bool operator<=(const complex& tmp);
	complex& operator+=(const complex& tmp) ;
	complex& operator-=(const complex& tmp);
	complex& operator/=(const complex& tmp);
	complex& operator*=(const complex& tmp);
	complex& operator+= (int tmp) ;
	complex& operator-=(int tmp) ;
	complex& operator/= (int tmp) ;
	complex& operator*= (int tmp) ;
	


};