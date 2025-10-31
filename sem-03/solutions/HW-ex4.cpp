#include <iostream>

/*
Задача 4: Напишете програма, която приема две цели числа m и n (m < n). Програмата да извежда броя на числата в интервала [m,n], 
които се сътоят от различни цифри.

Вход: 97 104, Изход: 5 // 97 98 102 103 104
*/

int main()
{
	int m, n;
	std::cin >> m >> n;

	int count = 0;
	for (int i = m; i <= n; i++)
	{
		bool isDifferentDigits = true;
		int copy = i;

		while (copy > 9)
		{
			int digit = copy % 10;
			copy /= 10;

			while (copy != 0)
			{
				int nextDigit = copy % 10;
				if (nextDigit == digit)
				{
					isDifferentDigits = false;
					break;
				}

				copy /= 10;
			}

			if (!isDifferentDigits)
				break;
		}

		if (isDifferentDigits)
			count++;
	}

	std::cout << count << std::endl;

	return 0;
}
