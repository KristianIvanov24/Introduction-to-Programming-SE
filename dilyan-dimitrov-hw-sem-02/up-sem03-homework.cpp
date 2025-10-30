#include <iostream>

//zad1
/*
int main()
{
	int num;
	int sum=0;
	while (true)
	{
		std::cin >> num;
		sum += num;
		if(num==0)
		break;
	}
	std::cout << "the sum is:" << sum;
}
*/

//zad2
/*
int main()
{
	int a, b, c, d, e;
	std::cout << "enter five numbers" << std::endl;
	std::cin >> a >> b >> c >> d >> e;
	for (int x = -100; x <= 100; x++)
	{
		if (x * x * x * x * a + x * x * x * b + x * x * c + x * d + e >= 0)
		{
			std::cout << x << " is a solution" << std::endl;
		}
	}
*/

//zad3
/*
int main()
{
	int num;
	std::cin >> num;
	if (num < 0)
		num = -num;
	if (num == 0)
		std::cout << 0;
	int maxCount = 0;
	int maxDigit=0;
	for (int d = 0; d <= 9; d++)
	{
		int copy = num;
		int count = 0;
		while (copy > 0)
		{
			int digit = num % 10;
			if (digit == d)count++;
			copy /= 10;
		}
		if (count > maxCount)
		{
			maxCount = count;
			maxDigit = d;
		}
		else if (count == maxCount && d < maxDigit && count > 0)
		{
			maxDigit = d;
		}
	}
	std::cout << maxDigit;
}
*/

//zad4
/*
int main()
{
	int m, n;
	std::cin >> m >> n;
	for (int i = m; i <= n; i++) 
	{
		int temp = i;
		bool hasDublicate = false;
		for (int d = 0; d <= 9; d++)
		{
			int digitCount = 0;
			int t = temp;
			while (t >= 0)
			{
				int digit = t % 10;
				if (digit == d) digitCount++;
				t /= 10;
			}
			if (digitCount > 1) {
				hasDublicate = true;
				break;
			}
		}
		if (!hasDublicate) countNumbers++;
	}
*/

//zad5
/*
int main()
{
	int n;
	std::cin >> n;
	int mid = n / 2;
	for (int i = 0; i <= mid; i++)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << " ";
		}
		for (int stars = 0; stars < n - 2 * i; stars++)
		{
			std::cout << "*";
		}
		std::cout<<std::endl;
	}
	for (int i = mid-1; i >=0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < n - 2 * i; j++)
		{
			std::cout << "*";
		}
		std::cout << std::endl;
	}
}
*/

//zad6
/*
int main()
{
	int n;
	std::cin >> n;
	int initial = 1;
	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			for (int j = 0; j <n; j++)
			{
				std::cout << initial << " ";	
				initial++;
			}
		}
		else
		{
			int end = initial + n - 1;
			for (int j = end; j >=initial; j--)
			{
				std::cout << j<<" ";
			}
			initial += n;
		}
		std::cout << std::endl;
	}
}
*/

