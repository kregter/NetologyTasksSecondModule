#include <iostream>
#include <iomanip>
#include <fstream>
#include <windows.h>
#include <string>

class Address {
public:
	Address() {
		city_name = "";
		street_name = "";
		house_number = 0;
		apart_number = 0;
	}

	void set_city(std::string city_name) {
		this->city_name = city_name;
	}

	void set_street(std::string street_name) {
		this->street_name = street_name;
	}

	void set_house(int house_number) {
		this->house_number = house_number;
	}

	void set_apart(int apart_number) {
		this->apart_number = apart_number;
	}

	std::string get_full_address () {
		return city_name + ", " + street_name + ", " + std::to_string(house_number) + ", " + std::to_string(apart_number);
	}

private:
	std::string city_name;
	std::string street_name;
	int house_number;
	int apart_number;
};

void sort_addresses(Address* addresses, int number_of_addr) {
	for (int i = 0; i < number_of_addr; i++)
	{
		for (int j = number_of_addr - 1; j > 0; j--)
		{
			if (addresses[j].get_full_address() > addresses[j - 1].get_full_address())
			{
				Address a = addresses[j];
				addresses[j] = addresses[j - 1];
				addresses[j - 1] = a;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "Введите номер задания (1 или 2)" << std::endl;
	int task_number = 0;
	std::cin >> task_number;
	if (task_number == 1) {
		//task 2.3.1
		int number_of_addr;
		std::ifstream fin("in.txt");
		fin >> number_of_addr;
		Address* arr = new Address[number_of_addr];

		for (int i = 0; i < number_of_addr; i++) {
			std::string city_name;
			fin >> city_name;
			arr[i].set_city(city_name);
			std::string street_name;
			fin >> street_name;
			arr[i].set_street(street_name);
			int house_number;
			fin >> house_number;
			arr[i].set_house(house_number);
			int apart_number;
			fin >> apart_number;
			arr[i].set_apart(apart_number);
		}

		std::ofstream fout("out.txt");
		fout << number_of_addr << std::endl;
		for (int i = number_of_addr - 1; i >= 0; --i) {
			fout << arr[i].get_full_address() << std::endl;
		}
	}
	//task 2.3.2
	else if (task_number == 2) {
		int number_of_addr;
		std::ifstream fin("in.txt");
		fin >> number_of_addr;
		Address* arr = new Address[number_of_addr];

		for (int i = 0; i < number_of_addr; i++) {
			std::string city_name;
			fin >> city_name;
			arr[i].set_city(city_name);
			std::string street_name;
			fin >> street_name;
			arr[i].set_street(street_name);
			int house_number;
			fin >> house_number;
			arr[i].set_house(house_number);
			int apart_number;
			fin >> apart_number;
			arr[i].set_apart(apart_number);
		}

		sort_addresses(arr, number_of_addr);

		std::ofstream fout("out.txt");
		fout << number_of_addr << std::endl;
		for (int i = number_of_addr - 1; i >= 0; --i) {
			fout << arr[i].get_full_address() << std::endl;
		}
	}
	else {
		std::cout << "Введен неправильный номер задания" << std::endl;
	}
	
}


