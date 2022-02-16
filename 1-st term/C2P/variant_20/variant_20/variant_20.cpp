#include <iostream>

using namespace std;

bool findZeroDigitInNumber(int numberFromSideDiagonal) {
    int tempNumber = numberFromSideDiagonal, countOfTens = 0;
    bool isZeroDigitInNumber = false;

    do {
        countOfTens++;
        tempNumber /= 10;
    } while (tempNumber > 0);

    int *digits = new int[countOfTens];

    for (int i = countOfTens - 1; i >= 0; i--) {
        digits[i] = numberFromSideDiagonal % 10;
        numberFromSideDiagonal /= 10;
    }

    for (int i = 0; i < countOfTens; i++)
        if (digits[i] == 0)
            return true;
            
    return false;
}

int main() {
    const int sizeOfLine = 3;
    const int sizeOfColumn = 3;
    int matrix[sizeOfColumn][sizeOfLine];
    
    for (int i = 0; i < sizeOfColumn; i++) {
        cout << "Введите элементы " << i + 1 << " строки через пробел: ";
        for (int j = 0; j < sizeOfLine; j++)
            cin >> matrix[i][j];
    }
    
    int count = 0;
    
    for (int i = 0; i < sizeOfColumn; i++)
        if(findZeroDigitInNumber(matrix[i][i]))
            count++;
    
    cout << "В побочной матрице " << count << " элемент(-ов/-а) с нулём" << endl;
    
    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
