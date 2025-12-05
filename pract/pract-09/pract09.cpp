//1
/*#include <iostream>

const int SIZE = 1000;

int charToInt(char sym)
{
	if (sym <= '9' && sym >= '0')
	{
		return sym - '0';
	}
	else if (sym >= 'A' && sym <= 'Z')
	{
		return sym + 10 - 'A';
	}
	else return -1;
}

char intTochar(int n)
{
	if (n >= 0 && n <= 9)
	{
		return n + '0';
	}
	else if (n > 9)
	{
		return n - 10 + 'A';
	}
	else return -1;
}

int sizeOfArray(int n, int m)
{
	int size = 0;
	while (n > 0)
	{
		size++;
		n /= m;
	}
	return size;
}

int fromKToDecimal(const char start[], unsigned k,size_t size)
{
	int sum = 0;
	int multi = 1;
	for (int i = size - 1; i >= 0; --i, multi *= k)
	{
		sum += charToInt(start[i]) * multi;
	}
	return sum;
}

void printReverseArray(const char arr[], size_t size,int m)
{
	if (m == 10)
	{
		for (int i = size - 1; i >= 0; --i)
		{
			std::cout << arr[i];
		}
		return;
	}
	std::cout << '[';
	for (int i = size - 1; i >= 0; --i)
	{
		if (i == 0)
		{
			std::cout << arr[i] << ']';
			break;
		}
		std::cout << arr[i] << ',';
	}
}

void inputArray(char arr[],size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		std::cin >> arr[i];
	}
}

void fromDecimalToM(int n, int m,size_t size)
{
	char end[SIZE];
	int copyM = m;
	for (int i = 0; i <size; ++i)
	{
		int left = n % m;
		end[i] = intTochar(left);
		n /= m;
	}
	printReverseArray(end, size,copyM);
}

int main()
{
	int k;
	std::cout << "Input k:";
	std::cin >> k;
	int m;
	std::cout << "Input m:";
	std::cin >> m;
	size_t sizeFirstArray;
	std::cout << "Input size for first array:";
	std::cin >> sizeFirstArray;
	char start[SIZE];
	std::cout << "Input your number in 'k' system:";
	inputArray(start, sizeFirstArray);
	int resultDecimal = fromKToDecimal(start, k, sizeFirstArray);
	int sizeSecondArray = sizeOfArray(resultDecimal, m);
	fromDecimalToM(resultDecimal,m,sizeSecondArray);
}
//2
#include <iostream>

int returnPosToB(int n, int pos, int b)
{

	if (b == 1)
	{
		int mask = 1;
		mask <<= pos;
		return n | mask;
	}
	if (b == 0)
	{
		int mask = 1;
		mask <<= pos;
		mask = ~mask;
		return n & mask;
	}
	return -1;
}

int main()
{
	int n, pos, b;
	std::cin >> n >> pos >> b;
	std::cout << returnPosToB(n, pos, b);
}
//3
#include <iostream>

const int SIZE = 1024;

int AmountOfbits(int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n /= 2;
	}
	return count;
}

void DecimalToBinary(int n)
{
	int size = AmountOfbits(n);
	int copySize = size;
	int arr[SIZE];
	while (n != 0)
	{
		int left = n % 2;
		arr[size - 1] = left;
		size--;
		n >>= 1;
	}
	for (int i = 0; i < copySize; ++i)
		std::cout << arr[i];
}

void returnIn8bit(int n)
{
	int k = 8 - AmountOfbits(n);
	while (k != 0)
	{
		std::cout << 0;
		k--;
	}
	DecimalToBinary(n);
}

int main()
{
	int n;
	std::cin >> n;
	returnIn8bit(n);
}
//4
#include <iostream>

int amountOfOnes(int n)
{
	int count = 0;
	while (n != 0)
	{
		if ((n & 1) == 1)
		{
			count++;
		}
		n >>= 1;
	}
	return count;
}

bool isBpermutationOfA(int a, int b)
{
	return amountOfOnes(a) == amountOfOnes(b);
}

int main()
{
	int a,b;
	std::cin >> a>>b;
	std::cout << isBpermutationOfA(a, b);
}
//5
#include <iostream>

void testOnWhichDay(int n)
{
	int mask = 1;
	if (n & mask)std::cout << "Monday, ";
	n >>= mask;
	if (n & mask)std::cout << "Tuesday, ";
	n >>= mask;
	if (n & mask)std::cout << "Wednesday, ";
	n >>= mask;
	if (n & mask)std::cout << "Thursday, ";
	n >>= mask;
	if (n & mask)std::cout << "Friday, ";
	n >>= mask;
	if (n & mask)std::cout << "Saturday, ";
	n >>= mask;
	if (n & mask)std::cout << "Sunday";
}

int main()
{
	int n;
	std::cin >> n;
	testOnWhichDay(n);
}
//6
#include <iostream>

const unsigned SIZE = 32;

bool isPalindromefromDecimalToK(unsigned int n,int k)
{
	unsigned arr[SIZE];
	int current = 0;
	while (n != 0)
	{
		int left = n % k;
		arr[current] = left;
		n /= k;
		current++;
	}
	for (int i = current-1,j=0;i >= 0; --i,++j)
	{
		if (arr[i] != arr[j])
			return false;
	}
	return true;
}

int main()
{
	unsigned n, k;
	std::cin >> n >> k;
	std::cout<<isPalindromefromDecimalToK(n,k);
}
//7
#include <iostream>
int AmountOfBits(int n)
{
	int count = 0;
	while (n != 0)
	{
		count++;
		n >>= 1;
	}
	return count;
}

int makeMask(int k)
{
	int mask = 1;
	mask <<= k;
	return mask - 1;
}

int posKInNum(int num, int pos, int k)
{
	int amountOfBits = AmountOfBits(num);
	int posOfLastBit = amountOfBits - 1;
	if (pos > posOfLastBit || k > amountOfBits)return -1;
	int moveToPos = posOfLastBit - pos;
	int moveOfMask = amountOfBits - k - moveToPos;
	int mask = makeMask(k);
	mask <<= moveOfMask;
	int result = num & mask;
	result >>= moveOfMask;
	return result;
}

int main()
{
	int num, pos, k;
	std::cin >> num >> pos >> k;
	std::cout << posKInNum(num,pos,k);
}
//8
#include <iostream>

const int SIZE = 100;

int CharToInt(char n)
{
	if (n >= '0' && n <= '9')
		return n - '0';
	if (n >= 'A' && n <= 'F')
		return n - 'A' + 10;
	return '\0';
}

char intTochar(int n)
{
	if (n >= 0 && n <= 9)
	{
		return n + '0';
	}
	else if (n > 9)
	{
		return n - 10 + 'A';
	}
	else return -1;
}

int fromKtoDecimal(const char arr[],int k,size_t size)
{
	int result = 0;
	int multi = 1;
	for (int i = size - 1; i >= 0; --i)
	{
		result += multi * CharToInt(arr[i]);
		multi *= k;
	}
	return result;
}

int result(const char arr1[], const char arr2[], int k, size_t size)
{
	return fromKtoDecimal(arr1, k, size) + fromKtoDecimal(arr2, k, size);
}

int sizeOf(int n, int k)
{
	int count = 0;
	while (n != 0)
	{
		count++;
		n /= k;
	}
	return count;
}

void fromDecimalToK(int n,int k,char res[])
{
	int size = sizeOf(n, k);
	int current = 0;
	while (n != 0)
	{
		int left = n % k;
		res[current] = intTochar(left);
		current++;
		n /= k;
	}
	std::cout << '[';
	for (int i = size - 1; i >= 0; --i)
	{
		if (i == 0)
		{
			std::cout << res[i];
			break;
		}
		std::cout << res[i] << ',';
	}
	std::cout << ']';
}

int main()
{
	char arr1[] = {'1','7','5'};
	char arr2[] = { '5','3','7' };
	char res[SIZE];
	int k;
	std::cin >> k;
	int sum = result(arr1, arr2, k, 3);
	fromDecimalToK(sum, k, res);
}
//9
#include <iostream>

const int SIZE = 8;
const int MAX = 11111111;
const int MAXVALUEFORBINARY = 1;

int fromZeroToOneAndFromeOneOrMoreToZero(int k)
{
	if (k == 0)
		return k + 1;
	if (k >= 1)
		return 0;
}

void fromIntToArray(int n, int arr[])
{
	if (n > MAX)
	{
		std::cout << "Wrong Input!";
		return;
	}
	int current = SIZE - 1;
	while (n > 0)
	{
		int left = n % 10;
		if (left != 1 && left != 0)
		{
			std::cout << "Wrong Input!";
				return;
		}
		arr[current] = left;
		n /= 10;
		current--;
	}
}

void negativeNumber(int arr[])
{
	int last = SIZE - 1;
	if (arr[last] == 1)
	{
		for (int i = 0; i < SIZE; ++i)
		{
			if (i == last)
			{
				std::cout << arr[i];
				break;
			}
			std::cout << fromZeroToOneAndFromeOneOrMoreToZero(arr[i]);
		}
		return;
	}
	else
	{
		for (int i = 0; i < SIZE; ++i)
		{
			arr[i] = fromZeroToOneAndFromeOneOrMoreToZero(arr[i]);
		}
		arr[last] += 1;
		for (int i = SIZE - 1; i >= 0; --i)
		{
			if (arr[i] > MAXVALUEFORBINARY)
			{
				if (i == 0)break;
				arr[i] = fromZeroToOneAndFromeOneOrMoreToZero(arr[i]);
				arr[i - 1] += 1;
				if (arr[i - 1] < 1)
					break;
			}
		}
		for (int i = 0; i < SIZE; ++i)
		{
			std::cout << arr[i];
		}
	}
}

int main()
{
	int n;
	std::cin >> n;
	int arr[SIZE];
	fromIntToArray(n, arr);
	negativeNumber(arr);
}*/