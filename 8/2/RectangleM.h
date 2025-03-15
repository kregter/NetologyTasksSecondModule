#pragma once

#include "quadangle.h"

class RectangleM : public Quadangle {
public:
	RectangleM(int a, int b);

	bool check() override;
};