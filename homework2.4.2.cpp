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

	virtual void print() = 0;

protected:
	int sides;
	std::string name;
};

class Triangle : public Figure {
public:
	Triangle() {
		sides = 3;
		name = "Triangle";
		a = 1, b = 1, c = 1;
		A = 60, B = 60, C = 60;
	}
	
	Triangle(int a, int b, int c, int A, int B, int C) {
		sides = 3;
		name = "Triangle";
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = C;
	}

	void print() {
		std::cout << name << std::endl;
		std::cout << "Sides: a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << std::endl;
	}

protected:
	int a, b, c;
	int A, B, C;
};

class Quadangle : public Figure {
public:
	Quadangle() {
		sides = 4;
		name = "Quadangle";
		a = 1, b = 1, c = 1, d = 1;
		A = 90, B = 90, C = 90, D = 90;
	}

	Quadangle(int a, int b, int c, int d, int A, int B, int C, int D) {
		sides = 4;
		name = "Quadangle";
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->A = A;
		this->B = B;
		this->C = C;
		this->D = D;
	}

	void print() {
		std::cout << name << std::endl;
		std::cout << "Sides: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
	}

protected:
	int a, b, c, d;
	int A, B, C, D;
};

class RightAnglTriangle : public Triangle {
public: 
	RightAnglTriangle(int a, int b, int c, int A, int B) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->A = A;
		this->B = B;
		this->C = 90;
		name = "Right-angled triangle";
	}
};

class IsoscelesTriangle : public Triangle {
public: 
	IsoscelesTriangle(int a, int b, int A, int B) {
		this->a = a;
		this->b = b;
		this->c = a;
		this->A = A;
		this->B = B;
		this->C = A;
		name = "Isosceles triangle";
	}
};

class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle(int a) {
		this->a = a;
		this->b = a;
		this->c = a;
		this->A = 60;
		this->B = 60;
		this->C = 60;
		name = "Equilateral triangle";
	}
};

class RectangleM : public Quadangle {
public:
	RectangleM(int a, int b) {
		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
		this->A = 90;
		this->B = 90;
		this->C = 90;
		this->D = 90;
		name = "Rectangle";
	}
};

class Square : public Quadangle {
public:
	Square(int a) {
		this->a = a;
		this->b = a;
		this->c = a;
		this->d = a;
		this->A = 90;
		this->B = 90;
		this->C = 90;
		this->D = 90;
		name = "Square";
	}
};

class Parallelogram : public Quadangle {
public:
	Parallelogram(int a, int b, int A, int B) {
		this->a = a;
		this->b = b;
		this->c = a;
		this->d = b;
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;
		name = "Parallelogram";
	}
};

class Rhomb : public Quadangle {
public:
	Rhomb(int a, int A, int B) {
		this->a = a;
		this->b = a;
		this->c = a;
		this->d = a;
		this->A = A;
		this->B = B;
		this->C = A;
		this->D = B;
		name = "Rhomb";
	}
};

void print_info(Figure* figure) {
	figure->print();
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	//task 2.4.2
	
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


