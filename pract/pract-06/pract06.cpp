/*
//1
#include <iostream>

bool sortedArrUp(const int arr[], size_t size)
{
	for (int i = 0; i < size-1; i++)
	{
		if (arr[i] > arr[i + 1])
		{
			return false;
		}
	}
	return true;
}

bool sortedArrDown(const int arr[], size_t size)
{
	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] < arr[i + 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int arr[5] = { 1,2,3,4,5 };
	std::cout << sortedArrUp(arr, 5);
}

//2
#include <iostream>

const int CAPACITY=1024;

void printArray(int arr[], size_t size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';

	std::cout << std::endl;
}

void removePos(int arr[], size_t& size, int k)
{
	for (int i = k; i < size - 1; ++i)
	{
		arr[i] = arr[i + 1];
	}size--;
}

int main()
{
	size_t N;
	std::cin >> N;
	int arr[CAPACITY];
	for (int i = 0; i < N; ++i)
	{
		std::cin >> arr[i];
	}
	printArray(arr, N);
	int pos;
	std::cin >> pos;
	removePos(arr, N, pos);
	printArray(arr, N);
}

//3
#include <iostream>

void printArray(int arr[], size_t size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';

	std::cout << std::endl;
}

void swap(int& a, int& b)
{
	b += a;
	a = b - a;
	b -= a;
}

void reversedKArr(int arr[],size_t size,int k)
{
	int middle = k  / 2;
	for (int i = 0; i < middle; i++)
	{
		swap(arr[i], arr[k-1-i]);
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	reversedKArr(arr,10, 5);
	printArray(arr, 10);
}

//4
#include <iostream>

const size_t CAPACITY = 1000;

int median(int arr[], size_t size)
{
	if (size % 2 == 0)
	{
		int middle = size / 2;
		int result = (arr[middle - 1] + arr[middle]) / 2;
		return result;
	}
	size_t middle = size / 2;
	return arr[middle];
}

int main()
{
	int N;
	std::cin >> N;
	int arr[CAPACITY];
	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << median(arr, N);
}

//5
#include <iostream>

const int CAPACITY = 1000;

void maxMin(const int arr[], size_t size)
{
	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	int min = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	std::cout << "Max value is:" << max << std::endl;
	std::cout << "Min value is:" << min << std::endl;
}

int main()
{
	int N;
	std::cin >> N;
	int arr[CAPACITY];
	for (int i = 0; i < N; i++)
	{
		std::cin >> arr[i];
	}
	maxMin(arr, N);
}

//6
#include <iostream>

const size_t CAPACITY = 1024;

void printArray(int arr[], size_t size)
{
	for (size_t i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

void arrWithoutNegative(int arr[], size_t& size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)
		{
			for (int j = i; j < size - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			size--;
			i--;
		}
	}
}

int main()
{
	size_t N;
	std::cin >> N;
	int arr[CAPACITY];

	for (size_t i = 0; i < N; i++)
		std::cin >> arr[i];

	arrWithoutNegative(arr, N);
	printArray(arr, N);
}

//7
#include <iostream>

const int CAPACITY = 1024;

int findZero(const int arr[], size_t size)
{
	int end = size - 1;
	int start = 0;
	while (true)
	{
		int mid = (start + end) / 2;
		if (arr[mid] == 0)
		{
			return mid;
		}
		else if (arr[mid] % 2 == 0)
		{
			end = mid;
		}
		else
		{
			start = mid;
		}
	}
	return -1;
}

int main()
{
	size_t N;
	std::cin >> N;
	int arr[CAPACITY];
	for (int i = 0; i < N; ++i)
	{
		std::cin >> arr[i];
	}
	std::cout << findZero(arr, N);
}

//8
#include <iostream>

const size_t CAPACITY = 1024;

int sumOfElements(const int arr[], size_t size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	return sum;
}

bool canBePartitioned(const int arr[], size_t size)
{
	if (sumOfElements(arr, size) % 2 != 0)
	{
		return false;
	}
	int target = sumOfElements(arr,size) / 2;
	int sum1 = 0;
	for (int i = 0; i < size; ++i)
	{
		sum1 += arr[i];
		if (sum1 == target)
		{
			return true;
		}
		else if (sum1 > target)
		{
			return false;
		}
	}
}

int main()
{
	int N;
	std::cin >> N;
	int arr[CAPACITY];
	for (int i = 0; i < N; ++i)
	{
		std::cin >> arr[i];
	}
	std::cout << (canBePartitioned(arr, N) ? "yes" : "no");
}

//9
#include <iostream>

const int CAPACITY = 1024;

void nextToNextSameNumbers(const int arr[], size_t size)
{
	int count = 1;
	int current = arr[0];
	int maxCount = count;
	for (int i = 0; i < size-1; ++i)
	{
		if (arr[i] == arr[i + 1])
		{
			count++;
		}
		else
		{
			if (count > maxCount)
			{
				maxCount = count;
				current = arr[i];
			}
			count = 1;
		}
	}
	if (count > maxCount)
	{
		maxCount = count;
		current = arr[size-1];
	}
	std::cout << "lenght:" << maxCount << std::endl << "number:" << current;
}

int main()
{
	int N;
	std::cin >> N;
	int arr[CAPACITY];
	for (int i = 0; i < N; ++i)
	{
		std::cin >> arr[i];
	}
	nextToNextSameNumbers(arr, N);
}

//10
#include <iostream>

const int CAPACITY = 1024;

void removePos(int arr[], size_t& size, int k)
{
	for (int i = k; i < size - 1; ++i)
	{
		arr[i] = arr[i + 1];
	}size--;
}

bool permuArrs(const int arr1[], int arr2[], size_t size,size_t& size1)
{
	bool permu = true;
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size1; ++j)
		{
			if (arr1[i] == arr2[j])
			{
				removePos(arr2, size1, j);
				permu = true;
				break;
			}
			else
			{
				permu = false;
			}
		}
		if (permu == false)return false;
	}
	return permu;
}

int main()
{
	size_t N;
	size_t M;
	std::cout << "Input size1:" << std::endl;
	std::cin >> N;
	std::cout << "Input size2:" << std::endl;
	std::cin >> M;
	while (N != M)
	{
		std::cout << "Invalid Input N and M must e equal!" << std::endl << "New sizes:";
		std::cin >> N >> M;
	}
	int arr1[CAPACITY];
	std::cout << "Input Arr1:" << std::endl;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> arr1[i];
	}
	int arr2[CAPACITY];
	std::cout << "Input Arr2:" << std::endl;
	for (int i = 0; i < M; ++i)
	{
		std::cin >> arr2[i];
	}
	std::cout << (permuArrs(arr1, arr2, N, M) ? "true" : "false");
}

//11
#include <iostream>

const size_t CAPACITY = 1024;

bool isPodArray(int arr1[], int arr2[], size_t size1, size_t size2)
{
	for (size_t i = 0; i <= size1 - size2; ++i)
	{
		bool pod = true;
		for (size_t j = 0; j < size2; ++j)
		{
			if (arr1[i + j] != arr2[j])
			{
				pod = false;
				break;
			}
		}
		if (pod)
			return true;
	}
	return false;
}

int main()
{
	size_t N;
	size_t M;
	std::cout << "Input size1:" << std::endl;
	std::cin >> N;
	std::cout << "Input size2:" << std::endl;
	std::cin >> M;
	while (N < M)
	{
		std::cout << "Invalid Input N must be greather thaan M!" << std::endl << "New sizes:";
		std::cin >> N >> M;
	}
	int arr1[CAPACITY];
	std::cout << "Input Arr1:" << std::endl;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> arr1[i];
	}
	int arr2[CAPACITY];
	std::cout << "Input Arr2:" << std::endl;
	for (int i = 0; i < M; ++i)
	{
		std::cin >> arr2[i];
	}
	std::cout << (isPodArray(arr1, arr2, N, M) ? "true" : "false");
}

//12
#include <iostream>

const int CAPACITY=1024;

void printSubarrays(const int arr[], size_t size, int k)
{
	for (int i = 0; i <= size-k; ++i)
	{
		for (int j = i; j < k+i; ++j)
		{
			std::cout << arr[j] << ' ';
		}
		std::cout << std::endl;
	}
}

int main()
{
	int N;
	std::cout << "Input size:" << std::endl;;
	std::cin >> N;
	int k;
	std::cout << "Input k:" << std::endl;;
	std::cin >> k;
	while (N < k)
	{
		std::cout << "Invalid Input N must be greather thaan k!" << std::endl << "New values:";
		std::cin >> N >> k;
	}
	int arr[CAPACITY];
	std::cout << "Input your array:" << std::endl;;
	for (int i=0; i < N; ++i)
	{
		std::cin >> arr[i];
	}
	printSubarrays(arr, N, k);
}

//13 works even if first two arrays are not sorted!

#include <iostream>

const int CAPACITY = 1024;

void printArray(int arr[], size_t size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';

	std::cout << std::endl;
}

void swap(int& a, int& b)
{
	a += b;
	b = a - b;
	a -= b;
}

void newArray(int arr1[], const int arr2[], size_t& size1, size_t size2)
{
	size_t copySize1 = size1;
	size1 += size2;
	int j = 0;
	for (size_t i = copySize1; i < size1; ++i)
	{
		arr1[i] = arr2[j];
		j++;
	}
}

void sortNewArray(int arr[], size_t size)
{
	for (int i = 0; i < size-1; ++i)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}

int main()
{
	size_t N;
	size_t M;
	std::cout << "Input size1:" << std::endl;
	std::cin >> N;
	std::cout << "Input size2:" << std::endl;
	std::cin >> M;
	int arr1[CAPACITY];
	std::cout << "Input Arr1:" << std::endl;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> arr1[i];
	}
	int arr2[CAPACITY];
	std::cout << "Input Arr2:" << std::endl;
	for (int i = 0; i < M; ++i)
	{
		std::cin >> arr2[i];
	}
	newArray(arr1, arr2, N, M);
	sortNewArray(arr1, N);
	printArray(arr1, N);
}

//14
#include <iostream>

const int CAPACITY = 1024;

void swap(int& a, int& b)
{
	a += b;
	b = a - b;
	a -= b;
}

void sortNewArray(int arr[], size_t size)
{
	for (int i = 0; i < size - 1; ++i)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (arr[i] > arr[j])
			{
				swap(arr[i], arr[j]);
			}
		}
	}
}

void printArray(int arr[], size_t size)
{
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';

	std::cout << std::endl;
}

void unionArrs(int arr1[], const int arr2[], size_t& size1, size_t size2)
{
	size_t copySize1 = size1;
	size1 += size2;
	int j = 0;
	for (size_t i = copySize1; i < size1; ++i)
	{
		arr1[i] = arr2[j];
		j++;
	}
	sortNewArray(arr1, size1);
	printArray(arr1, size1);
}

void removePos(int arr[], size_t& size, int k)
{
	for (int i = k; i < size - 1; ++i)
	{
		arr[i] = arr[i + 1];
	}size--;
}

void cutArrs(int arr1[], const int arr2[], size_t& size1, size_t size2)
{
	for (int i = 0; i < size1; i++)
	{
		bool equal = false;
		for (int j = 0; j < size2; j++)
		{
			if (arr1[i] == arr2[j])
			{
				equal += 1;
			}
		}
		if (!equal)
		{
			removePos(arr1, size1, i);
		}
	}
	sortNewArray(arr1, size1);
	printArray(arr1, size1);
}

void differenceArrs( int arr1[],  const int arr2[], size_t size1, size_t& size2)
{
	for (int i = 0; i < size1; i++)
	{
		bool equal = false;
		for (int j = 0; j < size2; j++)
		{
			if (arr1[i] == arr2[j])
			{
				equal += 1;
			}
		}
		if (equal)
		{
			removePos(arr1, size2, i);
		}
	}
	sortNewArray(arr1, size2);
	printArray(arr1, size2);
}

void copies(int arr[], int copy[], size_t& a, size_t copya)
{
	a = copya;
	for (int i = 0; i < a; i++)
		arr[i] = copy[i];
}

int main()
{
	size_t N;
	size_t M;
	std::cout << "Input size1:" << std::endl;
	std::cin >> N;
	std::cout << "Input size2:" << std::endl;
	std::cin >> M;
	int arr1[CAPACITY];
	std::cout << "Input Arr1:" << std::endl;
	for (int i = 0; i < N; ++i)
	{
		std::cin >> arr1[i];
	}
	int arr2[CAPACITY];
	std::cout << "Input Arr2:" << std::endl;
	for (int i = 0; i < M; ++i)
	{
		std::cin >> arr2[i];
	}
	int copy[CAPACITY];
	int copyN = N;
	for (int i = 0; i < N; i++)
		copy[i] = arr1[i];
	std::cout << "union is:";
	unionArrs(arr1, arr2,N,M);
	std::cout << std::endl;
	copies(arr1, copy, N, copyN);
	std::cout << "cut is:";
	cutArrs(arr1, arr2, N, M);
	std::cout << std::endl;
	copies(arr1, copy, N, copyN);
	std::cout << "difference is:";
	differenceArrs(arr1, arr2, N, M);
}
//15
#include <iostream>

const int CAPACITY = 1024;

bool isReflexive(const int arr1[], const int arr2[], size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr1[i] != arr2[i])
			return false;
	}
	return true;
}

bool isSymetric(const int arr1[], const int arr2[], size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		bool sym1 = false;
		bool sym2 = false;
		bool SYM = false;
		int a = arr1[i];
		int b = arr2[i];
		for (int j = 0; j < size; j++)
		{
			if (arr1[j] == b)
			{
				sym1 = true;
			}
		}
		for (int k = 0; k < size; k++)
		{
			if (arr2[k] == a)
			{
				sym2 = true;
			}
		}
		if (sym1 && sym2)
		{
			SYM = true;
		}
		if (!SYM) return false;
	}
	return true;
}

bool isAntiSymetric(const int arr1[], const int arr2[], size_t size)
{
	bool sym = false;
	for (int i = 0; i < size; ++i)
	{
		sym = false;
		int a = arr1[i];
		int b = arr2[i];
		for (int j = 0; j < size; j++)
		{
			if (arr1[j] == b && arr2[j] == a)
			{
				if (a == b)
				{
					sym = true;
				}
				else return false;
			}
		}
	}
	return sym;
}

bool isTransitive(const int arr1[], const int arr2[], size_t size)
{
	for (int i = 0; i < size; ++i)
	{
		bool tran = false;
		int a = arr2[i];
		int b = arr1[i];
		for (int j = 0; j < size; ++j)
		{
			if (arr1[j] == a)
			{
				tran = true;
				int c = arr2[j];
				for (int k = 0; k < size; ++k)
				{
					if (arr1[k] == b && arr2[k] == c)
					{
						return true;
					}
				}
			}
			if (!tran) return false;
		}

	}
	return false;
}

int main()
{
	size_t size;
	std::cout << "Input size:" << std::endl;
	std::cin >> size;
	int X[CAPACITY];
	std::cout << "Input elements of X:" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> X[i];
	}
	int Y[CAPACITY];
	std::cout << "Input elements of Y:" << std::endl;
	for (int i = 0; i < size; ++i)
	{
		std::cin >> Y[i];
	}
	std::cout << "Reflexive:" << (isReflexive(X, Y, size) ? "yes" : "no") << std::endl;
	std::cout << "Symmetric:" << (isSymetric(X, Y, size) ? "yes" : "no") << std::endl;
	std::cout << "Antisymmetric:" << (isAntiSymetric(X, Y, size) ? "yes" : "no") << std::endl;
	std::cout << "Transitive:" << (isTransitive(X, Y, size) ? "yes" : "no") << std::endl;
}
*/