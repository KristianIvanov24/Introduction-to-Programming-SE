/*1. Напишете програма, при която се въвежда двуцифрено цяло число.
        Програмата да отпечата 1 ако числото е валидна дата за януари,
        а в противен случай 0.

#include <iostream>
int main() {
    int day;
    std::cout<<"Vavedete broi dni:"<<std::endl;
    std::cin>>day;
    std::cout<<(day>=1 && day<=31);
    return 0;
}

    2. Напишете програма за конвертиране на български лева
        (BGN) в евро (EUR) по курс 1.9558 (EUR -> BGN).

#include <iostream>
int main() {
    double bgn;
    std::cout<<"Vavedete bgn:"<<std::endl;
    std::cin>>bgn;
    std::cout<<(bgn/1.9558);
    return 0;
}

    3. Напишете програма, при която се въвежда положително цяло число.
        Програмата да отпечата последната му цифра.

#include <iostream>
int main() {
    int num;
    std::cout<<"Vavedete chislo:"<<std::endl;
    std::cin>>num;
    std::cout<<num%10;
    return 0;
}

    4. Въвежа се символ. Да се отпечата 1, ако е английска гласна буква, и 0, ако не е.

#include <iostream>
int main() {
    char s;
    std::cout<<"Vavedete simvol:"<<std::endl;
    std::cin>>s;
    std::cout<<(s=='a'||s=='A'||s=='e'||s=='E'||s=='u'||s=='U'||s=='i'||s=='I'||s=='o'||s=='O');
    return 0;
}

    5. Въвежа се малка латинска буква. Да се отпечата на екрана еквивалентната голяма буква.

#include <iostream>
int main() {
    char letter;
    std::cout<<"Vavedete malka latinska bukva:"<<std::endl;
    std::cin>>letter;
    char Letter = letter-32;
    std::cout<<Letter<<std::endl;
    return 0;
}

   6. Напишете програма, при която се въвежда двуцифрено число.
        Да се намери произведението на цифрите му.

#include <iostream>
int main() {
int a;
    std::cout<<"Vavedete dvucifreno choslo:"<<std::endl;
    std::cin >> a;
    std::cout << (a%10* a/10);
    return 0;
}

  7. Напишете програма, при която се въвежда трицифрено цяло число.
        Програмата да отпечата цифрите му разменени.

#include <iostream>
int main() {
    int a;
    std::cout<<"Vavedete tricifreno choslo:"<<std::endl;
    std::cin >> a;
    std::cout << a%10<<""<<(a/10)%10<<""<<a/100;
    return 0;
}

  8. Напишете програма, при която се въвежда трицифрено цяло число.
        Програмата да изчисли и отпечата сбора на цифрите му.

#include <iostream>
int main() {
    int a;
    std::cout<<"Vavedete tricifreno choslo:"<<std::endl;
    std::cin >> a;
    std::cout << a/100+(a/10)%10+(a%10);
    return 0;
}

  9. Напишете програма,
        която намира позицията на малка латинска буква в азбуката (a=1, b=2, ..., z=26).

#include <iostream>
int main(){
    char letter;
    std::cout << "Enter letter: "<<std::endl;
    std::cin >> letter;
    std::cout << letter-96;
    return 0;
}

  10. Въвеждат се 4 цели числа. Да се отпечата 1,
    ако числата образуват аритметична прогресия в реда,
    в който са въведени, и 0, ако съответно не образуват.

#include <iostream>
int main() {
    int a, b, c, d;
    std::cout << "Vavedete 4 chisla: "<<std::endl;
    std::cin >> a >> b >> c >> d;
    std::cout<<((b-a)==(c-b)&&(d-c)==(c-b));
    return 0;
}
  11. Въвеждат се 4 цели числа. Да се отпечата 1,
        ако числата образуват геометрична прогресия в реда,
        в който са въведени, и 0, ако съответно не образуват.

#include <iostream>
int main() {
    int a, b, c, d;
    std::cout << "Vavedete 4 chisla: "<<std::endl;
    std::cin >> a >> b >> c >> d;
    std::cout<<((b/a)==(c/b)&&(d/c)==(c/b));
    return 0;
}

  12. Напишете програма, при която се въвежда реално число (радиус на кръг).
        Програмата да изчисли и отпечата периметъра и лицето на кръга.

#include <iostream>
int main() {
    int r;
    std::cout << "Vavedete radius: "<<std::endl;
    double p = 3.14;
    std::cin >> r;
    std::cout << "Perimeter:"<< (2*r*p)<<std::endl;
    std::cout << "Area:"<< (p*r*r);
    return 0;
}

    13. Напишете програма, при която се въвеждат две реални числа (две страни на правоъгълник).
         Програмата да изчисли и отпечата периметъра и лицето на правоъгълника.
         Програмата да отпечатва дали правоъгълника е и квадрат.

#include <iostream>
int main() {
     int a,b;
     std::cout<<"Vavedete strani:"<<std::endl;
     std::cin>>a>>b;
     std::cout<<"Perimetre:"<<(2*(a+b))<<std::endl;
     std::cout<<"Area:"<<(a*b)<<std::endl;
     std::cout<<"In squere:"<<(a==b);
     return 0
}

    14. Напишете програма, при която се въвежда цяло положително число (секунди).
        Програмата да изчисли и отпечата колко часа,
        минути и секунди са въведеното число.

#include <iostream>
int main() {
    int sec;
    std::cout << "Enter time in seconds:"<<std::endl;
    std::cin>>sec;
    std::cout<<sec/3600<<" hours, "<<(sec%3600)/60<<" minutes and "<<sec%60<<" seconds";
    return 0;
}

    15. Напишете програма, при която се въвежда цяло четирицифрено число.
        Програмата да отпечата 1 ако то е палиндром и 0 ако не е.

#include <iostream>
int main() {
    int num;
    std::cout<<"Vavedete chetiricifreno cislo: "<<std::endl;
    std::cin>>num;
    std::cout<<(num/1000==num%10 && ((num/100)%10==(num%100)/10));
    return 0;
}

    16. Напишете програма, при която се въвеждат две положителни реални числа
        (координати на точка x и y).
        Програмата да отпечата разстоянието от центъра на координатната система до въведената точка.

#include <complex>//нужно за да работи 'sqrt'//
#include <iostream>
int main() {
    int x,y;
    std::cout<<"Vavedete polojitelni koordinati:"<<std::endl;
    std::cin>>x>>y;
    std::cout<<sqrt(x*x+y*y);
    return 0;
}

    17. Рожден ден
        За рожденият ден на дъщеря си, Ивана е решила да организира парти,
        на което да покани всичките ѝ съученици. За целта е решила да наеме развлекателна зала за деца,
        чийто наем ще получите като вход от конзолата.
        Напишете програма, с която да помогнете на Ивана да изчисли какъв бюджет ще ѝ бъде необходим,
        като имате следната информация за допълнителните неща, необходими за тържеството:

                *Торта - цената ѝ е 20% от наема на залата
                *Напитки - цената им е 45% по-малко от тази на тортата
                *Аниматор - цената му е 1/3 от цената за наема на залата

#include <iostream>
int main() {
    double rent;
    std::cout<<"Cena na zalata:"<<std::endl;
    std::cin>>rent;
    std::cout<<rent+rent/5+(rent/5)*11/20+rent/3;
    return 0;
}

    18. Пребоядисване
        Румен иска да пребоядиса хола и за целта е наел майстори.
        Материалите за ремонта имат следните цени:
                *Предпазен найлон - 2.50 лв. за кв. метър
                *Боя - 14.25 лв. за литър
                *Разредител за боя - 5.00 лв. за литър
        За всеки случай, към необходимите материали, Румен иска да добави още 10% от количеството боя
        и 3 кв. м. найлон, разбира се и 0.40 лв. за торбички. Сумата,
        която се заплаща на майсторите за 1 час труд,
        е равна на 30% от сбора на всички разходи за материали.
        Напишете програма, при която се въвежда количествата на предпазения найлон, боята,
        разредителя за боята и часове труд на работниците.
        Програмата да пресмята и отпечата цената на ремонта.

#include <iostream>
int main() {
    double sn,paint,tp,workhours;
    std::cout<<"Vavedete neobhedimite materiali:"<<std::endl;
    std::cin>>sn>>paint>>tp>>workhours;
    sn=sn+3;
    paint=paint*11/10;
    double sum1=sn*2.50+paint*14.25+tp*5+0.40;
    std::cout<<"Total cost: "<<sum1+workhours*3/10*sum1<<"lv."<<std::endl;
    return 0;
}*/