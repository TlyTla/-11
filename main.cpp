#include <iostream>
#include <Windows.h>
#include <cstdlib>


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	const int size = 12;
	int bot[size]{}, min = 1000, max = 0;


	std::cout << "������� 1\n";

	for (int i = 0; i < size; i++)
	{
		bot[i] = rand() % 1000;
		std::cout << bot[i] << " ";
	}
	std::cout << "\n";

	for (int i = 0; i < 10; i++)
	{
		if (bot[i] > max)
		{
			max = bot[i];
		}
	}
	std::cout << "������������ �����: " << max;

	for (int i = 0; i < 10; i++)
	{
		if (bot[i] < min)
		{
			min = bot[i];
		}
	}
	std::cout << "\n����������� �����: " << min;


	int  summa = 0, user;

	std::cout << "\n������� 2\n";
	std::cout << "������� ����� ��������� �� 0 �� 1000(����������� ������ �� ������� �������): ";
	std::cin >> user;

	for (int i = 0; i < size; i++)
	{
		if (user > bot[i])
		{
			summa += bot[i];
		}
	}
	std::cout << "����� ����� " << summa;



	std::cout << "\n������� 3\n";
	std::cout << "������� ������� �� ������ �����: ";
	int const SIZE = 12;
	int money[SIZE]{};
	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> money[i];
	}

	std::cout << "�������  �������� �������\n������: ";
	int beginning;
	std::cin >> beginning;
	std::cout << "�����: ";
	int end;
	std::cin >> end;
	int big=0, maloe=10000000;
	int month1, month2;

	for (int i = beginning; i < end; i++)
	{
		if (money[i] > big)
		{
			big = money[i];	
		}
		else if (money[i] < maloe)
		{
			maloe = money[i];
		}
	}
	for (int i = 0; i < SIZE; i++)
	{
		if (money[i] == big)
		{
			month1 = i + 1;
		}
		else if (money[i] == maloe)
		{
			month2 = i + 1;
		}
	}
	std::cout << month1 << " ����� ���������� ����� " << big << "�\n";
	std::cout << month2 << " ����� �� ���������� ����� " << maloe << "�";

	return 0;
}
