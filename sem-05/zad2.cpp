//2
#include <iostream>

const size_t CAPACITY = 1000;

int invers(int arr[], size_t size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
			if (arr[i] > arr[j])count++;
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
	int result = invers(arr, N);
	std::cout << result;
}
