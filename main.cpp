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


	std::cout << "задание 1\n";

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
	std::cout << "максимальное число: " << max;

	for (int i = 0; i < 10; i++)
	{
		if (bot[i] < min)
		{
			min = bot[i];
		}
	}
	std::cout << "\nминимальное число: " << min;


	int  summa = 0, user;

	std::cout << "\nзадание 2\n";
	std::cout << "введите число диапазона от 0 до 1000(использетс€ массив из первого задани€): ";
	std::cin >> user;

	for (int i = 0; i < size; i++)
	{
		if (user > bot[i])
		{
			summa += bot[i];
		}
	}
	std::cout << "сумма равна " << summa;



	std::cout << "\nзадание 3\n";
	std::cout << "введите прибыль за каждый мес€ц: ";
	int const SIZE = 12;
	int money[SIZE]{};
	for (int i = 0; i < SIZE; i++)
	{
		std::cin >> money[i];
	}

	std::cout << "введите  диапазон мес€цев\nначало: ";
	int beginning;
	std::cin >> beginning;
	std::cout << "конец: ";
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
	std::cout << month1 << " самый прибыльный мес€ц " << big << "р\n";
	std::cout << month2 << " самый не прибыльный мес€ц " << maloe << "р";

	return 0;
}
