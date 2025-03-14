#include "funcs.h"
#include <cmath>

int addition(const int a, const int b) {
	return a + b;
}

int subtraction(const int a, const int b) {
	return a - b;
}

int multiply(const int a, const int b) {
	return a * b;
}

double division(const int a, const int b) {
	return static_cast<double>(a) / static_cast<double>(b);
}

double to_power(const int a, const int b) {
	return pow(static_cast<double>(a), static_cast<double>(b));
}