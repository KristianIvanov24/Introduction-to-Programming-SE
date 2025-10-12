#include <iostream>
int main() {
    int n;
    std::cout<<"Vavedete treicifreno chislo:"<<std::endl;
    std::cin >> n;
    std::cout<<(n%10)*100+(n%100 / 10)*10+(n/100+1);
    return 0;
}