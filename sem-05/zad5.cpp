#include <iostream>

const size_t CAPACITY = 1000;

bool twoZeros(int arr[], size_t size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] == 0 && arr[i + 1] == 0)
		{
			return true;
		}
	}
	return false;
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
	bool result = twoZeros(arr, N);
	if (result == true)std::cout << "yes";
	else std::cout << "false";
}