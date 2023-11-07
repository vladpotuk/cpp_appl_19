#include <iostream>
#include<Windows.h>
#include<cmath>


double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}


double multiply(double a, double b) {
    return a * b;
}


double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    }
    else {
        std::cerr << "Помилка: Ділення на нуль!" << std::endl;
        return 0.0;
    }
}

int main() {
    system("chcp 1251");
    system("cls");
    double (*operation[])(double, double) = { add, subtract, multiply, divide };

    while (true) {
        std::cout << "Оберіть операцію:" << std::endl;
        std::cout << "1. Додавання" << std::endl;
        std::cout << "2. Віднімання" << std::endl;
        std::cout << "3. Множення" << std::endl;
        std::cout << "4. Ділення" << std::endl;
        std::cout << "5. Вихід" << std::endl;

        int choice;
        std::cin >> choice;

        if (choice < 1 || choice > 5) {
            std::cerr << "Неправильний вибір операції. Спробуйте ще раз." << std::endl;
            continue;
        }

        if (choice == 5) {
            std::cout << "Дякую за використання калькулятора. До побачення!" << std::endl;
            break;
        }

        double a, b;
        std::cout << "Введіть перше число: ";
        std::cin >> a;
        std::cout << "Введіть друге число: ";
        std::cin >> b;

        
        double result = operation[choice - 1](a, b);

        std::cout << "Результат: " << result << std::endl;
    }

    return 0;
}
