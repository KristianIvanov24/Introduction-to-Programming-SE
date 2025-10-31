#include <iostream>

/*
Задача 2: Да се напише функция, която приема две неотрицателни цели числа n и k и връща цялата част (закръглено надолу) на log_k(n)

Вход: 90 3, Изход: 4
*/

int log(int n, int k)
{
	int poweredK = 1;
	int count = 0;

	while (poweredK <= n)
	{
		poweredK *= k;
		count++;
	}

	return count - 1;
}

int main()
{
	std::cout << log(90, 3);
	return 0;
}
