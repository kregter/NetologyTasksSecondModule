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

	std::string get_fraction() {
		return std::to_string(numerator_) + "/" + std::to_string(denominator_);
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

	Fraction operator + (Fraction other) {
		int res_numerator = numerator_ * other.denominator_ + denominator_ * other.numerator_;
		int res_denominator = denominator_ * other.denominator_;
		Fraction result(res_numerator, res_denominator);
		return result;
	}

	Fraction operator - (Fraction other) {
		int res_numerator = numerator_ * other.denominator_ - denominator_ * other.numerator_;
		int res_denominator = denominator_ * other.denominator_;
		Fraction result(res_numerator, res_denominator);
		return result;
	}

	Fraction operator * (Fraction other) {
		int res_numerator = numerator_ * other.numerator_;
		int res_denominator = denominator_ * other.denominator_;
		Fraction result(res_numerator, res_denominator);
		return result.reduce();
	}

	Fraction operator / (Fraction other) {
		int res_numerator = numerator_ * other.denominator_;
		int res_denominator = denominator_ * other.numerator_;
		Fraction result(res_numerator, res_denominator);
		return result.reduce();
	}

	Fraction& operator ++ () {
		this->numerator_ += this->denominator_;
		return *this;
	}

	Fraction operator ++ (int) {
		Fraction temp = *this;
		++(*this);
		return temp;
	}

	Fraction& operator -- () {
		this->numerator_ -= this->denominator_;
		return *this;
	}

	Fraction operator -- (int) {
		Fraction temp = *this;
		--(*this);
		return temp;
	}

	Fraction& reduce() {
		while ((this->numerator_ % 2 == 0) && (this->denominator_ % 2 == 0))
		{
			this->numerator_ = this->numerator_ / 2;
			this->denominator_ = this->denominator_ / 2;
		}
		return *this;
	}

};

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	std::cout << "Enter the numerator of the first fraction: " << std::endl;
	int fr1_num = 0;
	std::cin >> fr1_num;
	std::cout << "Enter the denominator of the first fraction: " << std::endl;
	int fr1_den = 0;
	std::cin >> fr1_den;

	std::cout << "Enter the numerator of the second fraction: " << std::endl;
	int fr2_num = 0;
	std::cin >> fr2_num;
	std::cout << "Enter the denominator of the second fraction: " << std::endl;
	int fr2_den = 0;
	std::cin >> fr2_den;

	Fraction f1(fr1_num, fr1_den);
	Fraction f2(fr2_num, fr2_den);

	Fraction time_fraction(0, 0);

	std::cout << f1.get_fraction() << " + " << f2.get_fraction() << " = " << (f1 + f2).get_fraction() << std::endl;
	std::cout << f1.get_fraction() << " - " << f2.get_fraction() << " = " << (f1 - f2).get_fraction() << std::endl;
	std::cout << f1.get_fraction() << " * " << f2.get_fraction() << " = " << (f1 * f2).get_fraction() << std::endl;
	std::cout << f1.get_fraction() << " / " << f2.get_fraction() << " = " << (f1 / f2).get_fraction() << std::endl;
	time_fraction = f1;
	std::cout << "++" << time_fraction.get_fraction() << " * " << f2.get_fraction() << " = " << (++f1 * f2).get_fraction() << std::endl;
	std::cout << "Fraction value 1 = " << f1.get_fraction() << std::endl;
	std::cout << time_fraction.get_fraction() << "--" << " * " << f2.get_fraction() << " = " << (f1-- * f2).get_fraction() << std::endl;
	std::cout << "Fraction value 1 = " << f1.get_fraction() << std::endl;
}


