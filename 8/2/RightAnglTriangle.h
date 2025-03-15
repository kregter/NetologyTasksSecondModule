#pragma once

#include "triangle.h"

class RightAnglTriangle : public Triangle {
public:
	RightAnglTriangle(int a, int b, int c, int A, int B);

	bool check() override;
};
