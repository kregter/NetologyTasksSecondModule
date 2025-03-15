#pragma once

#include "figure.h"

class Triangle : public Figure {
public:
	Triangle();
	Triangle(int a, int b, int c, int A, int B, int C);

	void print() override;
	bool check() override;

protected:
	int a, b, c;
	int A, B, C;
};