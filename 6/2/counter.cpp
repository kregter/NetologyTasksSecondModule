#include "counter.h"
#include <iostream>

Counter::Counter(int init_count) {
	this->count = init_count;
}

void Counter::incr_count() {
	this->count++;
}

void Counter::decr_count() {
	this->count--;
}

void Counter::print_count() {
	std::cout << this->count << std::endl;
}
