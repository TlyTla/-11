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


	int beginning, end;
	int MIN = 10000000, MAX = 0;
	const int SIZE = 12;
	int money[SIZE]{};
	std::cout << "\n������� 3\n";
	std::cout << "������� ������� �� ������ �����: ";

	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> money[SIZE];
	}
	std::cout << "�������  �������� �������\n������: ";
	std::cin >> beginning;
	std::cout << "�����: ";
	std::cin >> end;

	for (int i = beginning; i <= end; i++)
	{
		if (money[i] > MAX)
		{
			MAX = money[i];
		}
	}
	std::cout << "\n" << MAX;

	for (int i = beginning; i <= end; i++)
	{
		if (money[i] < MIN)
		{
			MIN = money[i];
		}
	}
	std::cout << "\n" << MIN;

	return 0;
}
