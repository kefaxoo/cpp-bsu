#include <iostream>

using namespace std;

int main() {
    /* 3. Ввести коэффициенты квадратного уравнения A, B и C. Вывести на экран
          A*x^2+B*x+C=0. При этом если A=1, выводить только x^2, то есть 1 не выводить, если A=-1, выводить –x^2, если A=0, x^2 не выводить. Аналогично для B. Не выводится также нулевое значение С. */
    
    setlocale(LC_ALL, "RUSSIAN");
    
    int A, B, C;
    
    cout << "Введите коэффициент A: ";
    cin >> A;
    
    cout << endl << "Введите коэффициент B: ";
    cin >> B;
    
    cout << endl << "Введите коэффициент C: ";
    cin >> C;
    
    if (A == 1)
        cout << endl << "x^2";
    else
        if (A == -1)
            cout << endl << "-x^2";
        else
            if (A != 0)
                cout << endl << A << "x^2";
    
    if (B == 1)
        cout << "+x";
    else
        if (B == -1)
            cout << "-x";
        else
            if (B != 0)
                if (B > 0)
                    cout << "+" << B << "x";
                else
                    cout << B << "x";
    
    if (C != 0)
        if (C > 0)
            cout << "+" << C << "=0" << endl;
        else
            cout << C << "=0" << endl;
    else
        if ((A == 0) && (B == 0) && (C == 0))
            cout << "0=0" << endl;
        else
            cout << "=0" << endl;
}
