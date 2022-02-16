#include <iostream>

using namespace std;

double Max(double A, double B, double C) {
    double max = A;
    
    if (max < B)
        max = B;
    
    if (max < C)
        max = C;
    
    return max;
}

double Sum(double A, double B, double C) {
    double Sum;
    
    return Sum = A + B + C;
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    
    double A, B, C;
    
    cout << "Введите первое число: ";
    cin >> A;
    
    cout << endl << "Введите второе число: ";
    cin >> B;
    
    cout << endl << "Введите третье число: ";
    cin >> C;
    
    cout << endl << "Максимальное из 3-х чисел: " << Max(A, B, C) << endl;
    
    cout << "Сумма 3-х чисел: " << Sum(A, B, C) << endl;
}
