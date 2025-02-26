## Рекурсия.


## Дефиниция
- ако при дефиниране на едно понятие се използва самото понятие,
дефиницията се нарича рекурсивна


## Предназначение
- рекурсията се прави за решаване на проблеми, които могат да бъдат разделени на по-малки,
повтарящи се проблеми. Oсобено подходящ за работа върху алгоритми, които имат много възможни разклонения и са твърде сложни за итеративен подход.


## Дъно на рекурсия
- реализирайки рекурсия, трябва да сме сигурни, че след краен брой стъпки ще получим конкретен резултат.
Tрябва да имаме един или няколко случаи, чието решение можем да намерим директно, без рекурсивно извикване. Тези случаи наричаме дъно на рекурсията.
Ако даден рекурсивен метод няма дъно на рекурсията, тя ще стане безкрайна и резултатът ще е StackOverflowException.


## Пряка и косвена рекурсия
- когато в тялото на метод се извършва извикване на същия метод, казваме, че методът е пряко рекурсивен.
- ако метод A се обръща към метод B, B към C, а С отново към А, казваме, че методът А, както и методите В и C са непряко (косвено) рекурсивни или взаимно-рекурсивни.


## Разлика м/у рекурсия и цикъл

| **Рекурсията**                                                                                              | **Циклите**                                                                                                  |
|-------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------|
| Рамка в стековата памет се алокира при всяко едно извикване на функцията.                                   | Можете да използвате цикли и без да създавате отделна функция.                                              |
| Получава се "верига" от много стекови рамки, докато се достигне дъното на рекурсията.                       | При всяка итерация в цикъла не се създава нова рамка и не се заема непрекъснато още памет.                  |
| Рекурсията заема много памет, защото се пазят всички стекови рамки, докато не се достигне дъното.           | Често отнемат повече време от рекурсията, за да се изпълнят.                                               |

## Рискове

| **Рискове при рекурсията**                                                                                  | **Рискове при циклите**                                                                                     |
|-------------------------------------------------------------------------------------------------------------|-------------------------------------------------------------------------------------------------------------|
| **StackOverFlow** - няма повече стекова памет, в която да се заделят нови рамки (от там идва и името на форума). | Може да се получи в някой частни случаи безкраен цикъл.                                                     |
| **OutOfMemory** - няма повече Heap памет, в която да се заделя за рекурсивните обекти, които се инициализират вътре в рекурсивната функция. |                                                                                                             |


**Препоръка:** Ако за решаването на някаква задача е уместно да се използва итеративен алгоритъм, реализирайте го.
Не се препоръчва винаги използването на рекурсия, тъй като това води до големи загуби на памет.


## Задачи:
**Задача 1:** Да се реализира рекурсивна функция, която пресмята n!

**Задача 2:** Да се реализира рекурсивна функция, която пресмята n-тото число на фибоначи.

**Задача 3:** Да се реализира рекурсивна функция, която вдига число на дадена степен.

**Задача 4:** Да се реализира рекурсивна функция, която приема масив от цели числа и връща сумата на елементите в него.

