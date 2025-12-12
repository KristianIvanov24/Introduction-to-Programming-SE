#include <iostream>
int getRemainder(int first, int second)
{
	if (second == 0)
		return -1;
	return first - second * (first / second);
}
int main()
{
	//Да се напише функция getRemainder(int first, int second), която играе ролята на оператор % (за делене с остатък), т.е. 
	// връща като резултат first % second. Не може да използвате оператор % за тази задача!
	int first, second;
	std::cout << "Input two numbers: ";
	std::cin >> first >> second;
	std::cout << getRemainder(first, second);
}
