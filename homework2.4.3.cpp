#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <string>

class Figure {
protected:
	int sides;
	std::string name;
	bool correct_fig = false;

public:
	Figure() {
		sides = 0;
		name = "Figure";
	}

	virtual void print() {
		std::cout << name << std::endl;
		if (check_corr()) std::cout << "Correct" << std::endl;
		else std::cout << "Wrong" << std::endl;
		std::cout << "Sides quantity: " << sides << std::endl;
	}

	virtual bool check_corr() {
		if (sides == 0) return true;
		else return false;
	}
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
		if (check_corr()) std::cout << "Correct" << std::endl;
		else std::cout << "Wrong" << std::endl;
		std::cout << "Sides quantity: " << sides << std::endl;
		std::cout << "Sides: a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << std::endl;
	}

	bool check_corr() {
		if ((sides == 3) && ((A+B+C) == 180)) return true;
		else return false;
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
		if (check_corr()) std::cout << "Correct" << std::endl;
		else std::cout << "Wrong" << std::endl;
		std::cout << "Sides quantity: " << sides << std::endl;
		std::cout << "Sides: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
	}
	
	bool check_corr() {
		if ((sides == 4) && ((A + B + C + D) == 360)) return true;
		else return false;
	}

protected:
	int a, b, c, d;
	int A, B, C, D;
};

class RightAnglTriangle : public Triangle {
public: 
	RightAnglTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
		name = "Right-angled triangle";
	}

	void print() {
		std::cout << name << std::endl;
		if (check_corr() && Triangle::check_corr()) std::cout << "Correct" << std::endl;
		else std::cout << "Wrong" << std::endl;
		std::cout << "Sides quantity: " << sides << std::endl;
		std::cout << "Sides: a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << std::endl;
	}

	bool check_corr() {
		if (C == 90) return true;
		else return false;
	}

};

class IsoscelesTriangle : public Triangle {
public: 
	IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {
		name = "Isosceles triangle";
	}

	void print() {
		std::cout << name << std::endl;
		if (check_corr() && Triangle::check_corr()) std::cout << "Correct" << std::endl;
		else std::cout << "Wrong" << std::endl;
		std::cout << "Sides quantity: " << sides << std::endl;
		std::cout << "Sides: a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << std::endl;
	}

	bool check_corr() {
		if (a == c && A == C) return true;
		else return false;
	}
};

class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60) {
		name = "Equilateral triangle";
	}

	void print() {
		std::cout << name << std::endl;
		if (check_corr() && Triangle::check_corr()) std::cout << "Correct" << std::endl;
		else std::cout << "Wrong" << std::endl;
		std::cout << "Sides quantity: " << sides << std::endl;
		std::cout << "Sides: a = " << a << " b = " << b << " c = " << c << std::endl;
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << std::endl;
	}

	bool check_corr() {
		if (a == b && b == c && A == 60 && B == 60 && C == 60) return true;
		else return false;
	}
};

class RectangleM : public Quadangle {
public:
	RectangleM(int a, int b) : Quadangle(a, b, a, b, 90, 90, 90, 90) {
		name = "Rectangle";
	}

	void print() {
		std::cout << name << std::endl;
		if (check_corr() && Quadangle::check_corr()) std::cout << "Correct" << std::endl;
		else std::cout << "Wrong" << std::endl;
		std::cout << "Sides quantity: " << sides << std::endl;
		std::cout << "Sides: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
	}

	bool check_corr() {
		if (a == c && b == d && A == 90 && B == 90 && C == 90 && D ==90) return true;
		else return false;
	}
};

class Square : public Quadangle {
public:
	Square(int a) : Quadangle(a, a, a, a, 90, 90, 90, 90) {
		name = "Square";
	}

	void print() {
		std::cout << name << std::endl;
		if (check_corr() && Quadangle::check_corr()) std::cout << "Correct" << std::endl;
		else std::cout << "Wrong" << std::endl;
		std::cout << "Sides quantity: " << sides << std::endl;
		std::cout << "Sides: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
	}

	bool check_corr() {
		if (a == c && b == d && a == b && A == 90 && B == 90 && C == 90 && D == 90) return true;
		else return false;
	}
};

class Parallelogram : public Quadangle {
public:
	Parallelogram(int a, int b, int A, int B) : Quadangle(a, b, a, b, A, B, A, B) {
		name = "Parallelogram";
	}

	void print() {
		std::cout << name << std::endl;
		if (check_corr() && Quadangle::check_corr()) std::cout << "Correct" << std::endl;
		else std::cout << "Wrong" << std::endl;
		std::cout << "Sides quantity: " << sides << std::endl;
		std::cout << "Sides: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
	}

	bool check_corr() {
		if (a == c && b == d && A == C && B == D) return true;
		else return false;
	}
};

class Rhomb : public Quadangle {
public:
	Rhomb(int a, int A, int B) : Quadangle(a, a, a, a, A, B, A, B) {
		name = "Rhomb";
	}

	void print() {
		std::cout << name << std::endl;
		if (check_corr() && Quadangle::check_corr()) std::cout << "Correct" << std::endl;
		else std::cout << "Wrong" << std::endl;
		std::cout << "Sides quantity: " << sides << std::endl;
		std::cout << "Sides: a = " << a << " b = " << b << " c = " << c << " d = " << d << std::endl;
		std::cout << "Angles: A = " << A << " B = " << B << " C = " << C << " D = " << D << std::endl;
	}

	bool check_corr() {
		if (a == c && b == d && a == b && A == C && B == D) return true;
		else return false;
	}
};

void print_info(Figure* figure) {
	figure->print();
	std::cout << std::endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
		
	//task 2.4.2
	
	Figure fig;
	Triangle triangle_f(10, 20, 30, 50, 60, 70);
	RightAnglTriangle r_a_triangle(10, 20, 30, 50, 60);
	RightAnglTriangle r_a_triangle2(10, 20, 30, 50, 40);
	IsoscelesTriangle i_triangle(10, 20, 50, 60);
	EquilateralTriangle e_triangle(30);

	Quadangle quadangle_f(10, 20, 30, 40, 50, 60, 70, 80);
	RectangleM rectangle(10, 20);
	Square square(20);
	Parallelogram parallelogram(20, 30, 30, 40);
	Rhomb rhomb(30, 30, 40);

	print_info(&fig);
	print_info(&triangle_f);
	print_info(&r_a_triangle);
	print_info(&r_a_triangle2);
	print_info(&i_triangle);
	print_info(&e_triangle);
	print_info(&quadangle_f);
	print_info(&rectangle);
	print_info(&square);
	print_info(&parallelogram);
	print_info(&rhomb);
}


