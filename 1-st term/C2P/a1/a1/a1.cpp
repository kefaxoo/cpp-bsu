#include <iostream>
#include <math.h>

using namespace std;

int findUnits(int temp) {
    int tempCount = 1;

    while(true) { // бесконечный цикл по задумке программиста, выход из него при помощи "brake;"
        int tempRest = temp % 2; // временная переменная для остатка от деления (0 or 1)
        if (temp > 1) { // цикл будет работать, пока число не будет меньше 2
            if (tempRest == 1)
                tempCount++;
            temp /= 2; // каждый проход цикла уменьшаем переменную на 2
        }
        else
            break;
    }

    return tempCount;
}

void functionForArray(int array[], int sizeOfArray);

int main() {
    const int sizeOfArray = 5;
    int array[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++) {
        cout << endl << "Введите " << i + 1 << " элемент массива: ";
        cin >> array[i];
        if (array[i] < 0)
            array[i] = abs(array[i]); // модуль числа
    }

    functionForArray(array, sizeOfArray);
}

void functionForArray(int array[], int sizeOfArray) {
    int countOfUnits = 0, elementOfArrayWithMaxNumberOfUnits;
    int *arrayForUnits = new int[sizeOfArray]; //обьявление динамического массива через указатели

    for (int i = 0; i < sizeOfArray; i++) {
        int temp = array[i];
        arrayForUnits[i] = findUnits(temp);
    }

    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << endl << arrayForUnits[i];
    }

    for (int i = 0; i < sizeOfArray; i++) {
        if (arrayForUnits[i] > countOfUnits) {
            countOfUnits = arrayForUnits[i];
            elementOfArrayWithMaxNumberOfUnits = array[i];
        }
    }

    cout << endl << "Число " << elementOfArrayWithMaxNumberOfUnits << " содержит наибольшее количество единиц в двоичном представлении: " << countOfUnits << endl;
}
