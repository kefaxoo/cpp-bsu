#include <iostream>

using namespace std;

int minOfArray(int array[], int sizeOfArray) {
    int min = -1;
    
    for (int i = 0; i < sizeOfArray; i++)
        if (array[i] > 0) {
            min = array[i];
            break;
        }
    
    for (int i = 0; i < sizeOfArray; i++)
        if (min > array[i] && array[i] > 0) {
            min = array[i];
            break;
        }

    return min;
}

void positiveNumbersFromArray(int array[], int sizeOfArray);

int main() {
    const int sizeOfArray = 5;
    int array[sizeOfArray] = {57, 96, -31, 13, -40};

    int min = minOfArray(array, sizeOfArray);

    if (min > 0)
        cout << "Минимальное из положительных чисел массива: " << min << endl;
    else
        cout << "Нет полож" << endl;
    
    positiveNumbersFromArray(array, sizeOfArray);
}

void positiveNumbersFromArray(int array[], int sizeOfArray) {
    cout << "Положительные числа в массиве: " << endl;
    
    for (int i = 0; i < sizeOfArray; i++)
        if (array[i] > 0)
            cout << i + 1 << ") " << array[i] << endl;
}
