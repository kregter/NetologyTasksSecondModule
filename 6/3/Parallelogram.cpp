#include "Parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadangle(a, b, a, b, A, B, A, B) {
	name = "Parallelogram";
}