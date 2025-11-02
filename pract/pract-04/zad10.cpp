#include <iostream>
const int MIN_VALUE = 1;
int main()
{
	//Напишете програма, която въвежда n цели числа и 
	//проверява дали сборът на числата на четни позиции е равен на сбора на числата на нечетни позиции. 
	//Приемаме, че при въвеждането, първото число е на позиция 0 (четна)
	int n;
	std::cout << "Input number: ";
	std::cin >> n;
	if (n < MIN_VALUE)
	{
		std::cout << "Number must be greater than 0";
		return 0;
	}
	int sumOfEvenIndexes = 0, sumOfOddIndexes=0,temp;
	std::cout << "Enter " << n << " numbers: ";
	for (int i = 0; i < n; i++)
	{
		std::cin >> temp;
		if (i % 2 == 0)
			sumOfEvenIndexes += temp;
		else
			sumOfOddIndexes += temp;
	}
	std::cout << "Sum of even: " << sumOfEvenIndexes<<std::endl;
	std::cout << "Sum of odd: " << sumOfOddIndexes << std::endl;
	std::cout << sumOfEvenIndexes;
	if (sumOfOddIndexes == sumOfEvenIndexes)
		std::cout << " == ";
	else
		std::cout << " != ";
	std::cout << sumOfOddIndexes;
}
