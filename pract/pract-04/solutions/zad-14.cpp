#include <iostream>

int main() {
	int n;
	std::cin >> n;

	// първи ред
	for (int i = 0; i < n + 1; i++) {
		std::cout <<  ' ';
	}
	std::cout << '|' << std::endl;

	// останалите редове със звезди
	for (int i = 1; i <= n; i++) {
		//предварителни интервали
		for (int j = 0; j < n - i; j++) {
			std::cout << ' ';
		}
		// звезди отляво
		for (int j = 0; j < i; j++) {
			std::cout << '*';
		}
		std::cout << " | ";
		// звезди отдясно
		for (int j = 0; j < i; j++) {
			std::cout << '*';
		}
		std::cout << std::endl;
	}
}