#include <iostream>
int main()
{
	//Да се напише програма, която въвежда цяло число n и отпечатва броя на делителите му.
	int n;
	std::cout << "Input number: ";
	std::cin >> n;
	int counter = 0;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			counter++;
	std::cout << counter;
}
