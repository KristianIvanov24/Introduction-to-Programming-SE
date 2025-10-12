// Задача 4: Въвежа се цяло число. Да се отпечата 1, ако числото е валидна оценка от училище, и 0, ако не е валидна.
#include <iostream>

int main () {
    int grade; std::cin>>grade;
    int isValid = (grade > 1 && grade < 7);
    std::cout<<isValid<<std::endl; 

    return 0;
}