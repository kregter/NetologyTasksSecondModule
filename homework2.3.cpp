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

	Address(std::string city_name, std::string street_name, int house_number, int apart_number) {
		this->city_name = city_name;
		this->street_name = street_name;
		this->house_number = house_number;
		this->apart_number = apart_number;
	}

	std::string get_full_address() {
		return city_name + ", " + street_name + ", " + std::to_string(house_number) + ", " + std::to_string(apart_number);
	}

private:
	std::string city_name;
	std::string street_name;
	int house_number;
	int apart_number;
};

void sort_addresses(Address** addresses, int number_of_addr) {
	for (int i = 0; i < number_of_addr; i++)
	{
		for (int j = number_of_addr - 1; j > 0; j--)
		{
			if (addresses[j][0].get_full_address() > addresses[j - 1][0].get_full_address())
			{
				Address a = addresses[j][0];
				addresses[j][0] = addresses[j - 1][0];
				addresses[j - 1][0] = a;
			}
		}
	}
}

void delete_two_dim_array(Address** arr, int number_of_addr)
{
	for (int i = 0; i < number_of_addr; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::cout << "¬ведите номер задани€ (1 или 2)" << std::endl;
	int task_number = 0;
	std::cin >> task_number;
	if (task_number == 1) {
		//task 2.3.1
		int number_of_addr;
		std::ifstream fin("in.txt");
		fin >> number_of_addr;
		Address** arr = new Address*[number_of_addr];
		for (int i = 0; i < number_of_addr; i++)
		{
			arr[i] = new Address[1];
		}

		for (int i = 0; i < number_of_addr; i++) {
			std::string city_name;
			fin >> city_name;
			std::string street_name;
			fin >> street_name;
			int house_number;
			fin >> house_number;
			int apart_number;
			fin >> apart_number;
			Address new_addr(city_name, street_name, house_number, apart_number);
			arr[i][0] = new_addr;
		}

		std::ofstream fout("out.txt");
		fout << number_of_addr << std::endl;
		for (int i = number_of_addr - 1; i >= 0; --i) {
			fout << arr[i][0].get_full_address() << std::endl;
		}

		delete_two_dim_array(arr, number_of_addr);
	}

	//task 2.3.2
	else if (task_number == 2) {
		int number_of_addr;
		std::ifstream fin("in.txt");
		fin >> number_of_addr;
		Address** arr = new Address * [number_of_addr];
		for (int i = 0; i < number_of_addr; i++)
		{
			arr[i] = new Address[1];
		}

		for (int i = 0; i < number_of_addr; i++) {
			std::string city_name;
			fin >> city_name;
			std::string street_name;
			fin >> street_name;
			int house_number;
			fin >> house_number;
			int apart_number;
			fin >> apart_number;
			Address new_addr(city_name, street_name, house_number, apart_number);
			arr[i][0] = new_addr;
		}

		sort_addresses(arr, number_of_addr);

		std::ofstream fout("out.txt");
		fout << number_of_addr << std::endl;
		for (int i = number_of_addr - 1; i >= 0; --i) {
			fout << arr[i][0].get_full_address() << std::endl;
		}

		delete_two_dim_array(arr, number_of_addr);
	}
	else {
		std::cout << "¬веден неправильный номер задани€" << std::endl;
	}

}