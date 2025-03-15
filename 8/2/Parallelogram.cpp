#include "Parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadangle(a, b, a, b, A, B, A, B) {
	name = "Parallelogram";

	if ((Parallelogram::check()) == false) {
		throw CreatingError("Error creating parallelogram. sides a,c and b,d are not equal in pairs, angles A,C and B,D are not equal in pairs");
	}
}

bool Parallelogram::check() {
	if (a == c && b == d && A == C && B == D) return true;
	else return false;
}