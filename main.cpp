#include <iostream>
#include <Windows.h> //для русского вывода фраз
#define _USE_MATH_DEFINES // тоже для числа пи

void tr(int a, int b, int c);

#include <math.h> //для числа пи
#include <wingdi.h>
#include <vector>

////1. Вычислить площадь трапеции с основаниями b1 и b2 и высотой h.
void task1(){ // функция выполняющая 1е задание
    int b1, b2, h, S; // объявляем целочисленные переменные
    std::cout << "ЗАДАНИЕ 1" << std::endl; // вывод на экран фразы
    std::cout << "Введите основание 1 (h1):" << std::endl; // вывод на экран фразы
    std::cin >> b1; // ввод с консоли значения 1ого основания
    std::cout << "Введите основание 2 (h2):"<< std::endl; // вывод на экран фразы
    std::cin >> b2; // ввод с консоли значения 2го основания
    std::cout << "Введите высоту трапеции:"<< std::endl; // вывод фразы на экран
    std::cin >> h; // ввод с консоли знаения h
    S = (h*(b1+b2))/2; //формула площади
    std::cout << "Площадь трапеции:"<< std::endl;
    std::cout << S << std::endl;
}

////2. Вычислить длину окружности и площадь круга радиуса г
void task2(){ // функция выполняющая 2е задание
    int r; // объявляем целочисленную переменную r (радиус)
    std::cout << "ЗАДАНИЕ 2" << std::endl; // вывод на экран фразы
    std::cout << "Введите радиус:" << std::endl; // вывод на экран фразы
    std::cin >> r; // ввод с консоли значения радиуса
    double p = M_PI; // инициализируем переменную р как число пи(из библиотеки)
    double l;
    l = 2*p*r;
    std::cout << "Длина окружности:"<< std::endl;
    std::cout << l << std::endl;

    double S;
    S = p*r*r;
    std::cout << "Площадь круга:"<< std::endl;
    std::cout << S << std::endl;
}

////3. Вычислить площадь прямоугольного треугольника и гипотенузу.
void task3(){ // функция выполняющая 3е задание
    int a, b, S;// объявляем целочисленные переменные
    double c;
    std::cout << "ЗАДАНИЕ 3" << std::endl; // вывод на экран фразы
    std::cout << "Введите 1ю сторону:" << std::endl; // вывод на экран фразы
    std::cin >> a; // ввод с консоли значения 1ой стороны
    std::cout << "Введите 2ю сторону:"<< std::endl; // вывод на экран фразы
    std::cin >> b; // ввод с консоли значения 2ой стороны
    S = a*b/2;
    std::cout << "Площадь треугольника:"<< std::endl;
    std::cout << S << std::endl;

    c = sqrt(a*a+b*b); // используем sqrt чтобы найти квадрат выражения
    std::cout << "Длина гипотенузы:"<< std::endl;
    std::cout << c << std::endl;
}

////4. Дано десятичное четырехзначное число. Найти сумму его цифр
void task4(){
    int n;
    std::cout << "ЗАДАНИЕ 4" << std::endl; // вывод на экран фразы
    std::cout << "Введите 4ех значное число:" << std::endl; // вывод на экран фразы
    std::cin >> n; // ввод с консоли значения 1ой стороны
    std::vector<int> digits; //создаем вектор с таким количеством значений, как полная длина ввода, и создает один элемент для каждой цифры

    while (n != 0) { //цикл который поочереди отделяет с последней цифры число и заносит каждое из них в вектор
        digits.insert(digits.begin(), n % 10);
        n /= 10;
    }

    std::cout << std::endl;
    int a = digits[0]; // присваиваем 0му элементу знпение 1ой переменной в веторе
    int b = digits[1];
    int c = digits[2];
    int d = digits[3];
    int sum = a+b+c+d;
    std::cout << "Сумма цифр:"<< std::endl;
    std::cout << sum << std::endl;
}

////5. Выполнить переход от декартовых координат к полярным
void task5(){
    int a;
    int b;
    std::cout << "ЗАДАНИЕ 5" << std::endl; // вывод на экран фразы
    std::cout << "Введите 1ю координату:" << std::endl; // вывод на экран фразы
    std::cin >> a; // ввод с консоли значения 1ого основания
    std::cout << "Введите 2ю координату:"<< std::endl; // вывод на экран фразы
    std::cin >> b; // ввод с консоли значения 1ого основания
    double p = sqrt(a*a+b*b); // формулы в интернете нашла, хехе
    double q = atan(b/a);
    std::cout << "Новые координаты:"<< std::endl;
    std::cout << p << q << std::endl;
}

////6. Выполнить переход от полярных координат к декартовым.
void task6(){
    int p;
    int f;
    std::cout << "ЗАДАНИЕ 6" << std::endl;
    std::cout << "Введите 1ю координату:" << std::endl;
    std::cin >> p;
    std::cout << "Введите 2ю координату:"<< std::endl;
    std::cin >> f;
    double x = p* cos(f); //формулы из интернета
    double y = p* sin(f);  // проблема этого задани была именно в поиске этих формул хехе
    std::cout << "Новые координаты:"<< std::endl;
    std::cout << x<<y;
}

////7. Найти корни квадратного уравнения.
void task7(){
    int a, b, c;
    std::cout << "ЗАДАНИЕ 7" << std::endl;
    std::cout << "Введите коеффициент а:" << std::endl;
    std::cin >> a;
    std::cout << "Введите коеффициент b:"<< std::endl;
    std::cin >> b;
    std::cout << "Введите коеффициент с:" << std::endl;
    std::cin >> c;
    double D = (b*b)-(4*a*c); // ищем дискриминант
    if (D<0){
        std::cout << "Нет корней" << std::endl;
    } else {
        double x1 = (-b + sqrt(D))/(2*a);
        double x2 = (-b - sqrt(D))/(2*a);
        if (x1 == x2){ // в случае если дискриминант равен 0, у нас корни равны друг другу, а значит есть всего 1 корень
            std::cout << "Значение корня:"<< std::endl;
            std::cout << x1 << std::endl;
        } else {
            std::cout << "Значения корней:" << std::endl;
            std::cout << x1 << x2 << std::endl;
        }
    }
}

////8. Имеется треугольник со сторонами а, b, с. Найти медианы треугольника, сторонами которого
////являются медианы исходного треугольника.
void task8(){
    int a, b, c;
    std::cout << "ЗАДАНИЕ 8" << std::endl;
    std::cout << "Введите сторону а:" << std::endl;
    std::cin >> a;
    std::cout << "Введите сторону b:"<< std::endl;
    std::cin >> b;
    std::cout << "Введите сторону с:" << std::endl;
    std::cin >> c;
    int mc = sqrt(((2*a*a)+(2*b*b)-(c*c))/4); //находим медианы исходного треугольника
    int ma = sqrt(((2*c*c)+(2*b*b)-(a*a))/4);
    int mb = sqrt(((2*a*a)+(2*c*c)-(b*b))/4);
    int MC = sqrt(((2*mc*mc)+(2*ma*ma)-(mb*mb))/4); // находим медианы треугольника, у которого стороны это медтаны
    int MA = sqrt(((2*mb*mb)+(2*ma*ma)-(mc*mc))/4);
    int MB = sqrt(((2*mc*mc)+(2*mb*mb)-(ma*ma))/4);
    std::cout << "Стороны данного треугольника равны:" << std::endl;
    std::cout << MC << MA << MB << std::endl;
}

////9. Идет k-я секунда суток. Определить, сколько целых часов и целых минут прошло с начала суток
void task9(){
    int sec;
    std::cout << "ЗАДАНИЕ 9" << std::endl;
    std::cout << "Введите количество секунд:" << std::endl;
    std::cin >> sec;
    int min = sec /60; //ищем целочисленное количество минут
    float hour = min / 60;  // считаем целые часы
    min = hour*min-hour*60; // это для того чтобы поситать сколько целых мнут у нас
    std::cout << "Количество полных часов и минут:" << std::endl;
    std::cout << hour << "." << min << std::endl;
}

//// 10. Определить, является ли треугольник со сторонами a, b, c равнобедренным.
void task10(){
    int a, b, c;
    std::cout << "ЗАДАНИЕ 10" << std::endl;
    std::cout << "Введите сторону а:" << std::endl;
    std::cin >> a;
    std::cout << "Введите сторону b:"<< std::endl;
    std::cin >> b;
    std::cout << "Введите сторону с:" << std::endl;
    std::cin >> c;
    if (a+b>=c){ // тут мы проверяем существование самого треугольника
        if (a+c>=b){
            if (b+c>=a){
                tr(a,b,c); // проверка на равнобедренность в отдельной функции
            }else {
                std::cout << "Такого треугольника не существует." << std::endl;
            }
        }else {
            std::cout << "Такого треугольника не существует." << std::endl;
        }
    }else {
        std::cout << "Такого треугольника не существует." << std::endl;
    }
}

void tr(int a, int b, int c) {
    if (a==b){ // а тут уже проверка на равнобедренность
        std::cout << "Треугольник равнобедренный!" << std::endl;
    } else {
        if (b==c){
            std::cout << "Треугольник равнобедренный!" << std::endl;
        } else {
            if (a==c){
                std::cout << "Треугольник равнобедренный!" << std::endl;
            } else {
                std::cout << "Треугольник НЕ равнобедренный(" << std::endl;
            }
        }
    }
}

//// 11. Вычислить стоимость покупки с учётом скидки. Скидка в 10% предоставляется, если сумма
////покупки превышает 1000 рублей.
void task11(){
    int price;
    std::cout << "ЗАДАНИЕ 11" << std::endl;
    std::cout << "Введите цену покупки:" << std::endl;
    std::cin >> price;
    if (price>1000){
        double sale = price*0.1;
        price = price-sale;
        std::cout << "Итоговая цена покупки:" << std::endl;
        std::cout << price << std::endl;
    } else {
        std::cout << "Итоговая цена покупки:" << std::endl;
        std::cout << price << std::endl;
    }
}

////12. Дать рекомендации пользователю с известным ростом и весом похудеть или поправиться, если
////идеальный вес определяется формулой (рост - 100 = идеальный вес).
void task12(){
    int height, weight;
    std::cout << "ЗАДАНИЕ 12" << std::endl;
    std::cout << "Введите рост:" << std::endl;
    std::cin >> height;
    std::cout << "Введите вес:" << std::endl;
    std::cin >> weight;
    int ideal = height - 100;
    if (ideal == weight){
        std::cout << "У вас идеальный вес!" << std::endl;
    } else {
        if (ideal > weight) {
            int nabor = ideal - weight;
            std::cout << "Вам нужно набрать " << nabor << " кг" << std::endl;
        } else{
            if (ideal<weight){
                int sbros = weight- ideal;
                std::cout << "Вам нужно сбросить " << sbros << " кг" << std::endl;
            }
        }
    }
}

//// 13. Программа генерирует два случайных числа в диапазоне от 1 до 9. Тестируемый вводит результат
////произведения этих чисел. Программа сообщает тестируемому ошибся он или нет. ВОПРОСИКИ!!! РАНДОМ НЕ РАНДОМ!!!
void task13(){
    std::cout << "ЗАДАНИЕ 13" << std::endl;
    srand((unsigned) time(NULL));
    int random_number1 = 1 + rand() % 10; // формула рандомного числа от 1 до 9
    int random_number2 = 1 + rand() % 10;
    std::cout << "Найдите произведение чисел " << random_number1 << " и " << random_number2 << std::endl;
    int resh;
    std::cin >> resh; // ввод пользователя его решения задачи
    int otvet = random_number1 * random_number2;
    if(resh == otvet){ // сравнение этого решения с верным ответом
        std::cout << "Решение верное" << std::endl;
    } else{
        std::cout << "Решение не верное" << std::endl;
    }
}

////14. Написать программу вычисления стоимости переговоров, если по субботам и воскресеньям
////предоставляется скидка 20%. Ввести продолжительность разговора и день недели(число от 1 до
////7).
void task14(){
    int dur, price, day;
    std::cout << "ЗАДАНИЕ 14" << std::endl;
    std::cout << "Введите стоимость часа переговоров:" << std::endl;
    std::cin >> price;
    std::cout << "Введите длительность переговоров:" << std::endl;
    std::cin >> dur;
    std::cout << "Введите день недели (циферками):" << std::endl;
    std::cin >> day;
    if ((day == 1)|| (day == 2) || (day == 3) || (day == 4) || (day == 5)){
        int cena = price*dur;
        std::cout<< "Скока денюшек нужно заплатить:" << std::endl;
        std::cout<< cena;
    } else {
        if ((day == 7) || (day == 6)){
            int cena = price *dur;
            int sale = cena*0.2;
            int newcena = cena-sale;
            std::cout<< "Скока денюшек нужно заплатить (со скидочкой):" << std::endl;
            std::cout<< newcena;
        } else {
            std::cout<< "Нет такого для недели(" << std::endl;
        }
    }
}

////15. Ввести с клавиатуры номер месяца. Выдать сообщение о названии месяца и времени года.
void task15(){
    int m;
    std::cout << "ЗАДАНИЕ 15" << std::endl;
    std::cout << "Введите номер месяца:" << std::endl;
    std::cin >> m;
    if ((m == 12) || (m == 1) || (m == 2)){
        std::cout << "Сейчас зима!" << std::endl;
        if (m == 12) {
            std::cout << "Декабрь, пока не очень холодно" << std::endl;
        } else {
            if (m == 1){
                std::cout << "Январь, уже холодно" << std::endl;
            } else {
                if (m == 2){
                    std::cout << "Февраль, просто холодно" << std::endl;
                }
            }
        }
    } else {
        if ((m == 3) || (m == 4) || (m == 5)) {
            std::cout << "Сейчас весна!" << std::endl;
            if (m == 3) {
                std::cout << "Март, все еще холодно" << std::endl;
            } else {
                if (m == 4){
                    std::cout << "Апрель, погода фи, не совутую выходить на улицу ;)" << std::endl;
                } else {
                    if (m == 5){
                        std::cout << "Май, теплеет :)" << std::endl;
                    }
                }
            }
        } else {
            if ((m == 6) || (m == 7) || (m == 8)) {
                std::cout << "Сейчас ЛЕТО!" << std::endl;
                if (m == 6) {
                    std::cout << "Июнь, сессия..." << std::endl;
                } else {
                    if (m == 7){
                        std::cout << "Июль, отходняк от сессии" << std::endl;
                    } else {
                        if (m == 8){
                            std::cout << "Август, подготовка к новому учебному году, а отдыхать то когда?" << std::endl;
                        }
                    }
                }
            } else {
                if ((m == 9) || (m == 10) || (m == 11)) {
                    std::cout << "Сейчас ОСЕНЬ!" << std::endl;
                    if (m == 9) {
                        std::cout << "Сентябрь, начало года учебного " << std::endl;
                    } else {
                        if (m == 10){
                            std::cout << "Октябрь, уже устал от универа" << std::endl;
                        } else {
                            if (m == 11){
                                std::cout << "Ноябрь, без комментариев..." << std::endl;
                            }
                        }
                    }
                }
            }
        }
    }
}

////16. Определить, является ли шестизначное число "счастливым"
void task16(){
    int n;
    std::cout << "ЗАДАНИЕ 16" << std::endl; // вывод на экран фразы
    std::cout << "Введите 6ти значное число:" << std::endl; // вывод на экран фразы
    std::cin >> n;
    std::vector<int> digits; //создаем вектор с таким количеством значений, как полная длина ввода, и создает один элемент для каждой цифры

    while (n != 0) { //цикл который поочереди отделяет с последней цифры число и заносит каждое из них в вектор
        digits.insert(digits.begin(), n % 10);
        n /= 10;
    }

    std::cout << std::endl;
    int a = digits[0]; // присваиваем 0му элементу знпение 1ой переменной в веторе
    int b = digits[1];
    int c = digits[2];
    int d = digits[3];
    int e = digits[4];
    int f = digits[5];
    int sum1 = a+b+c;
    int sum2 = d+e+f;
    if (sum1 == sum2){
        std::cout << "Число счастливое!!!"<< std::endl;
    } else {
        std::cout << "Число не счастливое("<< std::endl;
    }
}

////17. Написать программу, которая при вводе числа в диапазоне от 1 до 99 добавляет к нему слово
////"копейка" в правильной форме.
void task17(){
    int n;
    std::cout << "ЗАДАНИЕ 17" << std::endl; // вывод на экран фразы
    std::cout << "Введите число от 1 до 99:" << std::endl; // вывод на экран фразы
    std::cin >> n;
    if ((n == 1) || (n == 21) || (n == 31) || (n == 41) || (n == 51) || (n == 61) || (n == 71) || (n == 81) || (n == 91)){
        std::cout << n << " копейка" << std::endl;
    } else {
        if (((2 <= n) & (n <= 4)) || ((22 <= n) & (n <= 24)) || ((32 <= n) & (n <= 34)) || ((42 <= n) & (n <= 44)) || ((52 <= n) & (n <= 54)) || ((62 <= n) & (n <= 64)) || ((72 <= n) & (n <= 74)) || ((82 <= n) & (n <= 84)) || ((92 <= n) & (n <= 94))){
            std::cout << n << " копейки" << std::endl;
        } else {
            if (((5 <= n) & (n <= 20)) || ((25 <= n) & (n <= 30)) || ((35 <= n) & (n <= 40)) || ((45 <= n) & (n <= 50)) || ((55 <= n) & (n <= 60)) || ((65 <= n) & (n <= 70)) || ((75 <= n) & (n <= 80)) || ((85 <= n) & (n <= 90)) || ((95 <= n) & (n <= 99))){
                std::cout << n << " копеек" << std::endl;
            } else {
                std::cout << "Введенное число не входит в ранг от 1 до 99" << std::endl;
            }
        }
    }
}

////18. Дано натуральное четырехзначное число. Выяснить, является ли оно палиндромом.
void task18(){
    int n;
    std::cout << "ЗАДАНИЕ 18" << std::endl; // вывод на экран фразы
    std::cout << "Введите натуральное 4ех значное число:" << std::endl; // вывод на экран фразы
    std::cin >> n;
    std::vector<int> digits; //создаем вектор с таким количеством значений, как полная длина ввода, и создает один элемент для каждой цифры

    while (n != 0) { //цикл который поочереди отделяет с последней цифры число и заносит каждое из них в вектор
        digits.insert(digits.begin(), n % 10);
        n /= 10;
    }
    std::cout << std::endl;
    int a = digits[0]; // присваиваем 0му элементу знпение 1ой переменной в веторе
    int b = digits[1];
    int c = digits[2];
    int d = digits[3];
    if (a==b==c==d){
        std::cout << "Это полиндром" << std::endl;
    } else {
        if ((a==d) & (b==c)){
            std::cout << "Это полиндром" << std::endl;
        } else {
            std::cout << "Это НЕ полиндром" << std::endl;
        }
    }
}

////19. Дано трёхзначное число. Определить: 19.1 является ли произведение его цифр больше числа b
////19.2 кратна ли 7 сумма его цифр
void task19(){
    int n;
    int B;
    std::cout << "ЗАДАНИЕ 19" << std::endl; // вывод на экран фразы
    std::cout << "Введите 4ех значное число:" << std::endl; // вывод на экран фразы
    std::cin >> n;
    std::cout << "Введите число B:" << std::endl; // вывод на экран фразы
    std::cin >> B;
    std::vector<int> digits; //создаем вектор с таким количеством значений, как полная длина ввода, и создает один элемент для каждой цифры

    while (n != 0) { //цикл который поочереди отделяет с последней цифры число и заносит каждое из них в вектор
        digits.insert(digits.begin(), n % 10);
        n /= 10;
    }

    std::cout << std::endl;
    int a = digits[0]; // присваиваем 0му элементу знпение 1ой переменной в веторе
    int b = digits[1];
    int c = digits[2];
    int d = digits[3];
    int mul = a*b*c*d;
    int sum = a+b+c+d;
    if (mul >= B){
        std::cout << "Произведение больше числа В"<< std::endl;
    } else {
        std::cout << "Произведение меньше числа В "<< std::endl;
    }
    int krat;
    krat = sum % 7;
    if (krat == 0){
        std::cout << "Сумма цифр кратна 7"<< std::endl;
    } else {
        std::cout << "Сумма цифр НЕ кратна 7 "<< std::endl;
    }
}

////20. Даны вещественные положительные числа a, b, c, d. Выяснить, можно ли прямоугольник со
////сторонами a, b поместить в прямоугольник со сторонами c, d так, чтобы стороны одного
////прямоугольника были параллельны сторонам другого.
void task20(){
    int a, b, c, d;
    std::cout << "ЗАДАНИЕ 20" << std::endl;
    std::cout << "Введите сторону а первого прямоугольника:" << std::endl;
    std::cin >> a;
    std::cout << "Введите сторону b первого прямоугольника:"<< std::endl;
    std::cin >> b;
    std::cout << "Введите сторону с второго прямоугольника:" << std::endl;
    std::cin >> c;
    std::cout << "Введите сторону d второго прямоугольника:" << std::endl;
    std::cin >> d;
    if (((a<c) & (b<d)) || ((a<d) & (b<c))) {
        std::cout << "Все поместится" << std::endl;
    } else {
        std::cout << "Не поместится" << std::endl;
    }
}

////21.(По желанию) Написать программу, в которой выводятся размеры основных типов данных. Сделать
////выводы.
void task21(){
    std::cout << "int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "bool: " << sizeof(bool) << " bytes" << std::endl;
    std::cout << "char: " << sizeof(char) << " bytes" << std::endl;
    std::cout << "wchar_t: " << sizeof(wchar_t) << " bytes" << std::endl;
    std::cout << "char16_t: " << sizeof(char16_t) << " bytes" << std::endl;
    std::cout << "char32_t: " << sizeof(char32_t) << " bytes" << std::endl;
    std::cout << "short: " << sizeof(short) << " bytes" << std::endl;
    std::cout << "long: " << sizeof(long) << " bytes" << std::endl;
    std::cout << "long long : " << sizeof(long long) << " bytes" << std::endl;
    std::cout << "float: " << sizeof(float) << " bytes" << std::endl;
    std::cout << "double: " << sizeof(double ) << " bytes" << std::endl;
    std::cout << "long double: " << sizeof(long double) << " bytes" << std::endl;
    //// на основе данных, мы можем седлать вывод о том, что минимальное количество байтов весят переменные типа bool и char по 1му байту и самый максимальный тип long double (16 байтов), все типы в основном различаются друг от друга по весу.
}

void selection(){ //функция дающая возможность выбрать, какое задание выполнится
    int k;
    std::cout << "Введите номер задания:" << std::endl; // вывод на экран фразы
    std::cin >> k;
    if (k == 1){
        task1();
    } else {
        if(k == 2){
            task2();
        } else {
            if(k == 3){
                task3();
            } else {
                if(k == 4){
                    task4();
                } else {
                    if(k == 5){
                        task5();
                    } else {
                        if(k == 6){
                            task6();
                        } else {
                            if(k == 7){
                                task7();
                            }else {
                                if(k == 8){
                                    task8();
                                }else {
                                    if(k == 9){
                                        task9();
                                    }else {
                                        if(k == 10){
                                            task10();
                                        } else {
                                            if(k == 11){
                                                task11();
                                            } else {
                                                if(k == 12){
                                                    task12();
                                                } else {
                                                    if(k == 13){
                                                        task13();
                                                    } else {
                                                        if(k == 14){
                                                            task14();
                                                        } else {
                                                            if(k == 15){
                                                                task15();
                                                            }else {
                                                                if(k == 16){
                                                                    task16();
                                                                } else {
                                                                    if(k == 17){
                                                                        task17();
                                                                    } else {
                                                                        if(k == 18){
                                                                            task18();
                                                                        } else {
                                                                            if(k == 19){
                                                                                task19();
                                                                            } else {
                                                                                if(k == 20){
                                                                                    task20();
                                                                                } else {
                                                                                    if(k == 21){
                                                                                        task21();
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

}

int main() {
    SetConsoleOutputCP(CP_UTF8); //для русского вывода фраз
    selection(); // для выбора задания
    return 0;
}