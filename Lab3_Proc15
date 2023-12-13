#include <iostream>
#include <Windows.h>
using namespace std;

// Декларація функції
void ShiftLeft3(double& A, double& B, double& C);

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Виклик функції для двох наборів чисел
    double A1, B1, C1;
    double A2, B2, C2;

    cout << "Введіть числа для першого набору (A1, B1, C1): ";
    cin >> A1 >> B1 >> C1;

    cout << "Введіть числа для другого набору (A2, B2, C2): ";
    cin >> A2 >> B2 >> C2;

    // Виклик функції для першого набору
    ShiftLeft3(A1, B1, C1);
    cout << "Лівий циклічний зсув для першого набору: " << A1 << ", " << B1 << ", " << C1 << endl;

    // Виклик функції для другого набору
    ShiftLeft3(A2, B2, C2);
    cout << "Лівий циклічний зсув для другого набору: " << A2 << ", " << B2 << ", " << C2 << endl;

    return 0;
}

// Визначення функції ShiftLeft3
void ShiftLeft3(double& A, double& B, double& C) {
    double temp = A;
    A = C;
    C = B;
    B = temp;
}
