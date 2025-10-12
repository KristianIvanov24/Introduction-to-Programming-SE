// 14. Напишете програма, при която се въвежда цяло положително число (секунди). Програмата да изчисли и отпечата колко часа, минути и секунди са въведеното число.
#include <iostream>

int main () {
    int seconds; std::cin>>seconds; 
    int hours = seconds / 3600; 
    int minutes = (seconds % 3600) / 60;
    seconds %= 60;
    std::cout<<hours<<" hours, "<<minutes<<" minutes and "<<seconds<<" seconds\n";

    return 0;
}