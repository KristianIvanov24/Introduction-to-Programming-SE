/*//1
#include <iostream>
int digit(char sym)
{
	if (sym <= '9' && sym >= '0')
	{
		return sym - '0';
	}
	return -1;
}
int main()
{
	char sym;
	std::cin >> sym;
	int result = digit(sym);
	std::cout << result;
}
//2
#include <iostream>
int AmountOfDigits(int number)
{
	int count = 1;
	number /= 10;
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	return count;
}
int main()
{
	int number;
	std::cin >> number;
	int result = AmountOfDigits(number);
	std::cout << result;
}
//3
#include <iostream>
bool SameDigits(int number)
{
	int lastdigit = number % 10;
	while (number != 0)
	{
		if (number % 10 != lastdigit)
		{
			return false;
		}
		number /= 10;
	}
	return true;
}
int main()
{
	int number;
	std::cin >> number;
	int result = SameDigits(number);
	std::cout << result;
}
//4
#include<iostream>
bool isPerfect(int n)
{
	int sum = 0;
	for (int i = 1; i <= n / 2; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	if (sum == n)
	{
		return true;
	}
	return false;
}
int main()
{
	int number;
	std::cin >> number;
	int result = isPerfect(number);
	std::cout << result;
}
//5
#include <iostream>
int getRemainder(int first, int second)
{
	int result = first / second;
	return  first - result * second;
}
int main()
{
	int first, second;
	std::cin >> first >> second;
	int result = getRemainder(first,second);
	std::cout << result;
}
//6
#include <iostream>
int AmountOfDigits(int number)
{
	int count = 1;
	number /= 10;
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	return count;
}
bool isSymmetricDigitSet(int n)
{
	int copy = n;
	bool symetric = true;
	for (int i = 1; i <= AmountOfDigits(n); i++)
	{
		int last = copy % 10;
		copy /= 10;
		int target = 9 - last;
		int copy2 = n;
		bool isSymetric = false;
		while (copy2 != 0)
		{
			if (copy2 % 10 == target)
			{
				isSymetric = true;
				break;
			}
			copy2 /= 10;
		}
		if (!isSymetric)
		{
			symetric = false;
		}
	}
	return symetric;

}
int main()
{
	int n;
	std::cin >> n;
	int result = isSymmetricDigitSet(n);
	std::cout << result;
}
 //7
#include <iostream>
bool isArmstrong(int n)
{
	int sum = n % 10;
	int count = 1;
	int copy = n;
	copy /= 10;
	while ( copy!= 0)
	{
		sum += copy % 10;
		count++;
		copy /= 10;
	}
	int result = 1;
	for (int i = 1; i <= count; i++)
	{
		result *= sum;
	}
	return result==n;
}
int main()
{
	int n;
	std::cin >> n;
	int result = isArmstrong(n);
	std::cout << result;
}
//8
#include <iostream>
int Factoriel(int n)
{
	int factoriel = 1;
	for (int i = 1; i <= n; i++)
	{
		factoriel *= i;
	}
	return factoriel;
}
bool isStrong(int n)
{
	int copy = n;
	int sum = 0;
	while (copy != 0)
	{
		int digit = copy % 10;
		sum += Factoriel(digit);
		copy /= 10;
	}
	return sum==n;
}
int main()
{
	int n;
	std::cin >> n;
	int result = isStrong(n);
	std::cout << result;
}
//9
#include <iostream>
int getDigitByPosition(int n, int k)
{
	int copy = n;
	int amount = 1;
	copy /= 10;
	while (copy != 0)
	{
		amount++;
		copy /= 10;
	}
	while (k > amount ||k<0)
	{
		std::cout << "k must be more than 0 and less than " << amount << std::endl << "new value for k:" << std::endl;
		std :: cin >> k;
	}
	for (int i = 0; i < amount - k; i++)
	{
		n /= 10;
	}
	int digit = n % 10;
	return digit;
}
int main()
{
	int n,k;
	std::cin >> n>>k;
	int result = getDigitByPosition(n,k);
	std::cout << result;
}
/10
#include <iostream>
int AmountOfDigits(int number)
{
	int count = 1;
	number /= 10;
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	return count;
}
int Reversenumber(int n)
{
	int sum = 0;
	while (n != 0)
	{
		int digit = n % 10;
		sum = sum * 10 + digit;
		n /= 10;

	}
	return sum;
}
int returnDigits(int a, int b, int k)
{
	int copyA = a;
	while (k > AmountOfDigits(a) || k < 0)
	{
		std::cout << "k must be more than 0 and less than " << AmountOfDigits(a) << std::endl << "new value for k:" << std::endl;
		std::cin >> k;
	}
	int kDigitsReverse = 0;
	for (int i = 1; i <= k; i++)
	{
		int digit = copyA % 10;
		kDigitsReverse = kDigitsReverse * 10 + digit;
		copyA /= 10;
	}
	int kDigits = Reversenumber(kDigitsReverse);
	int multi = 1;
	for (int i = 1; i <= AmountOfDigits(b); i++)
	{
		multi *= 10;
	}
	return kDigits * multi + b;
}
int main()
{
	int a,b,k;
	std::cin >> a >> b >> k;
	int result = returnDigits(a, b, k);
	std::cout << result;
}
//11
#include <iostream>
int Reversenumber(int n)
{
	int sum = 0;
	while (n != 0)
	{
		int digit = n % 10;
		sum = sum * 10 + digit;
		n /= 10;

	}
	return sum;
}
bool sufix(int n, int k)
{
	int reverseN = Reversenumber(n);
	while (reverseN > 0)
	{
		if (reverseN == Reversenumber(k))return true;
		reverseN /= 10;
	}
	return false;
}
int main()
{
	int n, k;
	std::cin >> n >> k;
	int result = sufix(n, k);
	std::cout << result;
}
//12
#include <iostream>
bool prefix(int n, int k)
{
	while (n != 0)
	{
		if (k == n)return true;
		n /= 10;
	}
	return false;
}
int Reversenumber(int n)
{
	int sum = 0;
	while (n != 0)
	{
		int digit = n % 10;
		sum = sum * 10 + digit;
		n /= 10;

	}
	return sum;
}
bool sufix(int n, int k)
{
	int reverseN = Reversenumber(n);
	while (reverseN > 0)
	{
		if (reverseN == Reversenumber(k))return true;
		reverseN /= 10;
	}
	return false;
}
int AmountOfDigits(int number)
{
	int count = 1;
	number /= 10;
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	return count;
}
int numberWithouFirstAndLastDigit(int number)
{
	int multi = 1;
	for (int i = 1; i < AmountOfDigits(number); i++)
	{
		multi *= 10;
	}
	number %= multi;
	number /= 10;
	return number;
}
bool inFix(unsigned n, unsigned k)
{
	if (n == k)return true;
	while (n > 0)
	{
		if (numberWithouFirstAndLastDigit(n) == k || sufix(n,k) == true || prefix(n,k)==true)
		{
			return true;
		}
		n = numberWithouFirstAndLastDigit(n);
	}
	return false;
}
int main()
{
	int n, k;
	std::cin >> n >> k;
	int result = inFix(n, k);
	std::cout << result;
}
//13
#include <iostream>
int ReversedNum(int N)
{
	int reversed = 0;
	while (N != 0)
	{
		int digit = N % 10;
		reversed = reversed * 10 + digit;
		N /= 10;
	}
	return reversed;
}
int AmountOfDigits(int number)
{
	int count = 1;
	number /= 10;
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	return count;
}
int multi(int n)
{
	int multi = 1;
	for (int i = 1; i <= AmountOfDigits(n); i++)
	{
		multi *= 10;
	}
	return multi;
}
int konkatenaciq(int N)
{
	int result = ReversedNum(N) * multi(N) + N;
	return result;
}
int main()
{
	int N;
	std::cin >> N;
	int result = konkatenaciq(N);
	std::cout << result;
}

//14
#include <iostream>
int AmountOfDigits(int number)
{
	int count = 1;
	number /= 10;
	while (number != 0)
	{
		number /= 10;
		count++;
	}
	return count;
}
int countDigit(int number,int k)
{
	int count = 0;
	while (number != 0)
	{
		if (number % 10 == k)count++;
		number /= 10;
	}
	return count;
}
bool permutationNumbers(int a, int b)
{
	if (AmountOfDigits(a) != AmountOfDigits(b))
	{
		return false;
	}
	bool permutation = true;
	int copyA = a;
	while (copyA != 0)
	{
		int digit = copyA % 10;
		if (countDigit(a, digit) != countDigit(b, digit))
		{
			permutation = false;
			break;
		}
		copyA /= 10;
	}
	return permutation;
}
int main()
{
	int a, b;
	std::cin >> a >> b;
	int result = permutationNumbers(a, b);
	std::cout << result;
}*/
