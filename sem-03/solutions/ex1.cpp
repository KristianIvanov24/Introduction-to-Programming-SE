#include <iostream>

/*
Задача 1: Да се напише програма, която приема три числа — x, step и target. 
Програмата трябва да добавя към x стойността на step, докато x стане равно на target или докато x го надмине. 
Накрая програмата трябва да отпечата Reached, ако x е станало равно на target или Exceeded, ако x е преминало стойността на target.

Вход: 0 0.2 1, Изход: Reached

Вход: 0 0.3 1, Изход: Exceeded

Вход: 5 -0.2 4, Изход: Reached
*/

const double EPS = 1e-9; // 10 ^ -9

int main()
{
	double x, step, target;

	std::cin >> x >> step >> target;

	if (step == 0) 
	{
		if (x == target) 
		{
			std::cout << "Reached" << std::endl;
		}
		else 
		{
			std::cout << "Exceeded" << std::endl;
		}
	}
	else
	{
		if (step > 0)
		{
			while (x < target)
			{
				x += step;
			}
		}
		else
		{
			while (x > target)
			{
				x += step;
			}
		}

		if (std::abs(x - target) < EPS)
		{
			std::cout << "Reached" << std::endl;
		}
		else
		{
			std::cout << "Exceeded" << std::endl;
		}
	}

	return 0;
}
