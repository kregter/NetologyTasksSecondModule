#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60) {
	name = "Equilateral triangle";

	if ((EquilateralTriangle::check()) == false) {
		throw CreatingError("Error creating equilateral triangle. All sides are not equal, all angles are not equal to 60");
	}
}

bool EquilateralTriangle::check() {
	if (a == b && b == c && A == 60 && B == 60 && C == 60) return true;
	else return false;
}