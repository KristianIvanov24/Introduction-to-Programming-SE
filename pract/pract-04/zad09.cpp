#include <iostream>
const int MIN_VALUE=0;
int main()
{
	//Напишете програма, която прочита n цели числа и намира най-голямото и най-малкото от тях.
	int n;
	std::cout << "Input number: ";
	std::cin >> n;
	if (n < MIN_VALUE)
	{
		std::cout << "Number must be greater than 0";
		return 0;
	}
	int temp;
	std::cout << "Enter " << n << " numbers: ";
	std::cin >> temp;
	int min = temp, max = temp;
	for (int i = 1; i < n; i++)
	{
		std::cin >> temp;
		if (min > temp)
			min = temp;
		if (max < temp)
			max = temp;
	}
	std::cout << "Largest number is: " << max<<std::endl;
	std::cout << "Smallest number is: " << min;
}
