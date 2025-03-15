#include "RectangleM.h"

RectangleM::RectangleM(int a, int b) : Quadangle(a, b, a, b, 90, 90, 90, 90) {
	name = "Rectangle";

	if ((RectangleM::check()) == false) {
		throw CreatingError("Error creating rectangle. Sides a,c and b,d are not equal in pairs, all angles are not equal to 90");
	}
}

bool RectangleM::check() {
	if (a == c && b == d && A == 90 && B == 90 && C == 90 && D == 90) return true;
	else return false;
}