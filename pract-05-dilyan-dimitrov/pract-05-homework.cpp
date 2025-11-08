//zad 1
/*
#include <iostream>

int isDigit(char symb)
{
	if (symb >= '0' && symb <= '9')
	{
		return symb - '0';
	}
	else
	{
		return -1;
	}
}

int main()
{
	char symbol;
	std::cin >> symbol;
	std::cout << isDigit(symbol);
}
*/

//zad 2
/*
#include <iostream>

int countDigits(int number)
{
	int counter = 0;
	while (number > 0)
	{
		counter++;
		number /= 10;
	}
	return counter;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << countDigits(n);
}
*/

//zad 3
/*
#include <iostream>

bool areDigitsEqual(int n)
{
	int last = n % 10;
	n /= 10;
	while (n > 0)
	{
		int next = n % 10;
		if (next != last)
			return false;
		n /= 10;
	}
	return true;
}

int main()
{
	int n;
	std::cin >> n;
	if (areDigitsEqual(n))
	{
		std::cout << "The digit are equal";
	}
	else
	{
		std::cout << "The didits are not equal";
	}
}
*/

//zad 4
/*
#include <iostream>

bool isPerfect(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
			sum += i;
	}
	if (sum == n)
	{
		return true;
	}
	return false;
}

int main()
{
	int n;
	std::cin >> n;
	if (isPerfect(n))
	{
		std::cout << "the number is perfect";
	}
	else
	{
		std::cout << "the number is not perfect";
	}
}
*/

//zad 5
/*
#include <iostream>

int getRemainder(int first, int second)
{

	if (second <= 0||first<0)
	{
		std::cout << "enter correct numbers" << std::endl;
		return 0;
	}
	while (first >= second)
	{
		first -= second;
	}
	return first;
}

int main()
{
	int first, second;
	std::cin >> first >> second;
	std::cout << getRemainder(first, second);
}
*/

//zad 6
/*
#include <iostream>

bool containsDigit(int n, int d)
{
	if (n == 0 && d == 0)
		return true;
	while (n > 0)
	{
		if (n % 10 == d)
			return true;
		n /= 10;
	}
	return false;
}
bool  isSymmetricDigitSet(int n)
{
	for (int d = 0; d <= 9; d++)
	{
		if (containsDigit(n, d))
		{
			int symetric = 9 - d;
			if (!containsDigit(n, symetric))
			{
				return false;
			}
		}
	}
	return true;
}

int main()
{
	int n;
	std::cin >> n;
	if (isSymmetricDigitSet(n))
	{
		std::cout << "the number is symetric";
	}
	else
	{
		std::cout << "the number is not symetric";
	}
}
*/

//zad 7
/*
#include <iostream>

int digitsNumber(int n)
{
	int counter = 0;
	while (n > 0)
	{
		counter++;
		n /= 10;
	}
	return counter;
}

int sumDigits(int n)
{
	int sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
bool isArmstrong(int n)
{
	int armstrong=1;
	for (int i = 1; i <= digitsNumber(n); i++)
	{
		armstrong *= sumDigits(n);
	}
	if (armstrong != n)
	{
		return false;
	}
	return true;
}
int main()
{
	int n;
	std::cin >> n;
	if (isArmstrong(n))
	{
		std::cout << "the number is amstrong number";
	}
	else
	{
		std::cout << "the number is not amstrong number";
	}
}
*/

//zad8
/*
#include <iostream>

int factoriel(int a)
{
	int factoriel = 1;
	for (int i = 1; i <= a; i++)
	{
		factoriel *= i;
	}
	return factoriel;
}

int sumFactoriels(int n)
{
	int sum = 0;
	while (n > 0)
	{
		int lastDigit = n % 10;
		sum += factoriel(lastDigit);
		n/=10;
	}
	return sum;
}

bool isStrong(int n)
{
	if (sumFactoriels(n) != n)
		return false;
	else
		return true;
}

int main()
{
	int n;
	std::cin >> n;
	if (isStrong(n))
	{
		std::cout << "the number is strong";
	}
	else
	{
		std::cout << "the number is not strong";
	}
}
*/

//zad9
/*
#include <iostream>

int digitsNumber(int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return count;
}

int getDigitByPosition(int n, int k)
{
	for (int i = 1; i <= digitsNumber(n) - k; i++)
	{
		n /= 10;
	}
	int digit = n % 10;
	return digit;
}

int main()
{
	int n, k;
	std::cin >> n >> k;
	int result =  getDigitByPosition(n,k);
	std::cout << result;
}
*/

//zad 10
/*
#include <iostream>
int digitsNumber(int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return count;
}
	

int powerOfTen(int k)
{
	int result = 1;
	for (int i = 1; i <= k; i++)
	{
		result *= 10;
	}
	return result;
}

int transferDigits(int a, int b, int k)
{
	int power = powerOfTen(k);
	int lastPartA = a % power;
	int shift = powerOfTen(digitsNumber(b));
	return lastPartA * shift + b;
}

int main()
{
	int a, b, k;
	std::cin >> a >> b >> k;
	std::cout << transferDigits(a, b, k);
}
*/

//zad11
/*
#include <iostream>
int powerOfTen(int l)
{
	int result = 1;
	for (int i = 1; i <= l; i++)
	{
		result *= 10;
	}
	return result;
}

int digitsNumber(int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return count;
}

bool isSuffix(int n, int k)
{
	if (digitsNumber(k) > digitsNumber(n))
		return false;
	int lastDigits = n % powerOfTen(digitsNumber(k));
	if (lastDigits != k)
	{
		return false;
	}
	return true;
}

int main()
{
	int n, k;
	std::cin >> n >> k;
	if (isSuffix)
	{
		std::cout << "k is suffix of n";
	}
	else
	{
		std::cout << "k is not a suffix of n";
	}
}
*/

//zad12
/*
#include <iostream>

int powerOfTen(int l)
{
	int result = 1;
	for (int i = 1; i <= l; i++)
	{
		result *= 10;
	}
	return result;
}

int digitsNumber(int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n /= 10;
	}
	return count;
}

bool isInfix(int n, int k)
{
	int differenceInDigits = digitsNumber(n) - digitsNumber(k);
	if (digitsNumber(k) > digitsNumber(n))
	{
		return false;
	}
	for (int i = 1; i <= differenceInDigits + 1; i++)
	{
		if (n % powerOfTen(digitsNumber(k)) == k)
		{
			return true;
		}
		n /= 10;
	}
	return false;
}
int main()
{
	int n, k;
	std::cin >> n >> k;
	if (isInfix(n,k))
	{
		std::cout << "k is infix of n";
	}
	else
	{
		std::cout << "k is not infix of n";
	}
}
*/

//zad13
/*
#include <iostream>

int powerOfTen(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= 10;
	}
	return result;
}

int digitsNumber(int n)
{
	int counter = 0;
	while (n > 0)
	{
		counter++;
		n /= 10;
	}
	return counter;
}

int reversingNumber(int n)
{
	int reversed = 0;
	while (n > 0)
	{
		int lastDigit = n % 10;
	    reversed = 10 * reversed + lastDigit;
		n /= 10;
	}
	return reversed;
}
int concatenation(int n)
{
	int FirstPartOfNumber = reversingNumber(n) * powerOfTen(digitsNumber(n));
	int SecondPartOfNumber = n;
	int concatenated = FirstPartOfNumber + SecondPartOfNumber;
	return concatenated;
}

int main()
{
	int n;
	std::cin >> n;
	std::cout << concatenation(n);
}
*/

//zad14
/*
#include <iostream>

int digitsNumber(int n)
{
	int counter = 0;
	while (n > 0)
	{
		n /= 10;
		counter++;
	}
	return counter;
}

bool permutationNumbers(int a, int b)
{
	if (digitsNumber(a) != digitsNumber(b))
		return false;
	for (int i = 0; i <= 9; i++)
	{
		int countA = 0;
		int countB = 0;
		int copyA = a;
		int copyB = b;
		while (copyA > 0)
		{
			if (copyA % 10 == i)countA++;
			copyA /= 10;
		}
		while (copyB > 0)
		{
			if (copyB % 10 == i)countB++;
			copyB /= 10;
		}
		if (countA != countB)
			return false;
	}
	return true;

}

int main()
{
	int a, b;
	std::cin >> a >> b;
	if (permutationNumbers(a, b))
	{
		std::cout << "The numbers are permiutations to each other";
	}
	else
	{
		std::cout << "The numbers are not permutations to each other";
	}
}
*/