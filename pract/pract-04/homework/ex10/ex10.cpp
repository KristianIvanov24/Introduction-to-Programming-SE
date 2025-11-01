#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int sumEven = 0;
	int sumOdd = 0;

    for (int i = 0; i < n; i++) {

        int number;
		std::cin >> number;

        if (i % 2 == 0) {
			sumEven += number;
        }
        else sumOdd += number;
    }

	std::cout << "Sum of even: " << sumEven << std::endl;
	std::cout << "Sum of odd: " << sumOdd << std::endl;


    std::cout << sumEven;

    if (sumEven != sumOdd) std::cout << " != ";
    else std::cout << " == ";

	std::cout << sumOdd << std::endl;

    return 0;
}