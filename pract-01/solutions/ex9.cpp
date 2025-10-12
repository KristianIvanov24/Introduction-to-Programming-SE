// 9. Напишете програма, която намира позицията на малка латинска буква в азбуката (a=1, b=2, ..., z=26).
#include <iostream>

int main () {
    char letter; std::cin>>letter;
    std::cout<<letter - 'a' + 1<<std::endl;

    return 0;
}