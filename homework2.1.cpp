#include <iostream>
#include <iomanip>
#include <windows.h>

enum class Months {
	January = 1,
	February,
	March,
	April,
	May,
	June,
	July,
	August,
	September,
	October,
	November,
	December
};

void PrintMonth(Months Month);

struct BankAccount {
	int AccountNumber;
	std::string AccountMember;
	float AccountMoney;
};

void ChangeAccountMoney(BankAccount& FirstAccount, float NewAccountMoney)
{
	FirstAccount.AccountMoney = NewAccountMoney;
}

struct Address {
	std::string CityName;
	std::string StreetName;
	int HouseNumber;
	int ApartNumber;
	int Index;
};

void AddressPrint(Address& InputAddress)
{
	std::cout << "Город: " << InputAddress.CityName << std::endl;
	std::cout << "Улица: " << InputAddress.StreetName << std::endl;
	std::cout << "Номер дома: " << InputAddress.HouseNumber << std::endl;
	std::cout << "Номер квартиры: " << InputAddress.ApartNumber << std::endl;
	std::cout << "Индекс: " << InputAddress.Index << std::endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//task 2.1.1
	std::cout << "Введите номер месяца: ";
	int Month;
	std::cin >> Month;
	Months MonthEnum = static_cast<Months>(Month);
	while (Month != 0)
	{
		PrintMonth(MonthEnum);
		std::cout << "Введите номер месяца" << std::endl;
		std::cin >> Month;
		MonthEnum = static_cast<Months>(Month);
	}
	std::cout << "До свидания" << std::endl;

	//task 2.1.2
	std::cout << std::endl;
	BankAccount FirstAccount;
	std::cout << "Введите номер счета: ";
	std::cin >> FirstAccount.AccountNumber;
	std::cout << "Введите имя владельца: ";
	std::cin >> FirstAccount.AccountMember;
	std::cout << "Введите баланс: ";
	std::cin >> FirstAccount.AccountMoney;
	std::cout << "Введите новый баланс: ";
	float NewAccountMoney;
	std::cin >> NewAccountMoney;
	
	ChangeAccountMoney(FirstAccount, NewAccountMoney);

	std::cout << "Ваш счёт: " << FirstAccount.AccountMember << ", " << FirstAccount.AccountNumber << ", " << FirstAccount.AccountMoney << std::endl;

	//task 2.1.3
	std::cout << std::endl;
	Address FirstAddress{ "Москва", "Арбат", 12, 8, 123456 };
	Address SecondAddress{ "Ижевск", "Пушкина", 59, 143, 953769 };

	AddressPrint(FirstAddress);
	AddressPrint(SecondAddress);
}


void PrintMonth(Months Month) {

	switch (Month) {
	case Months::January:
		std::cout << "Январь" << std::endl;
		break;
	case Months::February:
		std::cout << "Февраль" << std::endl;
		break;
	case Months::March:
		std::cout << "Март" << std::endl;
		break;
	case Months::April:
		std::cout << "Апрель" << std::endl;
		break;
	case Months::May:
		std::cout << "Май" << std::endl;
		break;
	case Months::June:
		std::cout << "Июнь" << std::endl;
		break;
	case Months::July:
		std::cout << "Июль" << std::endl;
		break;
	case Months::August:
		std::cout << "Август" << std::endl;
		break;
	case Months::September:
		std::cout << "Сентябрь" << std::endl;
		break;
	case Months::October:
		std::cout << "Октябрь" << std::endl;
		break;
	case Months::November:
		std::cout << "Ноябрь" << std::endl;
		break;
	case Months::December:
		std::cout << "Декабрь" << std::endl;
		break;
	default:
		std::cout << "Неправильный номер!" << std::endl;
	}
}

