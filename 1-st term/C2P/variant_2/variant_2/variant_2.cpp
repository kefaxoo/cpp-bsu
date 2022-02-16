#include <iostream>

using namespace std;

bool ifNumberIsPrimeFunction(int number) {
    if (number < 2)
        return false;

    for (int i = 2; i < number; i++)
        if (number % i == 0)
            return false;
    
    return true;
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

    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine; j++) {
            cout << matrix[i][j] << " ";
            if (sizeOfLine - i - 1 == i)
                if(ifNumberIsPrimeFunction(matrix[i][j]))
                    count++;
        }
        cout << endl;
    }

    cout << "Количество простых чисел в побочной диагонали: " << count << endl;
}
