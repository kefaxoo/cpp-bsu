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

void findMaxFirstDigitOfNumber (int array[], int sizeOfArray);

int main() {
    const int sizeOfArray = 5;
    int array[sizeOfArray];
    
    for (int i = 0; i < sizeOfArray; i++) {
        cout << endl << "Введите " << i + 1 << " элемент массива: ";
        cin >> array[i];
    }
    
    findMaxFirstDigitOfNumber(array, sizeOfArray);
}

void findMaxFirstDigitOfNumber (int array[], int sizeOfArray) {
    int maxDigit = -1, number, maxNumber;
    
    for (int i = 0; i < sizeOfArray; i++) {
        number = array[i];
        
        int temp = findFirstDigitOfNumber(number);
        
        if (maxDigit < temp) {
            maxDigit = temp;
            maxNumber = number;
        }
    }
    
    cout << endl << "Число " << maxNumber << " имеет наибольшее первое число: " << maxDigit << endl;
}
