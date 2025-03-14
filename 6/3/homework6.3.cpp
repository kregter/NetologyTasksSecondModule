#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <string>
#include "figure.h"
#include "EquilateralTriangle.h"
#include "IsoscelesTriangle.h"
#include "Parallelogram.h"
#include "quadangle.h"
#include "RectangleM.h"
#include "Rhomb.h"
#include "RightAnglTriangle.h"
#include "Square.h"
#include "triangle.h"

void print_info(Figure* figure) {
	figure->print();
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	//task 2.5.1
	Triangle triangle_f(10, 20, 30, 50, 60, 70);
	RightAnglTriangle r_a_triangle(10, 20, 30, 50, 60);
	IsoscelesTriangle i_triangle(10, 20, 50, 60);
	EquilateralTriangle e_triangle(30);

	Quadangle quadangle_f(10, 20, 30, 40, 50, 60, 70, 80);
	RectangleM rectangle(10, 20);
	Square square(20);
	Parallelogram parallelogram(20, 30, 30, 40);
	Rhomb rhomb(30, 30, 40);

	print_info(&triangle_f);
	print_info(&r_a_triangle);
	print_info(&i_triangle);
	print_info(&e_triangle);
	print_info(&quadangle_f);
	print_info(&rectangle);
	print_info(&square);
	print_info(&parallelogram);
	print_info(&rhomb);
	
}


