#include <iostream>
#include <math.h>

using namespace std;

int findSumOfModules(int dynamicArray[], int sizeOfLine) {
    int sum = 0;
    
    for (int i = 0; i < sizeOfLine; i++) {
        if (dynamicArray[i] != 0)
            sum += abs(dynamicArray[i]);
        else
            break;
    }
    
    return sum;
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
    
    for (int i = 0; i < sizeOfColumn; i++) {
        int *dynamicArray = new int[sizeOfLine];
        
        for (int j = 0; j < sizeOfLine; j++)
            dynamicArray[j] = matrix[i][j];
        
        int sum = findSumOfModules(dynamicArray, sizeOfLine);
        
        cout << "Сумма модулей элементов до первого нуля: " << sum;
        for (int j = 0; j < sizeOfLine; j++)
            cout << " " << matrix[i][j];
        cout << endl;
    }
}
