#include <iostream>


int main () {
    int hour, minutes;
    std::cin >> hour >> minutes;

    if (hour > 23 || hour < 0 || minutes > 59 || minutes < 0)
    {
        std::cout << "Invalid input" << std::endl;
        return 0;
    }

    minutes = 60 - minutes;
    hour = 11 - hour % 12;

    std::cout<<(hour < 10 ? "0" : "");
    if (minutes == 60)
        std::cout << hour + 1 << ":00" << std::endl;
    else
        std::cout << hour << ":" << minutes << std::endl;
    return 0;
}