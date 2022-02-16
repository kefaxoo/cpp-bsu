#include <iostream>

using namespace std;

void findSumOfDigitsAndMaxDigit(int numberFromSideDiagonal, int &sumOfDigits, int &maxDigit) {
    int tempNumber = numberFromSideDiagonal, countOfTens = 0;

    do {
        countOfTens++;
        tempNumber /= 10;
    } while (tempNumber > 0);

    int *digits = new int[countOfTens];

    for (int i = countOfTens - 1; i >= 0; i--) {
        digits[i] = numberFromSideDiagonal % 10;
        numberFromSideDiagonal /= 10;
    }

    sumOfDigits = 0;
    maxDigit = digits[0];

    for (int i = 0; i < countOfTens; i++) {
        if (digits[i] > maxDigit)
            maxDigit = digits[i];
        sumOfDigits += digits[i];
    }
}

int main() {
    int sizeOfLine = 4;
    int sizeOfColumn = 4;
    int matrix[sizeOfColumn][sizeOfLine];

    for (int i = 0; i < sizeOfColumn; i++) {
        cout << "Введите элементы " << i + 1 << " строки через пробел: ";
        for (int j = 0; j < sizeOfLine; j++)
            cin >> matrix[i][j];
    }

    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine; j++)
            cout << matrix[i][j] << " ";
        int numberFromSideDiagonal = matrix[i][i], sumOfDigits, maxDigit;

        findSumOfDigitsAndMaxDigit(numberFromSideDiagonal, sumOfDigits, maxDigit);

        cout << "Сумма цифр: " << sumOfDigits << " Наибольшая цифра: " << maxDigit << endl;
    }
}
