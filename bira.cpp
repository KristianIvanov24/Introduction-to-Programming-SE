PURWA

int reverse(int n)
{
	int r = 0;
	while (n > 0)
	{
		r = r * 10 + n % 10;
		n /= 10;
	}
	return r;
}
int main()
{
	int n;
	std::cin >> n;
	std::cout << reverse(n);
}




WTORA
int kontanenekatonektion(int n)
{
	int r = 0;
	int k = 0;
	while (n > 0)
	{

		r = r * 10 + n % 10;
		n /= 10;
		k += 1;
	}
	for (int i = 0; i < k; ++i)
	{
		r *= 10;
	}

	return r;
}
int main()
{
	int n;
	std::cin >> n;
	std::cout << kontanenekatonektion(n) + n;

}


TRETA
bool isSorted(int n)
{
	if (10 > n)
	{
		return true;
	}
	while (n > 10)
	{
		int lastdig = n % 10;
		int seclastdig = (n % 100) / 10;
		if (seclastdig > lastdig)
		{
			return false;
		}
		n = n / 10;
	}
	return true;

}
int main()
{
	int n;
	std::cin >> n;
	std::cout << std::boolalpha;
	std::cout << isSorted(n);
}
CHETWURTA
#include <cmath>
double calcSide(int c, int d, int e, int f)
{
	double y = sqrt((c - e) * (c - e) + (d - f) * (d - f));
	return y;
}
int main()
{
	int x, y, a, b, m, n;
	std::cin >> x >> y >> a >> b >> m >> n;
	std::cout << calcSide(x, y, a, b) + calcSide(x, y, m, n) + calcSide(m, n, a, b);

}
PETA
bool isPrime(int x)
{
	double y = x / 2 + 1;
	if (x == 2 || x == 3)
	{
		return 1;
	}
	for (int i = 2; i < y; ++i)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	const int MAX_SIZE = 1000;
	int arr[MAX_SIZE];
	int n;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (isPrime(arr[i]) == 1)
		{
			std::cout << arr[i] << " ";
		}
	}

}
SHESTA
const int CAPACITY = 1024;
bool isPalindrome(int arr[CAPACITY], size_t size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		if (arr[i] != arr[size - 1 - i])
		{
			return false;
		}
	}
	return true;
}
int main()
{
	size_t size;
	std::cin >> size;
	int arr[CAPACITY];
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
	std::cout << std::boolalpha;
	std::cout << isPalindrome(arr, size);


}
SEDMA
const int CAPACITY = 1000;
int main()
{
	size_t size;
	std::cin >> size;

	int arr[CAPACITY];
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}

	int tracker = 1;
	int tracker2 = 1;

	for (int i = 0; i < size; ++i)
	{
		if (arr[i] < arr[i + 1])
		{
			tracker2 += 1;
		}
		else if (arr[i] > arr[i + 1])
		{
			tracker2 = 1;
		}
		if (tracker2 > tracker)
		{
			tracker = tracker2;
		}
	}
	std::cout << tracker;
}
OSMA
const int CAPACITY = 1000;
int main()
{
	size_t size;
	std::cin >> size;

	int arr[CAPACITY];
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}

	int tracker = 0;
	int tracker2 = 0;
	int original;
	int other;

	for (int i = 0; i < size - 1; ++i)
	{
		for (int k = 0;k < size - 1; ++k)
		{

			if (arr[i] == arr[k])
			{
				tracker2 = 0;
				tracker2 += 1;
				other = arr[i];

			}

		}
		if (tracker2 > tracker)
		{
			tracker = tracker2;
			original = arr[i];

		}
		else if (tracker2 == tracker)
		{
			if (other < original)
			{
				original = other;
			}
		}
	}
	std::cout << original;
}
DEWETA
const int CAPACITY = 1000;
int main()
{
	size_t size;
	std::cin >> size;

	int arr[CAPACITY];
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}

	int thismuch = 0;
	for (int i = 0; i < size - 1; ++i)
	{
		for (int k = i; k < size - 1; ++k)
		{
			if (arr[i] > arr[k + 1])
			{
				++thismuch;
			}
		}
	}
	std::cout << thismuch;
}
