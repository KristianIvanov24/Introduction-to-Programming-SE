#include <iostream>
const int MIN_VALUE = 1;
const int MAX_VALUE = 9;
int main()
{
	//Да се напише програма, която прочита цяло число n и цяло число k (1 <= k <= 9)
	//и пресмята сбора k + kk + kkk + ... + kkk...kk, където в последното събираемо k се среща n на брой пъти.
	int k, n;
	std::cout << "Input values for n and k: ";
	std::cin >> n >> k;
	if (n < MIN_VALUE)
	{
		std::cout << "Invalid number given! N must be higher than 0";
		return 0;
	}
	if (k < MIN_VALUE || k > MAX_VALUE)
	{
		std::cout << "Invalid number given! K must be in range [1, 9]";
		return 0;
	}
	int sum = k;
	for (int i = 1; i < n; i++)
	{
		k = k * 10 + k % 10;
		sum += k;
	}
	std::cout << sum;
}
