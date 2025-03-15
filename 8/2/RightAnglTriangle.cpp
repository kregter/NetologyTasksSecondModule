#include "RightAnglTriangle.h"

RightAnglTriangle::RightAnglTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
	name = "Right-angled triangle";

	if ((RightAnglTriangle::check()) == false) {
		throw CreatingError("Error creating right-angled triangle. Angle C is not equal to 90");
	}
}

bool RightAnglTriangle::check() {
	if (C == 90) return true;
	else return false;
}