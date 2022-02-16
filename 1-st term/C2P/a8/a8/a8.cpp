#include <iostream>

using namespace std;

bool isPrimeNumber (int number) {
    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return false;
    
    return true;
}

void countOfPrimeNumbersAndMaxPrimeNumber (int array[], int sizeOfArray);

int main() {
    const int sizeOfArray = 5;
    int array[sizeOfArray];
    
    for (int i = 0; i < sizeOfArray; i++) {
        cout << endl << "Введите " << i + 1 << " элемент массива: ";
        cin >> array[i];
    }
    
    countOfPrimeNumbersAndMaxPrimeNumber(array, sizeOfArray);
}

void countOfPrimeNumbersAndMaxPrimeNumber (int array[], int sizeOfArray) {
    int count = 0, max = 2;
    
    for (int i = 0; i < sizeOfArray; i++) {
        int number = array[i];
        
        bool forFunction = isPrimeNumber(number);
        
        if (forFunction) {
            if (max < array[i])
                max = array[i];
            count++;
        }
    }
    
    if (count == 0)
        cout << endl << "В массиве нет простых чисел." << endl;
    else {
        cout << endl << "Количество простых чисел в массиве: " << count << endl << "Максимальное простое число: " << max << endl;;
    }
}
