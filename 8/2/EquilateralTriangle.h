#pragma once

#include "triangle.h"

class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle(int a);

	bool check() override;
};