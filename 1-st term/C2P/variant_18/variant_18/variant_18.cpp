#include <iostream>

using namespace std;

void changeMinAndMaxElementOfLine(int dynamicArray[], int sizeOfLine) {
    int indexOfMinElement = 0, indexOfMaxElement = 0, minElement = dynamicArray[0], maxElement = dynamicArray[0];
    
    for (int i = 0; i < sizeOfLine; i++)
        if (minElement > dynamicArray[i]) {
            minElement = dynamicArray[i];
            indexOfMinElement = i;
        }
        else
            if (maxElement < dynamicArray[i]) {
                maxElement = dynamicArray[i];
                indexOfMaxElement = i;
            }
    
    int temp = dynamicArray[indexOfMinElement];
    dynamicArray[indexOfMinElement] = dynamicArray[indexOfMaxElement];
    dynamicArray[indexOfMaxElement] = temp;
}

int main() {
    const int sizeOfLine = 3;
    const int sizeOfColumn = 3;
    int matrix[sizeOfColumn][sizeOfLine];
    int newMatrix[sizeOfColumn][sizeOfLine];
    
    for (int i = 0; i < sizeOfColumn; i++) {
        cout << "Введите элементы " << i + 1 << " строки через пробел: ";
        for (int j = 0; j < sizeOfLine; j++)
            cin >> matrix[i][j];
    }
    
    for (int i = 0; i < sizeOfColumn; i++) {
        int *dynamicArray = new int[sizeOfLine];
        
        for (int j = 0; j < sizeOfLine; j++)
            dynamicArray[j] = matrix[i][j];
        
        changeMinAndMaxElementOfLine(dynamicArray, sizeOfLine);
        
        for (int j = 0; j < sizeOfLine; j++)
            newMatrix[i][j] = dynamicArray[j];
    }
    
    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine; j++)
            cout << matrix[i][j] << " ";
        
        for (int j = 0; j < sizeOfLine; j++)
            cout << newMatrix[i][j] << " ";
        cout << endl;
    }
}
