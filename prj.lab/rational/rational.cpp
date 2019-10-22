#include <rational/rational.h>
#include <iostream>
Rational operator+(const Rational& a, const Rational& b);
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

Rational operator+(const Rational & a, const Rational & b)
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

Rational::Rational(const int nu) :Rational(nu, 1) {}

Rational::Rational(int numerator, int denumerator)
{
	nu = numerator;
	de = denumerator;
	simplify();
}

bool Rational::operator>(const Rational & rat)const
{
	double a = nu / de;
	double b = rat.nu / rat.de;
	return a > b;
}

bool Rational::operator<(const Rational & rat) const
{
	double a = nu / de;
	double b = rat.nu / rat.de;
	return a < b;
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
void Rational::simplify()
{
	if (de == 0) {
		throw std::invalid_argument("Denomenator must not be zero");
	}
	else
	{
		int a = abs(nu);
		int b = abs(de);
		while ((a != b) && (a != 0))
		{
			if (a > b) a -= b;
			else b -= a;
		}
		nu /= b;
		de /= b;
		if (de < 0) {
			nu *= -1;
			de *= -1;
		}
	}
}
inline std::ostream& operator<<(std::ostream& ostrm, Rational& rat)
{
	return rat.writeTo(ostrm);
}
inline std::istream& operator>>(std::istream& istrm, Rational& rat)
{
	return rat.readFrom(istrm);
}
std::istream & Rational::readFrom(std::istream & istrm)
{
	int numerator(0);
	char line(0);
	int denumerator(1);
	char leftBrace(0);
	char rightBrace(0);
	istrm >> leftBrace >> numerator >> line >> denumerator >> rightBrace;
	if (istrm.good())
	{
		if ((Rational::line == line) && (Rational::leftBrace == leftBrace) && (Rational::rightBrace == rightBrace))
		{
			nu = numerator;
			de = denumerator;
		}
		else {
			istrm.setstate(std::ios_base::failbit);
		}
		try
		{
			simplify();
		}
		catch (std::invalid_argument)
		{
			istrm.setstate(std::ios_base::failbit);
			std::cout << "ERROR" << std::endl;
			de = 1;
		}
	}
	return istrm;
}
std::ostream & Rational::writeTo(std::ostream & ostrm) const
{
	ostrm << nu << line << de;
	return ostrm;
}