#include <iostream>

using namespace std;

int nod(int a, int b) {
    int j = 2, nodNumber;
    
    while(true){
        if ((a % j == 0) && (b % j == 0)) {
            nodNumber = j;
            break;
        }
        j++;
    }
    
    return nodNumber;
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    
    int a, b;
    
    cout << "Введите a: ";
    cin >> a;
    
    cout << endl << "Введите b: ";
    cin >> b;
    
    nod(a, b);
    
    cout << endl << "Наименьший общий делитель " << a << " и " << b << ": " << nod(a, b) << endl;
}
