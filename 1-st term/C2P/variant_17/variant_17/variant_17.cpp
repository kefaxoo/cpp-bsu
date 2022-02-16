#include <iostream>

using namespace std;

void FindMinAndMaxElementOfLine(int dynamicArray[], int sizeOfLine, int &minElement, int &maxElement) {
    minElement = dynamicArray[0];
    maxElement = dynamicArray[0];
    
    for (int i = 0; i < sizeOfLine; i++)
        if (minElement > dynamicArray[i]) {
            minElement = dynamicArray[i];
        }
        else
            if (maxElement < dynamicArray[i]) {
                maxElement = dynamicArray[i];
            }
}

int main() {
    const int sizeOfColumn = 3;
    const int sizeOfLine = 3;
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
            
        int minElement, maxElement;
        
        FindMinAndMaxElementOfLine(dynamicArray, sizeOfLine, minElement, maxElement);
        
        cout << "Максимальный элемент: " << maxElement << " Минимальный элемент: " << minElement << " ";
        for (int j = 0; j < sizeOfLine; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
