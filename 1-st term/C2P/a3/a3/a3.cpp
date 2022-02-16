#include <iostream>

using namespace std;

int findFirstDigitOfNumber (int number) {
    while (true) {
        if (number < 10)
            break;
        else
            number /= 10;
    }
    
    return number;
}

void findMinFirstDigitOfNumber (int array[], int sizeOfArray);

int main() {
    const int sizeOfArray = 5;
    int array[sizeOfArray];
    
    for (int i = 0; i < sizeOfArray; i++) {
        cout << endl << "Введите " << i + 1 << " элемент массива: ";
        cin >> array[i];
    }
    
    findMinFirstDigitOfNumber(array, sizeOfArray);
}

void findMinFirstDigitOfNumber (int array[], int sizeOfArray) {
    int minDigit = findFirstDigitOfNumber(array[0]), number, minNumber;
    
    for (int i = 0; i < sizeOfArray; i++) {
        number = array[i];
        
        int temp = findFirstDigitOfNumber(number);
        
        if (minDigit > temp) {
            minDigit = temp;
            minNumber = number;
        }
    }
    
    cout << endl << "Число " << minNumber << " имеет наименьшее первое число: " << minDigit << endl;
}

