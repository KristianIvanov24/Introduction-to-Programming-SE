#include <iostream>
const int MIN_VALUE = 1;
int main()
{
	//Дискретно сечение на числата 🤫🙈🔢
	//Въвеждат се n и k.Нека A и B са следните множества :

	//A = { i | 1 <= i <= n, i % k == 0 }
	//	B = { i | 1 <= i <= n, f(i) == k }
	//	където f(i) : ℕ → ℕ връща сумата на цифрите на дадено естествено число i.Отпечатайте A ∩ B.
	int n, k;
	std::cout << "Input two numbers: ";
	std::cin >> n >> k;
	if (n < MIN_VALUE || k < MIN_VALUE)
	{
		std::cout << "N and K must be greater than 0";
		return 0;
	}
	std::cout << "Intersection(A, B) = { ";
	bool isFirst = true;
	for (int i = k; i < n; i += k)
	{
		int sumOfDigits = 0;
		int temp = i;
		while (temp > 0)
		{
			sumOfDigits += temp % 10;
			temp /= 10;
		}
		if (isFirst && sumOfDigits == k)
		{
			std::cout << i;
			isFirst = false;
			continue;
		}
		if (sumOfDigits == k)
			std::cout << ", " << i;
	}
	std::cout << " }";
}
