#include <iostream>

const size_t CAPACITY = 1000;

int sumDigitsInNum(int n)
{
	if (n < 0)n = -n;
	int sum = 0;
	while (n != 0)
	{
		int lastDigit = n % 10;
		sum += lastDigit;
		n /= 10;
	}
	return sum;
}

int twoDigitsSum(int arr[], size_t size)
{
	int count = 0;
	size_t;
	for (int i = 0; i < size; i++)
	{
		if (sumDigitsInNum(arr[i]) >= 10 && sumDigitsInNum(arr[i]) <= 99)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	size_t N;
	std::cin >> N;
	while (N > CAPACITY)
	{
		std::cout << "N must be less than 100!Input new value for N" << std::endl;
		std::cin >> N;
	}
	int arr[CAPACITY];
	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
	}
	int result = twoDigitsSum(arr, N);
	std::cout << result;
}