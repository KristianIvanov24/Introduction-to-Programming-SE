// 11. Въвеждат се 4 цели числа. Да се отпечата 1, ако числата образуват геометрична прогресия в реда, в който
// са въведени, и 0, ако съответно не образуват.
#include <iostream>

int main () {
    int a, b, c, d; std::cin>>a>>b>>c>>d;
    std::cout<<(b / (double) a == c / (double) b && c / (double) b == d / (double) c)<<std::endl;
    
    return 0;
}