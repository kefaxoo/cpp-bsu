#include <iostream>

using namespace std;

int Sum1(int N1, int N2) {
    int sum = 0;
    
    for (int i = N1; i <= N2; i++)
        if (i % 2 == 0)
            sum += i;
    
    return sum;
}

int Sum2(int N1, int N2) {
    int count = 0;
    
    for (int i = N1; i <= N2; i++)
        if (i % 2 == 0 && i != 0)
            count++;
    
    return count;
}

int main() {
    int N1, N2;
    
    cout << "Введите левую границу промежутка: ";
    cin >> N1;
    
    cout << endl << "Введите правую границу промежутка: ";
    cin >> N2;
    
    if (N1 > N2) {
        int temp = N1;
        N1 = N2;
        N2 = temp;
    }
    
    cout << endl << "Сумма чётных чисел из промежутка " << N1 << " и " << N2 << ": "<< Sum1(N1, N2) << endl;
    
    cout << endl << "Количество чётных чисел из промежутка " << N1 << " и " << N2 << ": "<< Sum2(N1, N2) << endl;
}

