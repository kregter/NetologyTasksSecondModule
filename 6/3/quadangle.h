#pragma once

#include "figure.h"

class Quadangle : public Figure {
public:
	Quadangle();

	Quadangle(int a, int b, int c, int d, int A, int B, int C, int D);

	void print() override;

protected:
	int a, b, c, d;
	int A, B, C, D;
};