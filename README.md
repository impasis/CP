#### Algorithms

## 1. Числа Фибоначчи

Последовательность Фибоначчи определяется так:

F0=0,  F1=1, ..., Fn=Fn-1+Fn-2.

По данному числу n определите n-е число Фибоначчи Fn.

### Входные данные
Вводится натуральное число n.

### Выходные данные
Выведите ответ на задачу.

### Пример

**input.txt**
```c++
6
```

**output.txt**
```c++
8
```

### [Решение](dp/A.cpp)

## 2. Мячик на лесенке

На вершине лесенки, содержащей N ступенек, находится мячик, который начинает прыгать по ним вниз, к основанию. Мячик может прыгнуть на следующую ступеньку, на ступеньку через одну или через 2. (То есть, если мячик лежит на 8-ой ступеньке, то он может переместиться на 5-ую, 6-ую или 7-ую.) Определить число всевозможных "маршрутов" мячика с вершины на землю.

### Входные данные
Вводится одно число 0 < N < 31.

### Выходные данные
Выведите одно число — количество маршрутов.

### Пример

**input.txt**
```c++
4
```

**output.txt**
```c++
7
```

### [Решение](dp/B.cpp)

## 3. Простая последовательность

Вычислите n-й член последовательности, заданной формулами:

a2n = an ­+ an-1,
a2n+1 = an – an-1,
a0 = a1 = 1.

### Входные данные
Вводится одно натуральное число n (1≤n≤1000).

### Выходные данные
Вывести одно число an.

### Пример

**input.txt**
```c++
4
```

**output.txt**
```c++
3
```

### [Решение](dp/C.cpp)

## 4. Без трех единиц

Определите количество последовательностей из нулей и единиц длины N (длина - это общее количество нулей и едииниц), в которых никакие три единицы не стоят рядом.

### Входные данные
Вводится натуральное число N, не превосходящее 40.

### Выходные данные
Выведите количество искомых последовательностей. Гарантируется, что ответ не превосходит 2^31 − 1.

### Пример

**input.txt**
```c++
3
```

**output.txt**
```c++
7
```

### [Решение](dp/D.cpp)

## 5. Взрывоопасность

При переработке радиоактивных материалов образуются отходы двух видов — особо опасные (тип A) и неопасные (тип B). Для их хранения используются одинаковые контейнеры. После помещения отходов в контейнеры последние укладываются вертикальной стопкой. Стопка считается взрывоопасной, если в ней подряд идет более одного контейнера типа A. Стопка считается безопасной, если она не является взрывоопасной. Для заданного количества контейнеров N
 определить количество возможных типов безопасных стопок.

### Входные данные
Одно число 1≤N≤20
.

### Выходные данные
Одно число — количество безопасных вариантов формирования стопки.

### Примечание
В примере из условия среди стопок длины 2 бывают безопасные стопки типов AB, BA и BB. Стопки типа AA являются взрывоопасными.

### Пример

**input.txt**
```c++
2
```

**output.txt**
```c++
3
```

### [Решение](dp/E.cpp)

## 6. Взрывоопасность-2

При переработке радиоактивных материалов образуются отходы трех видов — особо опасные (тип A), неопасные (тип B) и совсем не опасные (тип C). Для их хранения используются одинаковые контейнеры. После помещения отходов в контейнеры последние укладываются вертикальной стопкой. Стопка считается взрывоопасной, если в ней подряд идет более одного контейнера типа A. Стопка считается безопасной, если она не является взрывоопасной. Для заданного количества контейнеров N
 определить число безопасных стопок.

### Входные данные
Одно число 1≤N≤20
.

### Выходные данные
Одно число — количество безопасных вариантов формирования стопки.

### Примечание
В примере из условия среди стопок длины 2 бывают безопасные стопки типов AB, AC, BA, BB, BC, CA, CB и CC. Стопки типа AA являются взрывоопасными.

### Пример

**input.txt**
```c++
2
```

**output.txt**
```c++
8
```

### [Решение](dp/F.cpp)

## 7. Самый дешевый путь

Мальчик подошел к платной лестнице. Чтобы наступить на любую ступеньку, нужно заплатить указанную на ней сумму. Мальчик умеет перешагивать на следующую ступеньку, либо перепрыгивать через ступеньку. Требуется узнать, какая наименьшая сумма понадобится мальчику, чтобы добраться до верхней ступеньки.


### Входные данные
В первой строке входного файла вводится одно натуральное число N≤100
 — количество ступенек.
В следующей строке вводятся N
 натуральных чисел, не превосходящих 100 — стоимость каждой ступеньки (снизу вверх).

### Выходные данные
Выведите одно число — наименьшую возможную стоимость прохода по лесенке.

### Пример

**input.txt**
```c++
3
1 3 1
```

**output.txt**
```c++
2
```

### [Решение](dp/G.cpp)

## 8. Cамый дешевый путь-2

В каждой клетке прямоугольной таблицы N×M
 записано некоторое число. Изначально игрок находится в левой верхней клетке. За один ход ему разрешается перемещаться в соседнюю клетку либо вправо, либо вниз (влево и вверх перемещаться запрещено). При проходе через клетку с игрока берут столько килограммов еды, какое число записано в этой клетке (еду берут также за первую и последнюю клетки его пути).

Требуется найти минимальный вес еды в килограммах, отдав которую игрок может попасть в правый нижний угол.

### Входные данные
Вводятся два числа N и M — размеры таблицы (1≤N≤2, 1≤M≤20).
Затем идет N строк по M
чисел в каждой — размеры штрафов в килограммах за прохождение через соответствующие клетки (числа от 0 до 100).

### Выходные данные
Выведите минимальный вес еды в килограммах, отдав которую можно попасть в правый нижний угол.

### Пример

**input.txt**
```c++
5 5
1 1 1 1 1
3 100 100 100 100
1 1 1 1 1
2 2 2 2 1
1 1 1 1 1
```

**output.txt**
```c++
11
```

### [Решение](dp/H.cpp)

## 9. Компьютерная игра (платформы)

Вы можете вспомнить хоть одного своего знакомого до двадцатилетнего возраста, который в детстве не играл в компьютерные игры? Если да, то может быть вы и сами не знакомы с этим развлечением? Впрочем, трудностей при решении этой задачи это создать не должно.

Во многих старых играх с двумерной графикой можно столкнуться с подобной ситуацией. Какой-нибудь герой прыгает по платформам (или островкам), которые висят в воздухе. Он должен перебраться от одного края экрана до другого. При этом при прыжке с одной платформы на соседнюю, у героя уходит |y2–y1| единиц энергии, где y1 и y2 — высоты, на которых расположены эти платформы. Кроме того, у героя есть суперприём, который позволяет перескочить через платформу, но на это затрачивается 3·|y3–y1| единиц энергии. Конечно же, энергию следует расходовать максимально экономно.

Предположим, что вам известны координаты всех платформ в порядке от левого края до правого. Сможете ли вы найти, какое минимальное количество энергии потребуется герою, чтобы добраться с первой платформы до последней?

### Входные данные
В первой строке записано количество платформ n (1 ≤ n ≤ 30000). Вторая строка содержит n натуральных чисел, не превосходящих 30000 — высоты, на которых располагаются платформы.

### Выходные данные
Выведите единственное число — минимальное количество энергии, которую должен потратить игрок на преодоление платформ (конечно же в предположении, что cheat-коды использовать нельзя).

### Пример

**input.txt**
```c++
3
1 100 80
```

**output.txt**
```c++
119
```

### [Решение](dp/I.cpp)

## 10. Калькулятор

Имеется калькулятор, который выполняет три операции:

   1. Прибавить к числу X единицу.
   2. Умножить число X на 2.
   3. Умножить число X на 3.
Определите, какое наименьшее число операций необходимо для того, чтобы получить из числа 1 заданное число N.

### Входные данные
Программа получает на вход одно число, не превосходящее 106.

### Выходные данные
Требуется вывести одно число: наименьшее количество искомых операций.

### Пример

**input.txt**
```c++
32718
```

**output.txt**
```c++
17
```

### [Решение](dp/J.cpp)

## 11. Гвоздики

В дощечке в один ряд вбиты гвоздики. Любые два гвоздика можно соединить ниточкой. Требуется соединить некоторые пары гвоздиков ниточками так, чтобы к каждому гвоздику была привязана хотя бы одна ниточка, а суммарная длина всех ниточек была минимальна.

### Входные данные
В первой строке входных данных записано число N
 — количество гвоздиков (2≤N≤100). В следующей строке заданы N
 чисел — координаты всех гвоздиков (неотрицательные целые числа, не превосходящие 10000).

### Выходные данные
Выведите единственное число — минимальную суммарную длину всех ниточек.

### Пример

**input.txt**
```c++
5
4 10 0 12 2
```

**output.txt**
```c++
6
```

### [Решение](dp/K.cpp)

## 12. Покупка билетов

За билетами на премьеру нового мюзикла выстроилась очередь из N человек, каждый из которых хочет купить 1 билет. На всю очередь работала только одна касса, поэтому продажа билетов шла очень медленно, приводя «постояльцев» очереди в отчаяние. Самые сообразительные быстро заметили, что, как правило, несколько билетов в одни руки кассир продаёт быстрее, чем когда эти же билеты продаются по одному. Поэтому они предложили нескольким подряд стоящим людям отдавать деньги первому из них, чтобы он купил билеты на всех.

Однако для борьбы со спекулянтами кассир продавала не более 3-х билетов в одни руки, поэтому договориться таким образом между собой могли лишь 2 или 3 подряд стоящих человека.

Известно, что на продажу i-му человеку из очереди одного билета кассир тратит Ai секунд, на продажу двух билетов — Bi секунд, трех билетов — Ci секунд. Напишите программу, которая подсчитает минимальное время, за которое могли быть обслужены все покупатели.

Обратите внимание, что билеты на группу объединившихся людей всегда покупает первый из них. Также никто в целях ускорения не покупает лишних билетов (то есть билетов, которые никому не нужны).

### Входные данные
На вход программы поступает сначала число N — количество покупателей в очереди (1≤N≤5000). Далее идет N троек натуральных чисел Ai, Bi, Ci. Каждое из этих чисел не превышает 3600. Люди в очереди нумеруются, начиная от кассы.

### Выходные данные
Требуется вывести одно число — минимальное время в секундах, за которое могли быть обслужены все покупатели.

### Пример

**input.txt**
```c++
5
5 10 15
2 10 15
5 5 5
20 20 1
20 1 1
```

**output.txt**
```c++
12
```

### [Решение](dp/L.cpp)

## 13. Двоичный поиск

Реализуйте алгоритм бинарного поиска.

### Входные данные
В первой строке входных данных содержатся натуральные числа N и K
(0<Н, K≤100000) Во второй строке задаются N
элементов первого массива, отсортированного по возрастанию, а в третьей строке – K элементов второго массива. Элементы обоих массивов - целые числа, каждое из которых по модулю не превосходит 109

### Выходные данные
Требуется для каждого из K чисел вывести в отдельную строку "YES", если это число встречается в первом массиве, и "NO" в противном случае.

### Пример

**input.txt**
```c++
10 5
1 2 3 4 5 6 7 8 9 10 
-2 0 4 9 12 
```

**output.txt**
```c++
NO
NO
YES
YES
NO
```

### [Решение](binsearch/A.cpp)

## 14. Мутанты

Уже долгое время в Институте Искусств, Мутантов и Информационных Технологий разводят милых разноцветных зверюшек. Для удобства каждый цвет обозначен своим номером, всего цветов не более 109
. В один из прекрасных дней в питомнике случилось чудо: все зверюшки выстроились в ряд в порядке возрастания цветов. Пользуясь случаем, лаборанты решили посчитать, сколько зверюшек каждого из запрошенных цветов живет в питомнике, и, по закону жанра, попросили вас написать программу, которая поможет им в решении этой нелегкой задачи.

### Входные данные
В первой строке входного файла содержится единственное число N
 (0≤N≤105) — количество зверюшек в Институте. В следующей строке находятся N упорядоченных по неубыванию неотрицательных целых чисел, не превосходящих 109 и разделенных пробелами — их цвета. В третьей строке файла записано число M
 (1≤M≤100000) — количество запросов вашей программе, в следующей строке через пробел записаны M
 целых неотрицательных чисел (не превышающих 109+1).

### Выходные данные
Выходной файл должен содержать M
 строчек. Для каждого запроса выведите число зверюшек заданного цвета в питомнике.

### Пример

**input.txt**
```c++
10
1 1 3 3 5 7 9 18 18 57
5
57 3 9 1 179 
```

**output.txt**
```c++
1
2
1
2
0
```

### [Решение](binsearch/F.cpp)

## 15. Очень Легкая Задача

Сегодня утром жюри решило добавить в вариант олимпиады еще одну, Очень Легкую Задачу. Ответственный секретарь Оргкомитета напечатал ее условие в одном экземпляре, и теперь ему нужно до начала олимпиады успеть сделать еще N копий. В его распоряжении имеются два ксерокса, один из которых копирует лист за х секунд, а другой – за y. (Разрешается использовать как один ксерокс, так и оба одновременно. Можно копировать не только с оригинала, но и с копии.) Помогите ему выяснить, какое минимальное время для этого потребуется.

### Входные данные
На вход программы поступают три натуральных числа N, x и y, разделенные пробелом (1 ≤ N ≤ 2∙108, 1 ≤ x, y ≤ 10).

### Выходные данные
Выведите одно число – минимальное время в секундах, необходимое для получения N копий.

### Пример

**input.txt**
```c++
5 1 2
```

**output.txt**
```c++
4
```

### [Решение](binsearch/B.cpp)

## 16. Провода

Дано N отрезков провода длиной L1, L2, ..., LN сантиметров. Требуется с помощью разрезания получить из них K равных отрезков как можно большей длины, выражающейся целым числом сантиметров. Если нельзя получить K отрезков длиной даже 1 см, вывести 0.

Ограничения: 1 <= N <= 10 000, 1 <= K <= 10 000, 100 <= Li <= 10 000 000, все числа целые.

### Входные данные
В первой строке находятся числа N и К. В следующих N строках - L1, L2, ..., LN, по одному числу в строке.

### Выходные данные
Вывести одно число - полученную длину отрезков.

### Пример

**input.txt**
```c++
4 11
802
743
457
539
```

**output.txt**
```c++
200
```

### [Решение](binsearch/C.cpp)

## 17. Коровы - в стойла

На прямой расположены стойла, в которые необходимо расставить коров так, чтобы минимальное расcтояние между коровами было как можно больше.

### Входные данные
В первой строке вводятся числа N (2<Н<10001)
 – количество стойл и K (1<К<Н)
 – количество коров. Во второй строке задаются N
 натуральных чисел в порядке возрастания – координаты стойл (координатыне превосходят 109)

### Выходные данные
Выведите одно число – наибольшее возможное допустимое расстояние.

### Пример

**input.txt**
```c++
6 3
2 5 7 11 15 20
```

**output.txt**
```c++
9
```

### [Решение](binsearch/D.cpp)

## 18. Дипломы

Когда Петя учился в школе, он часто участвовал в олимпиадах по информатике, математике и физике. Так как он был достаточно способным мальчиком и усердно учился, то на многих из этих олимпиад он получал дипломы. К окончанию школы у него накопилось n
 дипломов, причём, как оказалось, все они имели одинаковые размеры: w
 — в ширину и h
 — в высоту. Сейчас Петя учится в одном из лучших российских университетов и живёт в общежитии со своими одногруппниками. Он решил украсить свою комнату, повесив на одну из стен свои дипломы за школьные олимпиады. Так как к бетонной стене прикрепить дипломы достаточно трудно, то он решил купить специальную доску из пробкового дерева, чтобы прикрепить её к стене, а к ней — дипломы. Для того чтобы эта конструкция выглядела более красиво, Петя хочет, чтобы доска была квадратной и занимала как можно меньше места на стене. Каждый диплом должен быть размещён строго в прямоугольнике размером w
 на h
. Дипломы запрещается поворачивать на 90 градусов. Прямоугольники, соответствующие различным дипломам, не должны иметь общих внутренних точек. Требуется написать программу, которая вычислит минимальный размер стороны доски, которая потребуется Пете для размещения всех своих дипломов.

### Входные данные
Входной файл содержит три целых числа: w, h, n (1≤w,h,n≤109).

### Выходные данные
В выходной файл необходимо вывести ответ на поставленную задачу.

### Пример

**input.txt**
```c++
2 3 10
```

**output.txt**
```c++
9
```

### [Решение](binsearch/E.cpp)

## 19. Стек с защитой от ошибок

Реализуйте структуру данных "стек". Напишите программу, содержащую описание стека и моделирующую работу стека, реализовав все указанные здесь методы. Программа считывает последовательность команд и в зависимости от команды выполняет ту или иную операцию. После выполнения каждой команды программа должна вывести одну строчку. Возможные команды для программы:

#### push n
Добавить в стек число n (значение n задается после команды). Программа должна вывести ok.
#### pop
Удалить из стека последний элемент. Программа должна вывести его значение.
#### back
Программа должна вывести значение последнего элемента, не удаляя его из стека.
#### size
Программа должна вывести количество элементов в стеке.
#### clear
Программа должна очистить стек и вывести ok.
#### exit
Программа должна вывести bye и завершить работу.
Перед исполнением операций back и pop программа должна проверять, содержится ли в стеке хотя бы один элемент. Если во входных данных встречается операция back или pop, и при этом стек пуст, то программа должна вместо числового значения вывести строку error.
### Входные данные
Вводятся команды управления стеком, по одной на строке

### Выходные данные
Программа должна вывести протокол работы стека, по одному сообщению на строке

### Пример

**input.txt**
```c++
size
push 1
size
push 2
size
push 3
size
exit
```

**output.txt**
```c++
0
ok
1
ok
2
ok
3
bye
```

### [Решение](stack/A.cpp)

## 20. Правильная скобочная последовательность

Рассмотрим последовательность, состоящую из круглых, квадратных и фигурных скобок. Программа дожна определить, является ли данная скобочная последовательность правильной.

Пустая последовательность явлется правильной. Если A – правильная, то последовательности (A), [A], {A} – правильные. Если A и B – правильные последовательности, то последовательность AB – правильная.

### Входные данные
В единственной строке записана скобочная последовательность, содержащая не более 100000 скобок.

### Выходные данные
Если данная последовательность правильная, то программа должна вывести строку yes, иначе строку no.

### Пример

**input.txt**
```c++
[](){}([{}])
```

**output.txt**
```c++
yes
```

### [Решение](stack/B.cpp)

## 21. 5E: удалите скобки

Дана строка, составленная из круглых скобок. Определите, какое наименьшее количество символов необходимо удалить из этой строки, чтобы оставшиеся символы образовывали правильную скобочную последовательность.

### Входные данные
Во входном файле записана строка из круглых скобок. Длина строки не превосходит 100000 символов.

### Выходные данные
Выведите единственное целое число — ответ на поставленную задачу.

### Пример

**input.txt**
```c++
))(((
```

**output.txt**
```c++
5
```

### [Решение](stack/C.cpp)

## 22. Постфиксная запись

В постфиксной записи (или обратной польской записи) операция записывается после двух операндов. Например, сумма двух чисел A и B записывается как A B +. Запись B C + D * обозначает привычное нам (B + C) * D, а запись A B C + D * + означает A + (B + C) * D. Достоинство постфиксной записи в том, что она не требует скобок и дополнительных соглашений о приоритете операторов для своего чтения.

### Входные данные
В единственной строке записано выражение в постфиксной записи, содержащее цифры и операции +, -, *. Цифры и операции разделяются пробелами. В конце строки может быть произвольное количество пробелов.

### Выходные данные
Необходимо вывести значение записанного выражения.

### Пример

**input.txt**
```c++
8 9 + 1 7 - *
```

**output.txt**
```c++
-102
```

### [Решение](stack/D.cpp)

## 23. Сортировка вагонов
К тупику со стороны пути 1 подъехал поезд. Разрешается отцепить от поезда один или сразу несколько первых вагонов и завезти их в тупик (при желании, можно даже завезти в тупик сразу весь поезд). После этого часть из этих вагонов вывезти в сторону пути 2. После этого можно завезти в тупик еще несколько вагонов и снова часть оказавшихся вагонов вывезти в сторону пути 2. И так далее (так, что каждый вагон может лишь один раз заехать с пути 1 в тупик, а затем один раз выехать из тупика на путь 2). Заезжать в тупик с пути 2 или выезжать из тупика на путь 1 запрещается. Нельзя с пути 1 попасть на путь 2, не заезжая в тупик.


Известно, в каком порядке изначально идут вагоны поезда. Требуется с помощью указанных операций сделать так, чтобы вагоны поезда шли по порядку (сначала первый, потом второй и т.д., считая от головы поезда, едущего по пути 2 в сторону от тупика).

### Входные данные
Вводится число N — количество вагонов в поезде (1≤N≤2000). Дальше идут номера вагонов в порядке от головы поезда, едущего по пути 1 в сторону тупика. Вагоны пронумерованы натуральными числами от 1 до N, каждое из которых встречается ровно один раз.

### Выходные данные
Если сделать так, чтобы вагоны шли в порядке от 1 до N, считая от головы поезда, когда поезд поедет по пути 2 из тупика, можно, выведите действия, которые нужно проделать с поездом. Каждое действие описывается двумя числами: типом и количеством вагонов:

если нужно завезти с пути 1 в тупик K вагонов, должно быть выведено сначала число 1, а затем — число K (K≥1),
если нужно вывезти из тупика на путь 2 K вагонов, должно быть выведено сначала число 2, а затем — число K (K≥1).
Если возможно несколько последовательностей действий, приводящих к нужному результату, выведите любую из них.

Если выстроить вагоны по порядку невозможно, выведите одно число 0.

### Пример

**input.txt**
```c++
4
4 1 3 2
```

**output.txt**
```c++
1 2
2 1
1 2
2 3
```

### [Решение](stack/E.cpp)

## 24. Великое Лайнландское переселение

Лайнландия представляет из себя одномерный мир, являющийся прямой, на котором распологаются N городов, последовательно пронумерованных от 0 до N - 1 . Направление в сторону от первого города к нулевому названо западным, а в обратную "— восточным.

Когда в Лайнландии неожиданно начался кризис, все были жители мира стали испытывать глубокое смятение. По всей Лайнландии стали ходить слухи, что на востоке живётся лучше, чем на западе.

Так и началось Великое Лайнландское переселение. Обитатели мира целыми городами отправились на восток, покинув родные улицы, и двигались до тех пор, пока не приходили в город, в котором средняя цена проживания была меньше, чем в родном.

### Входные данные
В первой строке дано одно число N ( 2 ≤ N ≤ 10 5 ) "— количество городов в Лайнландии. Во второй строке дано N чисел a i ( 0 ≤ a i ≤ 10 9 ) "— средняя цена проживания в городах с нулевого по ( N - 1) -ый соответственно.

### Выходные данные
Для каждого города в порядке с нулевого по ( N - 1) -ый выведите номер города, в который переселятся его изначальные жители. Если жители города не остановятся в каком-либо другом городе, отправившись в Восточное Бесконечное Ничто, выведите - 1.

### Пример

**input.txt**
```c++
10
1 2 3 2 1 4 2 5 3 1
```

**output.txt**
```c++
-1 4 3 4 -1 6 9 8 9 -1 
```

### [Решение](stack/F.cpp)

## 25. Гистограмма

Гистограмма является многоугольником, сформированным из последовательности прямоугольников, выровненных на общей базовой линии. Прямоугольники имеют равную ширину, но могут иметь различные высоты. Например, фигура слева показывает гистограмму, которая состоит из прямоугольников с высотами 2, 1, 4, 5, 1, 3, 3. Все прямоугольники на этом рисунке имеют ширину, равную 1.


Обычно гистограммы используются для представления дискретных распределений, например, частоты символов в текстах. Отметьте, что порядок прямоугольников очень важен. Вычислите область самого большого прямоугольника в гистограмме, который также находится на общей базовой линии. На рисунке справа заштрихованная фигура является самым большим выровненным прямоугольником на изображенной гистограмме.

### Входные данные
В первой строке входного файла записано число N(0 < N ≤ 106) - количество прямоугольников гистограммы. Затем следует N
целых чисел h1...hn, где 0 ≤ hi ≤ 109. Эти числа обозначают высоты прямоугольников гистограммы слева направо. Ширина каждого прямоугольника равна 1

### Выходные данные
Выведите площадь самого большого прямоугольника в гистограмме. Помните, что этот прямоугольник должен быть на общей базовой линии.

### Пример

**input.txt**
```c++
8
7 2 1 4 5 1 3 3
```

**output.txt**
```c++
8
```

### [Решение](stack/G.cpp)

## 26. Очередь с защитой от ошибок

Реализуйте структуру данных "очередь". Напишите программу, содержащую описание очереди и моделирующую работу очереди, реализовав все указанные здесь методы.  Программа считывает последовательность команд и в зависимости от команды выполняет ту или иную операцию. После выполнения каждой команды программа должна вывести одну строчку. Возможные команды для программы:

#### push n
Добавить в очередь число n (значение n задается после команды). Программа должна вывести ok.
#### pop
Удалить из очереди первый элемент. Программа должна вывести его значение.
#### front
Программа должна вывести значение первого элемента, не удаляя его из очереди.
#### size
Программа должна вывести количество элементов в очереди.
#### clear
Программа должна очистить очередь и вывести ok.
#### exit
Программа должна вывести bye и завершить работу.
Перед исполнением операций front и pop программа должна проверять, содержится ли в очереди хотя бы один элемент. Если во входных данных встречается операция front или pop, и при этом очередь пуста, то программа должна вместо числового значения вывести строку error.

### Входные данные
Вводятся команды управления очередью, по одной на строке

### Выходные данные
Требуется вывести протокол работы очереди, по одному сообщению на строке

### Пример

**input.txt**
```c++
size
push 1
size
push 2
size
push 3
size
exit
```

**output.txt**
```c++
0
ok
1
ok
2
ok
3
bye
```

### [Решение](queue/A.cpp)

## 27. Игра в пьяницу

В игре в пьяницу карточная колода раздается поровну двум игрокам. Далее они вскрывают по одной верхней карте, и тот, чья карта старше, забирает себе обе вскрытые карты, которые кладутся под низ его колоды. Тот, кто остается без карт – проигрывает.

Для простоты будем считать, что все карты различны по номиналу, а также, что самая младшая карта побеждает самую старшую карту ("шестерка берет туза").

Игрок, который забирает себе карты, сначала кладет под низ своей колоды карту первого игрока, затем карту второго игрока (то есть карта второго игрока оказывается внизу колоды).

Напишите программу, которая моделирует игру в пьяницу и определяет, кто выигрывает. В игре участвует 10 карт, имеющих значения от 0 до 9, большая карта побеждает меньшую, карта со значением 0 побеждает карту 9.

### Входные данные
Программа получает на вход две строки: первая строка содержит 5 чисел, разделенных пробелами — номера карт первого игрока, вторая – аналогично 5 карт второго игрока. Карты перечислены сверху вниз, то есть каждая строка начинается с той карты, которая будет открыта первой.

### Выходные данные
Программа должна определить, кто выигрывает при данной раздаче, и вывести слово first или second, после чего вывести количество ходов, сделанных до выигрыша. Если на протяжении 106 ходов игра не заканчивается, программа должна вывести слово botva.

### Пример

**input.txt**
```c++
1 3 5 7 9
2 4 6 8 0
```

**output.txt**
```c++
second 5
```

### [Решение](queue/B.cpp)

## 28. Дек с защитой от ошибок

Реализуйте структуру данных "дек".  Напишите программу, содержащую описание дека и моделирующую работу дека, реализовав все указанные здесь методы. Программа считывает последовательность команд и в зависимости от команды выполняет ту или иную операцию. После выполнения каждой команды программа должна вывести одну строчку. Возможные команды для программы:

#### push_front
Добавить (положить) в начало дека новый элемент. Программа должна вывести ok.

#### push_back
Добавить (положить) в конец дека новый элемент. Программа должна вывести ok.

#### pop_front
Извлечь из дека первый элемент. Программа должна вывести его значение.

#### pop_back
Извлечь из дека последний элемент. Программа должна вывести его значение.

#### front
Узнать значение первого элемента (не удаляя его). Программа должна вывести его значение.

#### back
Узнать значение последнего элемента (не удаляя его). Программа должна вывести его значение.

#### size
Вывести количество элементов в деке.

#### clear
Очистить дек (удалить из него все элементы) и вывести ok.

#### exit
Программа должна вывести bye и завершить работу.

Гарантируется, что количество элементов в деке в любой момент не превосходит 100. Перед исполнением операций pop_front, pop_back, front, back программа должна проверять, содержится ли в деке хотя бы один элемент. Если во входных данных встречается операция pop_front, pop_back, front, back, и при этом дек пуст, то программа должна вместо числового значения вывести строку error.

### Входные данные
Вводятся команды управления деком, по одной на строке.

### Выходные данные
Требуется вывести протокол работы дека, по одному сообщению на строке

### Пример

**input.txt**
```c++
size
push_back 1
size
push_back 2
size
push_front 3
size
exit
```

**output.txt**
```c++
0
ok
1
ok
2
ok
3
bye
```

### [Решение](queue/C.cpp)

## 29. Гоблины и шаманы

Гоблины Мглистых гор очень любях ходить к своим шаманам. Так как гоблинов много, к шаманам часто образуются очень длинные очереди. А поскольку много гоблинов в одном месте быстро образуют шумную толку, которая мешает шаманам проводить сложные медицинские манипуляции, последние решили установить некоторые правила касательно порядка в очереди.

Обычные гоблины при посещении шаманов должны вставать в конец очереди. Привилегированные же гоблины, знающие особый пароль, встают ровно в ее середину, причем при нечетной длине очереди они встают сразу за центром.

Так как гоблины также широко известны своим непочтительным отношением ко всяческим правилам и законам, шаманы попросили вас написать программу, которая бы отслеживала порядок гоблинов в очереди.

### Входные данные
В первой строке входных данный записано число N
(1≤N≤105) - количество запросов к программе. Следующие N
строк содержат описание запросов в формате:

"+ i" - гоблин с номером i
(1≤i≤N) встает в конец очереди.
"* i" - привилегированный гоблин с номером i встает в середину очереди.
"-" - первый гоблин из очереди уходит к шаманам. Гарантируется, что на момент такого запроса очередь не пуста.

### Выходные данные
Для каждого запроса типа "-" программа должна вывести номер гоблина, который должен зайти к шаманам.

### Пример

**input.txt**
```c++
7
+ 1
+ 2
-
+ 3
+ 4
-
-
```

**output.txt**
```c++
1
2
3
```

### [Решение](queue/D.cpp)

## 30. Пирамидальная сортировка

Отсортируйте данный массив. Используйте пирамидальную сортировку.

### Входные данные
Первая строка входных данных содержит количество элементов в массиве N,  N  ≤  105. Далее задаются N целых чисел, не превосходящих по абсолютной величине 109.

### Выходные данные
Выведите эти числа в порядке неубывания.

### Пример

**input.txt**
```c++
6
1 0 9 2 3 5
```

**output.txt**
```c++
0 1 2 3 5 9
```

### [Решение](heap/A.cpp)

## 31. Хипуй!

В этой задаче вам необходимо организовать структуру данных Heap для хранения целых чисел, над которой определены следующие операции:

   a- Insert(k) – добавить в Heap число k (1 ≤  k ≤ 1000000) ;
   b- Extract достать из Heap наибольшее число (удалив его при этом).

### Входные данные
В первой строке содержится количество команд N (1 ≤  N ≤ 100000), далее следуют N команд, каждая в своей строке.  Команда может иметь  формат: “0 <число>” или “1”, обозначающий, соответственно, операции Insert(<число>) и Extract. Гарантируется, что при выполенении команды Extract в структуре находится по крайней мере один элемент.

### Выходные данные
Для каждой команды извлечения необходимо отдельной строкой вывести число, полученное при выполнении команды Extract.

### Пример

**input.txt**
```c++
2
0 1000
1
```

**output.txt**
```c++
1000
```

### [Решение](heap/B.cpp)

## 32. Минимум на отрезке

Рассмотрим последовательность целых чисел длины N. По ней с шагом 1 двигается “окно” длины K, то есть сначала в “окне” видно первые K чисел, на следующем шаге в “окне” уже будут находиться K чисел, начиная со второго, и так далее до конца последовательности. Требуется для каждого положения “окна” определить минимум в нём.

### Входные данные
В первой строке входных данных содержатся два числа N и K (1 ≤  N ≤  150000, 1 ≤ K ≤ 10000, K ≤  N) – длины последовательности и “окна”, соответственно. На следующей строке находятся N чисел – сама последовательность.

### Выходные данные
Выходые данные должны содержать N − K + 1 строк – минимумы для каждого положения “окна”.

### Пример

**input.txt**
```c++
7 3
1 3 2 4 5 3 1
```

**output.txt**
```c++
1
2
2
3
1
```

### [Решение](heap/C.cpp)

## 33. Цветной дождь

В Банановой республике очень много холмов, соединенных мостами. На химическом заводе произошла авария, в результате чего испарилось экспериментальное удобрение "зован". На следующий день выпал цветной дождь, причем он прошел только над холмами. В некоторых местах падали красные капли, в некоторых – синие, а в остальных – зеленые, в результате чего холмы стали соответствующего цвета. Президенту Банановой республики это понравилось, но ему захотелось покрасить мосты между вершинами холмов так, чтобы мосты были покрашены в цвет холмов, которые они соединяют. К сожалению, если холмы разного цвета, то покрасить мост таким образом не удастся. Посчитайте количество таких "плохих" мостов.

### Входные данные
В  первой строке входных данных содержится число N (0 < N ≤ 100) – количество холмов. Далее идет матрица смежности, описывающая наличие мостов между холмами (1 – мост есть, 0 – нет). После матрицы смежности идёт пустая строка, и в последней строке записано N чисел, обозначающих цвет холмов: 1 – красный; 2 – синий; 3 – зеленый.

### Выходные данные
Выведите одно число – количество "плохих" мостов.

### Пример

**input.txt**
```c++
7
0 1 0 0 0 1 1 
1 0 1 0 0 0 0 
0 1 0 0 1 1 0 
0 0 0 0 0 0 0 
0 0 1 0 0 1 0 
1 0 1 0 1 0 0 
1 0 0 0 0 0 0 

1 1 1 1 1 3 3 
```

**output.txt**
```c++
4
```

### [Решение](graph/A.cpp)

## 34. Светофорчики

В подземелье M тоннелей и N перекрестков, каждый тоннель соединяет какие-то два перекрестка. Мышиный король решил поставить по светофору в каждом тоннеле перед каждым перекрестком. Напишите программу, которая посчитает, сколько светофоров должно быть установлено на каждом из перекрестков. Перекрестки пронумерованы числами от 1 до N.

### Входные данные
Первая строка входных данных содержит два числа N и M (0 < N ≤ 100, 0 ≤ M ≤ N*(N – 1)/2). В каждой из следующих M строк записаны по два числа i и j (1 ≤ i,j ≤ N), которые означают, что перекрестки i и j соединены тоннелем.

### Выходные данные
Требуется вывести N чисел: k-ое число означает количество светофоров на k-ом перекрестке.

### Примечание
Можно считать, что любые два перекрестка соединены не более, чем одним тоннелем. Нет тоннелей от перекрестка i до него самого.

### Пример

**input.txt**
```c++
7 10
5 1
3 2
7 1
5 2
7 4
6 5
6 4
7 5
2 1
5 3
```

**output.txt**
```c++
3 3 2 2 5 2 3 
```

### [Решение](graph/B.cpp)

## 35. Полный граф

Неориентированный граф с кратными рёбрами называется полным, если любая пара его различных вершин соединена хотя бы одним ребром. Для заданного списком ребер графа проверьте, является ли он полным.

### Входные данные
Сначала вводятся числа n ( 1≤n≤100
 ) – количество вершин в графе и m ( 1≤m≤n(n−1)/2
 ) – количество ребер. Затем следует m пар чисел – ребра графа.

### Выходные данные
Выведите  «YES», если граф является полным, и «NO» в противном случае.

### Пример

**input.txt**
```c++
5 18
1 2
1 3
1 3
1 4
1 4
1 4
1 5
1 5
2 3
2 4
2 4
2 5
3 4
3 4
3 4
3 5
3 5
4 5
```

**output.txt**
```c++
YES
```

### [Решение](graph/C.cpp)

## 36. Истоки и стоки

Напомним, что вершина ориентированного графа называется истоком, если в нее не входит ни одно ребро и стоком, если из нее не выходит ни одного ребра.

Ориентированный граф задан матрицей смежности. Найдите все вершины графа, которые являются истоками, и все его вершины, которые являются стоками.

### Входные данные
Сначала вводится число n (1 ≤ n ≤ 100) – количество вершин в графе, а затем n строк по n чисел, каждое из которых равно 0 или 1, – его матрица смежности.

### Выходные данные
Вначале выведите k – число истоков в графе и затем k чисел – номера вершин, которые являются истоками, в возрастающем порядке. Затем выведите информацию о стоках в том же порядке.

### Пример

**input.txt**
```c++
5
0 0 0 0 0 
0 0 0 0 1 
1 1 0 0 0 
0 0 0 0 0 
0 0 0 0 0
```

**output.txt**
```c++
2
3
4
3
1
4
5
```

### [Решение](graph/D.cpp)

## 37. Издевательство

Штирлиц ехал на машине, увидел голосующего Бормана, и проехал мимо. Через некоторое время он снова увидел голосующего Бормана, и снова проехал мимо. Вскоре он опять увидел голосующего Бормана.
 - Издевается! - подумал Борман.
 - Кольцевая! - догадался Штирлиц.

В городе N площадей. Любые две площади соединены между собой ровно одной дорогой с двусторонним движением. В этом городе живет Штирлиц. У Штирлица есть хобби - он любит воскресным утром выйти из дома, сесть в машину, выбрать какой-нибудь кольцевой маршрут, проходящий ровно по трем площадям (то есть сначала он едет с какой-то площади на какую-то другую, потом - на третью, затем возвращается на начальную, и опять едет по этому маршруту). Он воображает, что где-то на этом пути стоит Борман. И так вот ездит Штирлиц все воскресенье, пока голова не закружится, и радуется...

Естественно, что Штирлицу хочется проезжать мимо точки, в которой, как он воображает, стоит Борман, как можно чаще. Для этого, естественно, выбранный Штирлицем маршрут должен быть как можно короче. Напишите программу, которая выберет оптимальный для Штирлица маршрут.

### Входные данные
В первой строке задается  число N (3 <= N <= 100). В последующих строках содержится матрица NxN расстояний между площадями (число в позиции i,j обозначает длину дороги, соединяющей i-ую и j-ую площади). Все числа в матрице (кроме стоящих на главной диагонали) - натуральные, не превышающие 1000. Матрица симметрична относительно главной диагонали, на главной диагонали стоят 0.

### Выходные данные
Требуется вывести три числа — номера площадей в оптимальном маршруте. Если маршрутов несколько, выведите любой из них.

### Пример

**input.txt**
```c++
5
0 1 9 9 2
1 0 9 9 9
9 9 0 9 9
9 9 9 0 9
2 9 9 9 0
```

**output.txt**
```c++
1 2 5
```

### [Решение](graph/E.cpp)

## 38. Транзитивность неориентированного графа

Напомним, что граф называется транзитивным, если всегда из того, что вершины u и v соединены ребром и вершины v и w соединены ребром следует, что вершины u и w соединены ребром.

Проверьте, что заданный неориентированный граф является транзитивным.

### Входные данные
Сначала вводятся числа n ( 1≤n≤100 ) – количество вершин в графе и m ( 1≤m≤n(n−1)/2 )
– количество ребер. Затем следует m пар чисел – ребра графа.

### Выходные данные
Выведите  «YES», если граф является транзитивным, и «NO» в противном случае.

### Пример

**input.txt**
```c++
5 1
2 5
```

**output.txt**
```c++
YES
```

### [Решение](graph/F.cpp)
