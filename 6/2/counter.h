#pragma once

class Counter {
private:
	int count;
public:
	Counter(int init_count);

	void incr_count();
	void decr_count();
	void print_count();
};