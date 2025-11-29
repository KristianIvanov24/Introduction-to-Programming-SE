#include <iostream>
//Напишете функция, която приема естествено число и връща ново число, което има същите цифри, но в сортиран вид.
int sortDigits(int num)
{
	if (num < 0) return num;
	int result = 0;
	for (int i = 1; i <= 9; i++)
	{
		int temp = num;
		while (temp > 0)
		{
			if (temp % 10 == i)
			{
				result *= 10;
				result += i;
			}
			temp /= 10;
		}
		
	}
return result;
}
int main()
{
	int num;
	std::cout << "Input number: ";
	std::cin >> num;
	std::cout << sortDigits(num);
}
