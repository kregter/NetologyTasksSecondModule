#include <iostream>
#include <iomanip>
#include <windows.h>

class Calculator {
private:
	double num1;
	double num2;
public:
	bool set_num1(double num1) {
		if (num1 != 0) {
			this->num1 = num1;
			return true;
		}
		else {
			return false;
		}
	}

	bool set_num2(double num2) {
		if (num2 != 0) {
			this->num2 = num2;
			return true;
		}
		else {
			return false;
		}
	}

	double add() {
		return num1 + num2;
	}

	double multiply() {
		return num1 * num2;
	}

	double subtract_1_2() {
		return num2 - num1;
	}

	double subtract_2_1() {
		return num1 - num2;
	}

	double divide_1_2() {
		return num1 / num2;
	}

	double divide_2_1() {
		return num2 / num1;
	}
};

class Counter {
private:
	int count;
public:
	Counter(int init_count = 1) {
		this->count = init_count;
	}

	void incr_count() {
		this->count++;
	}

	void decr_count() {
		this->count--;
	}

	void print_count() {
		std::cout << this->count << std::endl;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите номер задания (1 или 2): ";
	int TaskNumber;
	std::cin >> TaskNumber;

	if (TaskNumber == 1) {
		//task 2.1.1
		while (true) {
			Calculator Calc;
			std::cout << "Введите num1: ";
			double num1;
			std::cin >> num1;
			while (!Calc.set_num1(num1)) {
				std::cout << "Неверный ввод!" << std::endl;
				std::cout << "Введите num1: ";
				std::cin >> num1;
			}

			std::cout << "Введите num2: ";
			double num2;
			std::cin >> num2;
			while (!Calc.set_num2(num2)) {
				std::cout << "Неверный ввод!" << std::endl;
				std::cout << "Введите num2: ";
				std::cin >> num2;
			}

			std::cout << "num1 + num2 = " << Calc.add() << std::endl;
			std::cout << "num1 - num2 = " << Calc.subtract_2_1() << std::endl;
			std::cout << "num2 - num1 = " << Calc.subtract_1_2() << std::endl;
			std::cout << "num1 * num2 = " << Calc.multiply() << std::endl;
			std::cout << "num1 / num2 = " << Calc.divide_1_2() << std::endl;
			std::cout << "num2 / num1 = " << Calc.divide_2_1() << std::endl;
		}
	}
	else if (TaskNumber == 2) {
		//task 2.1.2
		std::cout << "Вы хотите указать начальное значение счетчика? Введите да или нет: ";
		std::string WannaInitCount;
		std::cin >> WannaInitCount;
		int init_count = 1;
		if (WannaInitCount == "да") {
			std::cout << "Введите начальное значение счетчика: ";
			std::cin >> init_count;
			
		}
		Counter Counter1(init_count);

		std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
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
				std::cout << "Неправильная команда!" << std::endl;
				break;
			}
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			std::cin >> Command;
		}
		std::cout << "До свидания!" << std::endl;
	}
	else {
		std::cout << "Неправильный номер задания!" << std::endl;
	}
	
	
}


