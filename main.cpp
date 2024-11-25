#include<iostream>
#include<Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int pizza[8]{ 0, 70,80,90,100,110,120, 130 }, drink[6]{ 0,60,70,80,90,100 }, snacks[5]{ 0,50,60,70,80 };
	int sum= 0, yes = 2;

	std::cout << "\t\tПиццерия пица\n наше меню:\n";
	std::cout << "7 видов пиццы     \t\t 4 вида закусок\t\t 5 видов напитков\n";
	std::cout << "1)Римская пицца    \t\t1)Картошка фри\t\t 1)Кола\n";
	std::cout << "2)Пицца пеперони   \t\t2)Нагетсы     \t\t 2)Фанта\n";
	std::cout << "3)Итальянская пицца\t\t3)марковные палолчки\t 3)Спрайт\n";
	std::cout << "4)Метровая пицца   \t\t4)Картошка по деревенски 4)Сок добрый\n";
	std::cout << "5)Имбовая пицца    \t\t		\t 5)Имба\n";
	std::cout << "6)Домашняя пицца\n";

	while (true)
	{
		std::cout << "введите номер пиццы которую вы хотите взять(0 - не хотите брать): ";
		int number_p;
		std::cin >> number_p;
		int calp = 0;
		while (true)
		{
			if (number_p == 0)
			{
				break;
			}
			std::cout << "какое количество вы хотите взять? ";
			int quantity;
			std::cin >> quantity;
			sum += pizza[number_p] * quantity;
			calp += quantity;
			std::cout << "вы хотите взять еще пиццы? Напишите 1 если да 2 если нет. ";
			std::cin >> yes;
			if (number_p > 7)
			{
				std::cout << "error";
			}
			if (yes == 1)
			{
				std::cout << "введите номер пиццы которую вы хотите взять: ";
				std::cin >> number_p;
				continue;
			}
			if (yes == 2)
			{
				break;
			}
		}
		sum -= 70 * (calp / 5);

		std::cout << "введите номер закуски которую вы хотите взять: ";
		int number_z;
		std::cin >> number_z;
		int cal_z;
		for (int i = 0; i < 100; i++)
		{
			if (number_z == 0)
			{
				break;
			}
			std::cout << "какое количество вы хотите взять? ";
			int quantity1;
			std::cin >> quantity1;
			sum += snacks[number_z] * quantity1;
			std::cout << "вы хотите взять еще закуски? Напишите 1 если да 2 если нет. ";
			std::cin >> yes;
			if (number_z > 4)
			{
				std::cout << "error";
			}
			if (yes == 1)
			{
				std::cout << "введите номер закуски которую вы хотите взять: ";
				std::cin >> number_z;
				continue;
			}
			if (yes == 2)
			{
				break;
			}

		}

		std::cout << "введите номер напитка который вы хотите взять: ";
		int number_w;
		std::cin >> number_w;
		int cal_w;
		for (int i = 0; i < 100; i++)
		{
			if (number_w == 0)
			{
				break;
			}
			std::cout << "какое количество вы хотите взять? ";
			int quantity2;
			std::cin >> quantity2;
			sum += drink[number_w] * quantity2;
			std::cout << "вы хотите еше взять напиток? Напишите 1 если да 2 если нет. ";
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
				std::cout << "введите номер напитка который вы хотите взять: ";
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
		std::cout << "ваш заказ составил: " << sum << "р";
	}
	if (sum < 1000)
	{
		std::cout << "ваш заказ составил: " << sum << "р";
	}

	return 0;
}


