#include <iostream>
#include <Windows.h>



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int Six;
	int num1, num2, num3, num4, num5, num6;
	int general, general2;

	std::cout << "задание 1\nВведите шестизначное число: ";
	std::cin >> Six;

	num1 = int(Six / 100000);
	num2 = int(Six % 100000 / 10000);
	num3= int(Six % 100000 % 10000 / 1000);
	num4 = int(Six % 100000 % 10000 % 1000 / 100);
	num5 = int(Six % 100000 % 10000 % 1000 % 100 / 10);
	num6 = Six % 10;
	general = num1 + num2 + num3;
	general2 = num4 + num5 + num6;

	if (100000 <= Six  && Six <= 999999)
	{
		if (general == general2)
		{
			std::cout << "Счастливое число";
		}
		else if (general != general2)
		{
			std::cout << "Не счастливое число";
		}
	}
	else
	{
		std::cerr << "error!!!!!!!!";
	}
	//---------------------------------------------

	int number;
	int number1, number2, number3, number4;
	
	std::cout << "\nзадание 2\nВведите четырехзначное число : ";
	std::cin >> number;

	number1 = int(number / 1000);
	number2 = int(number % 1000 / 100);
	number3 = int(number % 1000 % 100 /10);
	number4 = int(number % 10);

	if ( 1000 <= number && number <= 9999)
	{
		std::cout << number2 << number1 << number4 << number3;	
	}
	else
	{
		std::cout << "error!!!!!";
	}
	//--------------------------------------------------------------

	int one, two, three, four, five, six, seven;

	std::cout << "\nзадание 3";
	std::cout << "\nвведите 7 чисел:\n1)";
	std::cin >> one;
	std::cout << "2)";
	std::cin >> two;
	std::cout << "3)";
	std::cin >> three;
	std::cout << "4)";
	std::cin >> four;
	std::cout << "5)";
	std::cin >> five;
	std::cout << "6)";
	std::cin >> six;
	std::cout << "7)";
	std::cin >> seven;

	if ( one > two)
	{
		if (one > three)
		{
			if (one > four)
			{
				if (one > five)
				{
					if (one > six)
					{
						if (one > seven)
						{
							std::cout << one;
						}
					}

				}
			}
		}
	}
	else if (two > three)
	{
		if (two > four)
		{
			if (two > five)
			{
				if (two > six)
				{
					if (two > seven)
					{
						std::cout << two;
					}

				}
			}
		}
	}
	else if  (three > four)
	{
		if (three > five)
		{
			if (three > six)
			{
				if (three > seven)
				{
					std::cout << three;
				}
			}
		}
	}
	else if (four > five)
	{
		if (four > six)
		{
			if (four > seven)
			{
				std::cout << four;
			}
		}
	}
	else if (five > six)
	{
		if (five > seven)
		{
			std::cout << five;
		}
	}
	else if (six > seven)
	{
		std::cout << six;
	}
	else
	{
		std::cout << seven;
	}


	return 0;
}
