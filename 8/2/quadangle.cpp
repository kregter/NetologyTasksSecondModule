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

	if ((Quadangle::check()) == false) {
		throw CreatingError("Error creating quadangle. The number of sides is not equal to 4, the sum of the angles is not equal to 360");
	}
}

void Quadangle::print() {
	std::cout << name << " (Sides " << a << " , " << b << " , " << c << " , " << d << "; Angles " << A << " , " << B << " , " << C << " , " << D << ") is created" << std::endl;
}

bool Quadangle::check() {
	if ((sides == 4) && ((A + B + C + D) == 360)) return true;
	else return false;
}