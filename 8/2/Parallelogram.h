#pragma once

#include "quadangle.h"

class Parallelogram : public Quadangle {
public:
	Parallelogram(int a, int b, int A, int B);

	bool check() override;
};