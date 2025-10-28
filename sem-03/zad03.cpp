#include <iostream>
int main()
{
	//Напишете програма, която приема цяло число и връща най-често срещаната цифра. 
	//Ако има няколко най-често срещани, то да се отпечата най-малката.
	int num;
	std::cout << "input number: ";
	std::cin >> num;
	int mostFreqDigit=0;
	int numOf0 = 0, numOf1 = 0, numOf2 = 0, numOf3 = 0, numOf4 = 0, numOf5 = 0, numOf6 = 0, numOf7 = 0, numOf8 = 0, numOf9 = 0;
	while (num != 0) 
	{
		switch (num % 10) 
		{
			case 0:numOf0++; break;
			case 1:numOf1++; break;
			case 2:numOf2++; break;
			case 3:numOf3++; break;
			case 4:numOf4++; break;
			case 5:numOf5++; break;
			case 6:numOf6++; break;
			case 7:numOf7++; break;
			case 8:numOf8++; break;
			case 9:numOf9++; break;
		}
		num /= 10;
	}
	int numOfMostFreqDigit = 1;
	if (numOfMostFreqDigit <= numOf9)
	{
		mostFreqDigit = 9;
		numOfMostFreqDigit = numOf9;
	}
		
	if (numOfMostFreqDigit <= numOf8)
	{
		mostFreqDigit = 8;
		numOfMostFreqDigit = numOf8;
	}
	if (numOfMostFreqDigit <= numOf7)
	{
		mostFreqDigit = 7;
		numOfMostFreqDigit = numOf7;
	}
	if (numOfMostFreqDigit <= numOf6)
	{
		mostFreqDigit = 6;
		numOfMostFreqDigit = numOf6;
	}
	if (numOfMostFreqDigit <= numOf5)
	{
		mostFreqDigit = 5;
		numOfMostFreqDigit = numOf5;
	}
	if (numOfMostFreqDigit <= numOf4)
	{
		mostFreqDigit = 4;
		numOfMostFreqDigit = numOf4;
	}
	if (numOfMostFreqDigit <= numOf3)
	{
		mostFreqDigit = 3;
		numOfMostFreqDigit = numOf3;
	}
	if (numOfMostFreqDigit <= numOf2)
	{
		mostFreqDigit = 2;
		numOfMostFreqDigit = numOf2;
	}
	if (numOfMostFreqDigit <= numOf1)
	{
		mostFreqDigit = 1;
		numOfMostFreqDigit = numOf1;
	}
	if (numOfMostFreqDigit <= numOf0)
	{
		mostFreqDigit = 0;
		numOfMostFreqDigit = numOf0;
	}
	std::cout << mostFreqDigit;
}
