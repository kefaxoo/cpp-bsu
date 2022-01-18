// by kefaxoo
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL,"RUSSIAN");
    
    int a, b, c, K, P;
    
    cout << "Введите a: ";
    cin >> a;
    cout << endl << "Введите b: ";
    cin >> b;
    cout << endl << "Введите c: ";
    cin >> c;
    cout << endl << "Введите K: ";
    cin >> K;
    cout << endl << "Введите P: ";
    cin >> P;
    
    if ((K == 0) && ((b + P) > 0))
        cout << endl << "y = " << (a * a) - sqrt(b + P) << endl;
    else
    {
        if ((K == 1) && ((c + (P / 2)) > 0))
            cout << endl << "y = " << (((b + P) * (b + P)) + sqrt(c + (P / 2))) << endl;
        else
            cout << endl << "y = 0" << endl;
    }
}
