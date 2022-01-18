#include <iostream>

using namespace std;

int main () {
    /*  2. Ввести вещественные a и k. Вывести на экран одночлен a*x^k. При этом если a=1, выводить только x^k, где k — введенное число, а 1 не выводить. Если A=-1, выводить –x^k, если A=0, x^2 не выводить. Аналогично предусмотреть следующие варианты для k: k=1, k=-1, k=0.*/
    
    setlocale(LC_ALL, "RUSSIAN");
    
    double a, k;
    
    cout << "Введите a: ";
    cin >> a;
    
    cout << endl << "Введите k: ";
    cin >> k;
    
    if (a == 1)
        cout << endl << "a";
    else
        if (a == -1)
            cout << endl << "-a";
        else
            if (a != 0)
                cout << endl << a;
            else {
                cout << endl << 0;
                exit(0);
            }
    
    if (k == 1)
        cout << "*x";
    else
        if (k == -1)
            cout << "*x^-1";
        else
            if (k != 0)
                cout << "*x^" << k;
}
