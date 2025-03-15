#include "triangle.h"

Triangle::Triangle() {
	sides = 3;
	name = "Triangle";
	a = 1, b = 1, c = 1;
	A = 60, B = 60, C = 60;
}

Triangle::Triangle(int a, int b, int c, int A, int B, int C) {
	sides = 3;
	name = "Triangle";
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;

	if ((Triangle::check()) == false) {
		throw CreatingError("Error creating triangle. The number of sides is not equal to 3 or the sum of the angles is not equal to 180");
	}
}

void Triangle::print() {
	std::cout << name << " (Sides " << a << " , " << b << " , " << c << "; Angles " << A << " , " << B << " , " << C << ") is created" << std::endl;
}

bool Triangle::check() {
	if ((sides == 3) && ((A + B + C) == 180)) return true;
	else return false;
}