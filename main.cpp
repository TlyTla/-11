#include <iostream>
#include <Windows.h>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	float Rus, USD, euro, farit, tenge, commission, currency;
	int exchange = 1, inquiry;

	while (exchange == 1)
	{
		std::cout << "������� ����� � ������: ";
		std::cin >> Rus;

		USD = Rus / 92;
		euro = Rus / 103;
		farit = Rus / 37;
		tenge = Rus / 0.2;

		std::cout << "������� ����� ������, ������� �� �������:\n1)USD = 92.\n";
		std::cout << "2)euro = 103.\n3)farit = 37.\n4)tenge = 0.2.\n";
		std::cin >> inquiry;

		commission = Rus * 5 * 0.01;

		if (inquiry == 1)
		{
			std::cout << "��� ������� ������: " << USD - USD * 5 * 0.01 << " ��������.\n";
		}
		else if (inquiry == 2)
		{
			std::cout << "��� ������� ������: " << euro - euro * 5 * 0.01 << " ����.\n";
		}
		else if (inquiry == 3)
		{
			std::cout << "��� ������� ������: " << farit - farit * 5 * 0.01 << " �������.\n";
		}
		else if (inquiry == 4)
		{
			std::cout << "��� ������� ������: " << tenge - tenge * 5 * 0.01 << " �����.\n";
		}
		else
		{
			std::cout << "error\n";
			continue;
		}

		std::cout << "��������� ���������: " << commission << "���.\n";
		std::cout << "������ ���������� ����� ���� ��, �� �������� 1 ���� ��� �� 2.\n";
		std::cin >> exchange;

		if (exchange == 1)
		{
			exchange /= 1;
		}
		else if (exchange == 2)
		{
			exchange += 100;
		}
		else
		{
			std::cout << "error\n";
		}


	}

	return 0;
}
