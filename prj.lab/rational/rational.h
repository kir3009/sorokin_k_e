#ifndef RATIONAL_RATIONAL_H
#define RATIONAL_RATIONAL_H

#include <iostream>
struct Rational
{
	Rational() {}
	explicit Rational(const int nu);
	Rational(int numerator, int denumerator);
	bool operator==(const Rational& rat) const { return (nu == rat.nu) && (de == rat.de); }
	bool operator!=(const Rational& rat) const { return !operator==(rat); }
	bool operator>(const Rational& rat)const;
	bool operator<(const Rational& rat) const;
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
	void simplify();
	const char line{ '/' };
	int nu{ 0 };
	int de{ 1 };
	static const char leftBrace{ '{' };
	static const char rightBrace{ '}' };
};

#endif