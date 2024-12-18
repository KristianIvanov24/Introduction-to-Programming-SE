
# Бройни системи. Побитови операции.

## 1. Бройни системи.

| Десетична (decimal) | Двоична (binary) | осмична (octal) | Шестнайсетична (hexadecimal) | Унарна (unary) |
|---------------------|------------------|-----------------|------------------------------|-------|
| 00                  | 00000            | 00              | 00                           | 00001 |
| 01                  | 00001            | 01              | 01                           | 00011 |
| 02                  | 00010            | 02              | 02                           | 00111 |
| 03                  | 00011            | 03              | 03                           | 01111 |
| 04                  | 00100            | 04              | 04                           | ...   |
| 05                  | 00101            | 05              | 05                           |       |
| 06                  | 00110            | 06              | 06                           |       |
| 07                  | 00111            | 07              | 07                           |       |
| 08                  | 01000            | 10              | 08                           |       |
| 09                  | 01001            | 11              | 09                           |       |
| 10                  | 01010            | 12              | 0A                           |       |
| 11                  | 01011            | 13              | 0B                           |       |
| 12                  | 01100            | 14              | 0C                           |       |
| 13                  | 01101            | 15              | 0D                           |       |

#### Преобразуване между бройни системи

Примери:

 - Алгоритъм за преобразуване от произволна бройна система в дестична бройна система
 - Алгоритъм за преобразуване от десетчина бройна система в произволна бройна система

#### Представяния на отрицателни числа

- **One's complement:** 5<sub>10</sub> == 0..0101<sub>2</sub> -> (flip) 1..1010<sub>2</sub> == -5<sub>10</sub>
- **Two's complement:** 5<sub>10</sub> == 0..0101<sub>2</sub> -> (flip) 1..1010<sub>2</sub> -> (1..1010<sub>2</sub> + 0..0001<sub>2</sub>) 1..1011<sub>2</sub> == -5<sub>10</sub>

## 2. Побитови операции
Прилагат се върху един бит или набор от повече отделни битове на двоични числа

 - Побитово И (**&**)
 - Побитово ИЛИ  (**|**)
 - Побитово ИЗКЛЮЧВАЩО ИЛИ  (**^**)
 - Побитово отместване  (**<<** )     ( **>>**)

|        |           |
|--------|-----------|
| a      | 101010100 |
| b      | 100101110 |
| a&b    | 100000100 |
| a \| b | 101111110 |
| a^b    | 001111010 |
| a << 2 | 101010000 |
| a >> 2 | 001010101 |

Примери:

 - Функция, която с побитови операции проверява дали число е четно
 - Функция, която с побитови операции повдига 2 на степен k.

 - Изчистване на бит (да стане 0)
 - Вдигане на бит (да стане 1)
 - Размяна на две променливи, без трета с побитови

 
<h3>Задачи</h3>

**Задача 1:** Напишете функция, която приема малка буква и я превръща в голяма.

*Вход: а,  Изход: А*

**Задача 2:** Напишете функция, която приема цяло число и връща броя на 1-ците в двоичния му запис.

*Вход: 189,  Изход: 6*

**Задача 3:** Напишете функция, която приема цяло число и обръща най-десния бит в него, който е единица.

*Вход: 12, Изход: 8*

*Вход: 15, Изход: 14*

**Задача 4:** Напишете функция, която по подадено цяло число n и цяло число k и връща числото, което е "закодирано" в последните k бита на n.

*Вход: 15 2, Изход: 3*

*Вход: 189 3, Изход: 5*

*Вход: 189 4, Изход: 13*

**Задача 5:** Напишете функция, която приема масив(разглеждаме го като множество) и отпечатва всички негови подмножества.

*Вход: [1, 2, 3], Изход: [], [1], [2], [3], [1,2], [2,3], [1,3], [1,2,3]*

*Вход: [5, 3] Изход: [], [5], [3], [5, 3]*
