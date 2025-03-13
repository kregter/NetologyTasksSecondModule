#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <string>

class Figure {
public:
	Figure() {
		sides = 0;
		name = "Figure";
	}

	int get_sides_number() {
		return sides;
	}

	std::string get_name() {
		return name;
	}

protected:
	int sides;
	std::string name;
};

class Triangle : public Figure {
public:
	Triangle() {
		sides = 3;
		name = "Triangle";
	}
};

class Quadangle : public Figure {
public:
	Quadangle() {
		sides = 4;
		name = "Quadangle";
	}
};


int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	
	//task 2.4.1
	Figure figure;
	Triangle triangle;
	Quadangle quadangle;
	
	std::cout << "Sides quantity:" << std::endl;
	std::cout << figure.get_name() << ": " << figure.get_sides_number() << std::endl;
	std::cout << triangle.get_name() << ": " << triangle.get_sides_number() << std::endl;
	std::cout << quadangle.get_name() << ": " << quadangle.get_sides_number() << std::endl;

}


