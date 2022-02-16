#include <iostream>

using namespace std;

void Fact(int &n);

int main() {
    int n;

    cout << "Введите N: ";
    cin >> n;

    Fact(n);

    cout << "Факториал: " << n << endl;
}

void Fact(int &n) {
    int temp = 0;
    
    for (int i = 0; i <= n; i++)
        temp += i;
    
    cout << "Сумма: " << temp << endl;
    
    temp = 1;
    for (int i = 1; i <= n; i++)
        temp *= i;
    
    n = temp;
}
