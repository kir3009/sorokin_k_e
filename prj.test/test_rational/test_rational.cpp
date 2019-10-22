#include <rational/rational.h>

#include <iostream>
#include <sstream>

bool testParse(const std::string& str) {
	using namespace std;
	istringstream istrm(str);
	Rational z;
	istrm >> z;
	z.simplify();
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
	testParse("{3/-1}");
	testParse("3/0");
}