#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <string>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	bool operator == (Fraction other) {
		return ((static_cast<float>(numerator_) / denominator_) == (static_cast<float>(other.numerator_) /other.denominator_));
	}
	bool operator != (Fraction other) {
		return !(*this == other);
	}
	bool operator < (Fraction other) {
		return ((static_cast<float>(numerator_) / denominator_) < (static_cast<float>(other.numerator_) / other.denominator_));
	}
	bool operator > (Fraction other) {
		return (other < *this);
	}
	bool operator <= (Fraction other) {
		return ((*this < other) || (*this == other));
	}
	bool operator >= (Fraction other) {
		return ((*this > other) || (*this == other));
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	Fraction f1(4, 3);
	Fraction f2(12, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	
}


