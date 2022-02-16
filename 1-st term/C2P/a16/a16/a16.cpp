#include <iostream>

using namespace std;

int findLastEvenElement(int array[], int sizeOfArray) {
    int number = -1, count = 0;
    
    for (int i = 0; i < sizeOfArray; i++) {
        if (array[i] % 2 == 0 && array[i] != 0)
            number = array[i];
        if (array[i] == number)
            count++;
    }
    
    if (count == sizeOfArray)
        return array[0];
    else
        return number;
}

void ladder(int array[], int sizeOfArray);

int main() {
    const int sizeOfArray = 5;
    int array[sizeOfArray] = {9, 9, 2, 3, 4};
    
    int number = findLastEvenElement(array, sizeOfArray);
    
    if (number % 2 != 0 || number == -1)
        cout << "Нет положительных чисел." << endl;
    else
        cout << number << endl;
    
    ladder(array, sizeOfArray);
}

void ladder(int array[], int sizeOfArray) {
    for (int i = 0; i < sizeOfArray; i += 2) {
        for (int j = 0; j < sizeOfArray - i; j++)
            cout << " ";
        if (i + 1 >= sizeOfArray)
            cout << array[i] << endl;
        else
            cout << array[i] << " " << array[i + 1] << endl;
    }
}
