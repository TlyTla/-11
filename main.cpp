#include<iostream>
#include<Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int pizza[8]{ 0, 70,80,90,100,110,120, 130 }, drink[6]{ 0,60,70,80,90,100 }, snacks[5]{ 0,50,60,70,80 };
	int sum= 0, yes = 2;

	std::cout << "\t\t�������� ����\n ���� ����:\n";
	std::cout << "7 ����� �����     \t\t 4 ���� �������\t\t 5 ����� ��������\n";
	std::cout << "1)������� �����    \t\t1)�������� ���\t\t 1)����\n";
	std::cout << "2)����� ��������   \t\t2)�������     \t\t 2)�����\n";
	std::cout << "3)����������� �����\t\t3)��������� ��������\t 3)������\n";
	std::cout << "4)�������� �����   \t\t4)�������� �� ���������� 4)��� ������\n";
	std::cout << "5)������� �����    \t\t		\t 5)����\n";
	std::cout << "6)�������� �����\n";

	while (true)
	{
		std::cout << "������� ����� ����� ������� �� ������ �����(0 - �� ������ �����): ";
		int number_p;
		std::cin >> number_p;
		int calp = 0;
		while (true)
		{
			if (number_p == 0)
			{
				break;
			}
			std::cout << "����� ���������� �� ������ �����? ";
			int quantity;
			std::cin >> quantity;
			sum += pizza[number_p] * quantity;
			calp += quantity;
			std::cout << "�� ������ ����� ��� �����? �������� 1 ���� �� 2 ���� ���. ";
			std::cin >> yes;
			if (number_p > 7)
			{
				std::cout << "error";
			}
			if (yes == 1)
			{
				std::cout << "������� ����� ����� ������� �� ������ �����: ";
				std::cin >> number_p;
				continue;
			}
			if (yes == 2)
			{
				break;
			}
		}
		sum -= 70 * (calp / 5);

		std::cout << "������� ����� ������� ������� �� ������ �����: ";
		int number_z;
		std::cin >> number_z;
		int cal_z;
		for (int i = 0; i < 100; i++)
		{
			if (number_z == 0)
			{
				break;
			}
			std::cout << "����� ���������� �� ������ �����? ";
			int quantity1;
			std::cin >> quantity1;
			sum += snacks[number_z] * quantity1;
			std::cout << "�� ������ ����� ��� �������? �������� 1 ���� �� 2 ���� ���. ";
			std::cin >> yes;
			if (number_z > 4)
			{
				std::cout << "error";
			}
			if (yes == 1)
			{
				std::cout << "������� ����� ������� ������� �� ������ �����: ";
				std::cin >> number_z;
				continue;
			}
			if (yes == 2)
			{
				break;
			}

		}

		std::cout << "������� ����� ������� ������� �� ������ �����: ";
		int number_w;
		std::cin >> number_w;
		int cal_w;
		for (int i = 0; i < 100; i++)
		{
			if (number_w == 0)
			{
				break;
			}
			std::cout << "����� ���������� �� ������ �����? ";
			int quantity2;
			std::cin >> quantity2;
			sum += drink[number_w] * quantity2;
			std::cout << "�� ������ ��� ����� �������? �������� 1 ���� �� 2 ���� ���. ";
			std::cin >> yes;
			if (number_w > 5)
			{
				std::cout << "error";
			}
			if (number_w == 5)
			{
				sum -= 100 * (quantity2 / 4);
			}
			if (yes == 1)
			{
				std::cout << "������� ����� ������� ������� �� ������ �����: ";
				std::cin >> number_w;
				continue;
			}
			if (yes == 2)
			{
				break;
			}
			
		}
		break;

	}
	if (sum > 999)
	{
		sum = sum - (sum / 100 * 15);
		std::cout << "��� ����� ��������: " << sum << "�";
	}
	if (sum < 1000)
	{
		std::cout << "��� ����� ��������: " << sum << "�";
	}

	return 0;
}


