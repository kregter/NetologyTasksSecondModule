#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <string>

class ForbiddenLength : public std::exception {
public:
	const char* what() const override { return "You have entered a word of a forbidden length! Goodbye"; }
};

int function(std::string str, int forbidden_length) {
	if ((str.length()) != forbidden_length) {
		return str.length();
	}
	else {
		throw ForbiddenLength();
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	std::cout << "Enter the forbidden length: " << std::endl;
	int forbidden_length = 0;
	std::cin >> forbidden_length;
	std::string word_from_console;

	while (true) {
		std::cout << "Enter the word: " << std::endl;
		std::cin >> word_from_console;
		try
		{
			std::cout << "The length of the word " << word_from_console << " is " << function(word_from_console, forbidden_length) << std::endl;
		}
		catch (const ForbiddenLength& exc)
		{
			std::cout << exc.what() << std::endl;
			break;
		}
	}
	
}


