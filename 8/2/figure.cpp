#include "figure.h"

Figure::Figure() {
	sides = 0;
	name = "Figure";
}

int Figure::get_sides_number() {
	return sides;
}

std::string Figure::get_name() {
	return name;
}
