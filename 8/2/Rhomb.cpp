#include "Rhomb.h"

Rhomb::Rhomb(int a, int A, int B) : Quadangle(a, a, a, a, A, B, A, B) {
	name = "Rhomb";

	if ((Rhomb::check()) == false) {
		throw CreatingError("Error creating rhomb. All sides are not equal, angles A,C and B,D are not equal in pairs.");
	}
}

bool Rhomb::check() {
	if (a == c && b == d && a == b && A == C && B == D) return true;
	else return false;
}