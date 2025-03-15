#pragma once

#include "quadangle.h"

class Square : public Quadangle {
public:
	Square(int a);

	bool check() override;
};