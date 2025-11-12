#include <iostream>

const size_t CAPACITY = 1000;

bool primeNum(int n)
{
	int count = 0;
	if (n < 2)return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}

void arrPrimeNums(int arr[], size_t size)
{

	for (int i = 0; i < size; i++)
	{
		if (primeNum(arr[i]) == true)
		{
			std::cout << arr[i] << ' ';
		}
	}
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
	arrPrimeNums(arr, N);
}