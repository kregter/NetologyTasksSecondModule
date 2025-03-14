#pragma once

#include <iostream>

class Figure {
public:
	Figure();

	int get_sides_number();
	std::string get_name();
	virtual void print() = 0;

protected:
	int sides;
	std::string name;
};