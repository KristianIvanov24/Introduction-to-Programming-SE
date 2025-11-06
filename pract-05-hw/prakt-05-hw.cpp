// prakt-05-hw.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//pri c a e 3 zashtoto se izpulnqva v operaciqta i togava se uvelicava za sebe si
/*
#include <iostream>

int main()
{
    int a = 3, b = 4;
    int c = a++ * ++b;

    std::cout << a << " " << b << " " << c;

    return 0;
}
*/
//vupreki che delitelq e 0 ne izvejda grwshka a 0
/*
#include <iostream>
int main()
{
    int a = 10;
    std::cout << ((a == 6) && (a / !a));
}
*/
//dava greshka a ne e definirano
/*
#include <iostream>

int main()
{
    int a;
    std::cout << a;

    return 0;
}
*/
//-2147483648 minava ot drugata strana i gi pravi v bitove
/*
#include <iostream>

int main()
{
    int x = 2147483647; // най-голямата възможна стойност на int
    std::cout << x + 1;

    return 0;
}
*/
//a++ vrushta stoinost ++a vrushta promenliva ne moje da se dostupva do stoinost
/*#include <iostream>

int main() {
    int a = 0;
    ++a++;
}
*/
//3
/*
#include <iostream>

int main()
{
    int a = 7;
    if (a -= a += 7)
        a++;
    else
        a += 3;
    std::cout << a;
}
*/
//, e lqvoasociativna - purvo se gleda stoinostta na lqvata promenliva i posle na dqsnata i se vzima tazi na dqsnata
/*#include <iostream>

int main() {

    int a = 0, b = 5;

    if (a, b) {
        std::cout << a;
    }
    else {
        std::cout << b;
    }
}
*/
//imam ; sle while toest e bez tqlo i programata se zaklqcha tui kato a ne se promenq
/*#include <iostream>
int main()
{
    int a = 10;
    while (a != 0);
      std::cout << a-- << std::endl;
}
*/
/*
#include <iostream>
int main()
{
    int i = 6;
    while (std::cout << i, ----i);
}
*/
/*
#include <iostream>
bool f() {
    std::cout << 5;
    return false;
}
bool g() {
    std::cout << 123;
    return true;
}
bool h() {
    std::cout << 0;
    return true;
}
void k()
{
    std::cout << (h() || g() || f()) << std::endl;
    std::cout << (g() && f() && h()) << std::endl;
}

int main()
{
    k();
}
*/
// b e referenciq na a
/*
#include <iostream>

int main() {
    int a = 10;
    int& b = a;
    b++;
    int c = b;
    c--;
    std::cout << a << " " << b << " " << c;
}
*/
//referenciq ne moje da se inicializira s literal ili konstanta, pri nas 0 e literal, a ne promenliva
/*#include <iostream>

void f(int& a = 0) {
    
    std::cout << a << std::endl;
}

int main() {
    f();
}
*/
