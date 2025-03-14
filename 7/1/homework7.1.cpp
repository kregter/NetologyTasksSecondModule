#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <string>

#define MODE 0

#if MODE == 1
int add(const int a, const int b) {
	return (a + b);
}
#endif

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	//task 2.5.1
#ifndef MODE 
#error You should define MODE
#endif
	
#if MODE == 0
	std::cout << "I work in training mode" << std::endl;
#elif MODE == 1
	std::cout << "Working in combat mode" << std::endl;
	std::cout << "Enter the first number: " << std::endl;
	int first_number = 0;
	std::cin >> first_number;
	std::cout << "Enter the second number: " << std::endl;
	int second_number = 0;
	std::cin >> second_number;
	std::cout << "The addition result is: " << add(first_number, second_number) << std::endl;
#else
	std::cout << "Unknown mode. Completion of work" << std::endl;
#endif

}


