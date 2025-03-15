#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {
	name = "Isosceles triangle";

	if ((IsoscelesTriangle::check()) == false) {
		throw CreatingError("Error creating isosceles triangle. Sides a and C are not equal, angles A and C are not equal");
	}
}

bool IsoscelesTriangle::check() {
	if (a == c && A == C) return true;
	else return false;
}
