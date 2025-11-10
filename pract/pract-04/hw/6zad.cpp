#include <iostream>

int main()
{
	int n, k, sum = 0;
	std::cin >> n >> k;

	if (k < 1 || k > 9 || n < 1)
	{
		std::cout << "Invalid input";
	}
	else
	{
		if (k == 1)
		{
			sum = n * k;
		}
		else
		{
			for (int i = 1; i <= n; i++)
			{
				int j = i;
				int tempProduct = 1;
				while (j)
				{
					tempProduct *= k;
					--j;
				}
				sum += tempProduct;
			}
		}
		std::cout << sum;
	}
	return 0;
}