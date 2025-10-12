// 12. Напишете програма, при която се въвежда реално число (радиус на кръг). Програмата да изчисли и отпечата периметъра и лицето на кръга.
#include <iostream>

const double pi = 3.141592;

int main () {
    double r; std::cin>>r;
    std::cout<<"Perimeter: "<<(2 * pi * r)<<"\nArea: "<<(pi * r * r)<<std::endl; 

    return 0;
}