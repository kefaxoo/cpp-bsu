#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    
    int n, N = 1;
    
    cout << "Введите N: ";
    cin >> n;
    
    if (n == 0)
        cout << endl << "Факториал N: " << n << endl;
    else
    {
        for (int i = 1; i <= n; i++)
            N = N * i;
        cout << endl << "Факториал N: " << N << endl;
    }
}
