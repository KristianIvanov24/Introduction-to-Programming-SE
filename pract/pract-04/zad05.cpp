#include <iostream>
const int MIN_VALUE=1;
int main()
{
	//Напишете програма, която иска от потребителя да въведе число n. 
	//На следващите n-1 реда, ще бъдат въведени всички числа от 1 до n без едно. Програмата да изведе кое е пропуснатото число.
	int n;
	std::cout << "Input number: ";
	std::cin >> n;
	if (n < MIN_VALUE)
	{
		std::cout << "Number must be higher than 0";
		return 0;
	}
	std::cout << "Input " << n - 1 << " numbers: " << std::endl;
	int temp, result = n * (n + 1) / 2;

	for (int i = 1; i < n; i++)
	{
		std::cin >> temp;
		result -= temp;
	}
	std::cout << result;
}
