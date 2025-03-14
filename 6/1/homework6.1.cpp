#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <string>
#include "funcs.h"



int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	//task 2.5.1
	std::cout << "Enter the first number: " << std::endl;
	int first_number = 0;
	std::cin >> first_number;
	std::cout << "Enter the second number: " << std::endl;
	int second_number = 0;
	std::cin >> second_number;
	std::cout << "Select operation (1 - addition, 2 - subtraction, 3 - multiply, 4 - divide, 5 - power): " << std::endl;
	int selected_operation = 0;
	std::cin >> selected_operation;
	switch (selected_operation) {
	case 1:
		std::cout << first_number << " + " << second_number << " = " << addition(first_number, second_number) << std::endl;
		break;
	case 2:
		std::cout << first_number << " - " << second_number << " = " << subtraction(first_number, second_number) << std::endl;
		break;
	case 3: 
		std::cout << first_number << " * " << second_number << " = " << multiply(first_number, second_number) << std::endl;
		break;
	case 4:
		std::cout << first_number << " / " << second_number << " = " << division(first_number, second_number) << std::endl;
		break;
	case 5:
		std::cout << first_number << " to the power of " << second_number << " = " << to_power(first_number, second_number) << std::endl;
		break;
	default:
		std::cout << "Wrong operation number" << std::endl;
		break;
	}
	
}


