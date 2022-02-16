#include <iostream>

using namespace std;

int findMinPositiveElementInLine(int dynamicArray[], int sizeOfLine) {
    int minNumber = INT_MAX;
    
    for (int i = 0; i < sizeOfLine; i++)
        if (minNumber > dynamicArray[i] && dynamicArray[i] > 0)
            minNumber = dynamicArray[i];
    
    if (minNumber == INT_MAX)
        return -1;
    
    return minNumber;
}

int main() {
    const int sizeOfColumn = 3;
    const int sizeOfLine = 3;
    int matrix[sizeOfColumn][sizeOfLine] = {{-41, -1, -15}, {15, 38, 22}, {20, 45, 40}};
    
    for (int i = 0; i < sizeOfColumn; i++) {
        int *dynamicArray = new int[sizeOfLine];
        
        for (int j = 0; j < sizeOfLine; j++)
            dynamicArray[j] = matrix[i][j];
        
        int minNumber = findMinPositiveElementInLine(dynamicArray, sizeOfLine);
        
        if (minNumber == -1)
            cout << "Нет положительных ";
        else
            cout << "Минимальный положительный элемент: " << minNumber << " ";
        
        for (int j = 0; j < sizeOfLine; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
        
        delete[] dynamicArray;
    }
}
