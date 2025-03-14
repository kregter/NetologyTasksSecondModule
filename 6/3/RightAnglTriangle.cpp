#include "RightAnglTriangle.h"

RightAnglTriangle::RightAnglTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
	name = "Right-angled triangle";
}