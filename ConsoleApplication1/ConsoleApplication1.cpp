// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
     
#include <iostream>
    using namespace std;

    // Функция вычисления среднего гармонического двух чисел
    double sredgarm(double a, double b) {
        return 2 / (1 / a + 1 / b);
    }

    int main() {
        setlocale(LC_ALL, "Rus");
        std::cout << "Задание №1" << std::endl;
        // Ввод чисел
        double a, b;
        std::cout << "Введите два числа через пробел: ";
        std::cin >> a >> b;
        std::cout << "Результат вычисления среднего гармонического двух чисел: " << sredgarm(a, b); // Вывод результата

        std::cout << endl;
        return 0;

}
