/*Задача 4: Напишете програма, която приема две цели числа m и n (m < n). Програмата да извежда броя на числата в 
интервала [m,n], които се състоят от различни цифри.

Вход: 97 104, Изход: 5*/
#include <iostream>

int main () {
    int m, n;
    std::cin >> m >> n;

    int answer = 0;

    for (int number = m; number <= n; number++)
    {
        bool isValid = true;

        for (int i = 1; i <= number; i *= 10)
        {
            int digit = (number / i) % 10;
            int count = 0;

            for (int j = 1; j < number; j *= 10)
            {
                if (digit == (number / j) % 10)
                {
                    if (++count > 1)
                        break;
                }
            }

            if (count > 1)
            {
                isValid = false;
                break;
            }
        }

        answer += isValid;
    }

    std::cout << answer << std::endl;

    return 0;
}