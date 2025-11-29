#include <iostream>
//Напишете фунцкия, която по подадени 3 цели числа a, b и k прехвърля последните k цифри на a в началото на b.
const int MIN_VALUE = 0;
int reverse(int number)
{
	int result = 0;
	while (number > 0)
	{
		result *= 10;
		result += number % 10;
		number /= 10;
	}
	return result;
}
int concatNumberAndLastDigits(int a, int b, int k)
{

	if (a < MIN_VALUE || b < MIN_VALUE || k < MIN_VALUE)
	{
		return -1;
	}
	int result = 0;

	while (k != 0)
	{
		result *= 10;
		if (b > 0)
		{
			result += b % 10;
			b /= 10;
		}
		else 
		{
			result += a % 10;
			a /= 10;
			k--;
		}
	}
	result = reverse(result);
	return result;
}
int main()
{
	int a, b, k;
	std::cout << "Input 3 numbers: ";
	std::cin >> a >> b >> k;
	std::cout << concatNumberAndLastDigits(a, b, k);
}
