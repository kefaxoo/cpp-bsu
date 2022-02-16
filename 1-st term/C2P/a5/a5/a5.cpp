#include <iostream>

using namespace std;

int finSumOfDigits (int number) {
    int countOfTens = 0, tempNumber = number;
    
    do {
        countOfTens++;
        tempNumber /= 10;
    } while (tempNumber > 0);
    
    int sum = 0;
    
    for (int i = countOfTens; i > 0; i--) {
        sum += number % 10;
        number /= 10;
    }
    
    return sum;
}

void findMaxSumOfDigits (int array[], int sizeOfArray);

int main() {
    const int sizeOfArray = 5;
    int array[sizeOfArray];
    
    for (int i = 0; i < sizeOfArray; i++) {
        cout << endl << "Введите " << i + 1 << " элемент массива: ";
        cin >> array[i];
    }
    
    findMaxSumOfDigits(array, sizeOfArray);
}

void findMaxSumOfDigits (int array[], int sizeOfArray) {
    int number = array[0], maxSum = finSumOfDigits(number), maxNumber = number;
    
    for (int i = 0; i < sizeOfArray; i++) {
        number = array[i];
        
        int tempSum = finSumOfDigits(number);
        
        if (tempSum > maxSum) {
            maxSum = tempSum;
            maxNumber = number;
        }
    }
    
    cout << endl << "Число " << maxNumber << " имеет наибольшую сумму чисел: " << maxSum << endl;
}

