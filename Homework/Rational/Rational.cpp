

#include "pch.h"
#include <iostream>
#include <sstream>

class Rational
{
public:
	Rational() {}
	explicit Rational(const double nu) :Rational(nu, 1){}
	Rational( int numerator,int denumerator)
	{
		nu = numerator;
		de = denumerator;
		Minus();
		Sokr();
	}
	void Sokr(int nu,int de)
	{
		int i;
		if (nu < de) {
			i = nu;
		}
		else {
			i = de;
		}

		for (; i > 0; i--) {
			if (nu % i == 0 && de % i == 0) {
				nu /= i;
				de /= i;
			}
		}
	}
	int chislitel() { return nu; }
	int znamenatel() { return de; }
	bool operator==(const Rational& rat) const { return (nu == rat.nu) && (de == rat.de); }
	bool operator!=(const Rational& rat) const { return !operator==(rat); }
	bool operator>(const Rational& rat) const
	{
		double a = nu / de;
		double b = rat.nu / rat.de;
		return a > b;
	}
	bool operator<(const Rational& rat) const
	{
		double a = nu / de;
		double b = rat.nu / rat.de;
		return a < b;
	}
	bool operator<=(const Rational& rat) const { return !operator>(rat); }
	bool operator>=(const Rational& rat) const { return !operator<(rat); }

	Rational& operator +=(const Rational& rat);
	Rational& operator -=(const Rational& rat);
	Rational& operator *=(const Rational& rat);
	Rational& operator /=(const Rational& rat);
	friend Rational operator+(const Rational & a, const Rational & b);
	friend Rational operator-(const Rational & a, const Rational & b);
	friend Rational operator * (const Rational &a, const Rational &b);
    friend Rational operator / (const Rational &a, const Rational &b);
	std::ostream& writeTo(std::ostream& ostrm) const;
	std::istream& readFrom(std::istream& istrm);
	void Minus();
	void Sokr();
	const char line{ '/' };
	int nu{ 0 };
	int de{ 1 };
};
Rational operator+(const Rational& a, const Rational& b)
{
	Rational newRational = Rational();
	if (b.de == a.de) {
		newRational.de = a.de;
		newRational.nu = a.nu + b.nu;
	}
	else {
		newRational.de = a.de * b.de;
		newRational.nu = a.nu * b.de + b.nu * a.de;
	}
	return newRational;
}
Rational operator-(const Rational& a, const Rational& b)
{
	Rational newRational = Rational();
	if (b.de == a.de) {
		newRational.de = a.de;
		newRational.nu = a.nu - b.nu;
	}
	else {
		newRational.de = a.de * b.de;
		newRational.nu = a.nu * b.de - b.nu * a.de;
	}
	return newRational;
}
Rational operator*(const Rational& a, const Rational& b)
{
	Rational newRational = Rational();
	newRational.nu = a.nu * b.nu;
	newRational.de = a.de * b.de;
	return newRational;
}
Rational operator/(const Rational& a, const Rational& b)
{
	Rational newRational = Rational();
	newRational.nu = a.nu * b.de;
	newRational.de = a.de * b.nu;
	return newRational;

}

Rational & Rational::operator+=(const Rational & rat)
{
	nu = nu * rat.de + de * rat.nu;
	de *= rat.de;
	return *this;
}
Rational & Rational::operator-=(const Rational & rat)
{
	nu = nu * rat.de - de * rat.nu;
	de *= rat.de;
	return *this;
}

Rational & Rational::operator*=(const Rational & rat)
{
	nu *= rat.nu;
	de *= rat.de;
	return *this;
}

Rational & Rational::operator/=(const Rational & rat)
{
	nu *= rat.de;
	de *= rat.nu;
	return *this;
}

void Rational::Minus()
{
	if (de < 1)
	{
		de *= -1;
		nu *= -1;
	}
}
void Rational::Sokr()
{
	int i;
	if (nu < de) {
		i = nu;
	}
	else {
		i = de;
	}

	for (; i > 0; i--) {
		if (nu % i == 0 && de % i == 0) {
			nu /= i;
			de /= i;
		}
	}
}
inline std::ostream& operator<<(std::ostream& ostrm,Rational& rat)
{
	return rat.writeTo(ostrm);
}
inline std::istream& operator>>(std::istream& istrm, Rational& rat)
{
	return rat.readFrom(istrm);
}

bool testParse(const std::string& str) {
	using namespace std;
	istringstream istrm(str);
	Rational z;
	istrm >> z;
	std::cout << z;
	if (istrm.good()) {
		cout << "Read success: " << str << " -> " << z << endl;
	}
	else {
		cout << "Read error: " << str << " -> " << z << endl;
	}
	return istrm.good();
}

int main()
{
	Rational a(1,-2);
	Rational b(1, 10);
	//testParse("2/3");
	std::cout <<a;

}
std::istream & Rational::readFrom(std::istream & istrm) 
{
	int numerator(0);
	char line(0);
	int denumerator(1);
	istrm >> numerator >> line >> denumerator;
		if (Rational::line == line)
		{
			nu = numerator;
			de = denumerator;
		}
		else {
			istrm.setstate(std::ios_base::failbit);
		}
	return istrm;
}
std::ostream & Rational::writeTo(std::ostream & ostrm) const
{
	ostrm << nu << line << de;
	return ostrm;
}

