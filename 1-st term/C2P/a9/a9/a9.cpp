#include <iostream>

using namespace std;

int findArithmeticMean(int array[], int sizeOfArray) {
    int sum = 0, count = 0;
    for (int i = 0; i < sizeOfArray; i++)
        if (array[i] > 0) {
            sum += array[i];
            count++;
        }
    
    sum /= count;
    
    return sum;
}

void coutWithParameter(int array[], int sizeOfArray, int k);

int main() {
    const int sizeOfArray = 5;
    int array[sizeOfArray] = {15, -37, 72, -80, 39}, k;
    
    cout << "Введите размер строки: ";
    cin >> k;
    
    int sum = findArithmeticMean(array, sizeOfArray);
    
    if (sum == 0)
        cout << endl << "Нет положительных" << endl;
    else
        cout << endl << "Среднее арифметическое среди пооложительных чисел: " << sum << endl;
    
    coutWithParameter(array, sizeOfArray, k);
}

void coutWithParameter(int array[], int sizeOfArray, int k) {
    int j = 0;
    
    for (int i = 0; i < sizeOfArray; i++) {
        if (j != k) {
            cout << array[i] << " ";
            j++;
        }
        else {
            cout << endl;
            i--;
            j = 0;
        }
    }
}
