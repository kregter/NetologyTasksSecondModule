#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <string>
#include "counter.h"



int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	//task 2.5.1
	
	std::cout << "Do you want to specify the initial value of the counter? Enter yes or no: ";
	std::string WannaInitCount;
	std::cin >> WannaInitCount;
	int init_count = 1;
	if (WannaInitCount == "yes") {
		std::cout << "Enter the initial value of the counter: ";
		std::cin >> init_count;

	}
	Counter Counter1(init_count);

	std::cout << "Enter the command ('+', '-', '=' or 'x'): ";
	char Command;
	std::cin >> Command;
	while (Command != 'x') {
		switch (Command) {
		case '+':
			Counter1.incr_count();
			break;
		case '-':
			Counter1.decr_count();
			break;
		case '=':
			Counter1.print_count();
			break;
		default:
			std::cout << "Wrong command!" << std::endl;
			break;
		}
		std::cout << "Enter the command ('+', '-', '=' or 'x'): ";
		std::cin >> Command;
	}
	std::cout << "Goodbye!" << std::endl;
	
}


