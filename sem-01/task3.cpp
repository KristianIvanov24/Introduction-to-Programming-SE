#include <iostream>
int main() {
    int a,b;
    std::cout<<"Vavedete dve chisla: "<<std::endl;
    std::cin >> a >> b;
    a>b?std::cout<<a:std::cout<<b;
    return 0;
}