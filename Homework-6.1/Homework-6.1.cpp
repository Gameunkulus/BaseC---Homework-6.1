// Homework-6.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h>
#include "Calc.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");

        double num1 = 0.0;
        double num2 = 0.0;
        int choose = 0;
        
        cout << "Введите первое число: ";
        cin >> num1;
        cout << "Введите второе число: ";
        cin >> num2;

        cout << "Выберите операцию(1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень) : ";
        cin >> choose;

        switch (choose) {
        case 1: {
            cout << num1 << " плюс " << num2 << " равно " << add(num1, num2) << endl;
            break;
        }
        case 2: {
            cout << num1 << " минус " << num2 << " равно " << subtract(num1, num2) << endl;
            break;
        }
        case 3: {
            cout << num1 << " помноженное на " << num2 << " равно " << multiply(num1, num2) << endl;
            break;
        }
        case 4: {
            cout << num1 << " деленное на " << num2 << " равно " << divide(num1, num2) << endl;
            break;
        }
        case 5: {
            cout << num1 << " в степени " << num2 << " равно " << expPow(num1, num2) << endl;
            break;
        }
        default: {
            cout << "Данной функции нет" << endl;
        }
        
    }


    
}


