#include <iostream>
int main()
{
	//Да се напише програма, която приема цяло положително число n и отпечатва числата от 1 до n*n в спираловиден вид.
	int n;
	std::cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			for (int j = n * i; j > n * (i - 1); j--)
				std::cout << j << ' ';
		}
		else for (int j = n * (i - 1) + 1; j <= n * i; j++)
			std::cout << j << ' ';
		std::cout << std::endl;
	}
}
/*
1 2 3 4 5
10 9 8 7 6
11 12 13 14 15
20 19 18 17 16
21 22 23 24 25
*/
