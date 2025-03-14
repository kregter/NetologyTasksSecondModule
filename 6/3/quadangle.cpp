#include "quadangle.h"

Quadangle::Quadangle() {
	sides = 4;
	name = "Quadangle";
	a = 1, b = 1, c = 1, d = 1;
	A = 90, B = 90, C = 90, D = 90;
}

Quadangle::Quadangle(int a, int b, int c, int d, int A, int B, int C, int D) {
	sides = 4;
	name = "Quadangle";
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
}

void Quadangle::print() {
	std::cout << name << std::endl;
	std::cout << "Sides: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
	std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
}