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
}

void Triangle::print() {
	std::cout << name << std::endl;
	std::cout << "Sides: a = " << a << " b = " << b << " c = " << c << std::endl;
	std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << std::endl;
}