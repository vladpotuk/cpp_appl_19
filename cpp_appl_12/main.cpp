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
        std::cerr << "�������: ĳ����� �� ����!" << std::endl;
        return 0.0;
    }
}

int main() {
    system("chcp 1251");
    system("cls");
    double (*operation[])(double, double) = { add, subtract, multiply, divide };

    while (true) {
        std::cout << "������ ��������:" << std::endl;
        std::cout << "1. ���������" << std::endl;
        std::cout << "2. ³�������" << std::endl;
        std::cout << "3. ��������" << std::endl;
        std::cout << "4. ĳ�����" << std::endl;
        std::cout << "5. �����" << std::endl;

        int choice;
        std::cin >> choice;

        if (choice < 1 || choice > 5) {
            std::cerr << "������������ ���� ��������. ��������� �� ���." << std::endl;
            continue;
        }

        if (choice == 5) {
            std::cout << "����� �� ������������ ������������. �� ���������!" << std::endl;
            break;
        }

        double a, b;
        std::cout << "������ ����� �����: ";
        std::cin >> a;
        std::cout << "������ ����� �����: ";
        std::cin >> b;

        
        double result = operation[choice - 1](a, b);

        std::cout << "���������: " << result << std::endl;
    }

    return 0;
}
