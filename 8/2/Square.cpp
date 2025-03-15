#include "Square.h"

Square::Square(int a) : Quadangle(a, a, a, a, 90, 90, 90, 90) {
	name = "Square";

	if ((Square::check()) == false) {
		throw CreatingError("Error creating square. All sides are not equal, all angles are not equal to 90");
	}
}

bool Square::check() {
	if (a == c && b == d && a == b && A == 90 && B == 90 && C == 90 && D == 90) return true;
	else return false;
}