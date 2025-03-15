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
#include "CreatingError.h"

void print_info(Figure* figure) {
	figure->print();
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	//task 2.5.1
	try {
		Triangle triangle_f(10, 20, 30, 50, 60, 70);
		print_info(&triangle_f);
	}
	catch (const CreatingError& ex) {
		std::cout << ex.what() << std::endl;
	}

	try {
		RightAnglTriangle r_a_triangle(10, 20, 30, 50, 60);
		print_info(&r_a_triangle);
	}
	catch (const CreatingError& ex) {
		std::cout << ex.what() << std::endl;
	}

	try {
		IsoscelesTriangle i_triangle(10, 20, 50, 60);
		print_info(&i_triangle);
	}
	catch (const CreatingError& ex) {
		std::cout << ex.what() << std::endl;
	}

	try {
		EquilateralTriangle e_triangle(30);
		print_info(&e_triangle);
	}
	catch (const CreatingError& ex) {
		std::cout << ex.what() << std::endl;
	}
	
	try {
		Quadangle quadangle_f(10, 20, 30, 40, 50, 60, 70, 80);
		print_info(&quadangle_f);
	}
	catch (const CreatingError& ex) {
		std::cout << ex.what() << std::endl;
	}

	try {
		RectangleM rectangle(10, 20);
		print_info(&rectangle);
	}
	catch (const CreatingError& ex) {
		std::cout << ex.what() << std::endl;
	}

	try {
		Square square(20);
		print_info(&square);
	}
	catch (const CreatingError& ex) {
		std::cout << ex.what() << std::endl;
	}
	
	try {
		Parallelogram parallelogram(20, 30, 30, 40);
		print_info(&parallelogram);
	}
	catch (const CreatingError& ex) {
		std::cout << ex.what() << std::endl;
	}
	
	try {
		Rhomb rhomb(30, 30, 40);
		print_info(&rhomb);
	}
	catch (const CreatingError& ex) {
		std::cout << ex.what() << std::endl;
	}
	
}


