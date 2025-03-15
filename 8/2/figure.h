#pragma once

#include <iostream>
#include "CreatingError.h"

class Figure {
public:
	Figure();

	int get_sides_number();
	std::string get_name();
	virtual void print() = 0;
	virtual bool check() = 0;

protected:
	int sides;
	std::string name;
};