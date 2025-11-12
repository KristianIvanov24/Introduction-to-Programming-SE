//1
#include <iostream>

const size_t SIZE = 5;

bool palindrome(int arr[], size_t size)
{
	int half = size / 2 ;
		for (int i = 0; i < half; i++)
		{
			if(arr[i]!=arr[size-1-i])
				{
				return false;
				}
		}
		return true;
}

int main()
{
	int arr[SIZE] = { 1,2,5,2,1};
	if (palindrome(arr, SIZE) == true)
	{
		std::cout << "true";
	}
	else std::cout << "false";
}
