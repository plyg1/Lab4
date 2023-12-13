#include <iostream>
#include <Windows.h>
using namespace std;

// Декларація функцій
bool CheckInput(double x, double y);
bool IsInSecondQuadrant(double x, double y);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y;

    // Введення координат точки
    cout << "Введіть координати точки (x, y): ";
    cin >> x >> y;

    // Перевірка введених даних
    if (CheckInput(x, y)) {
        // Виклик функції для перевірки, чи точка в другій координатній чверті
        if (IsInSecondQuadrant(x, y)) {
            cout << "Точка знаходиться в другій координатній чверті." << endl;
        }
        else {
            cout << "Точка не знаходиться в другій координатній чверті." << endl;
        }
    }
    else {
        cout << "Некоректні вхідні дані. Будь ласка, введіть числові значення." << endl;
    }

    return 0;
}

// Визначення функції перевірки вхідних даних
bool CheckInput(double x, double y) {
    return cin.good(); // Перевірка, чи введені дані є числами
}

// Визначення функції перевірки, чи точка в другій координатній чверті
bool IsInSecondQuadrant(double x, double y) {
    return (x < 0) && (y > 0);
}
