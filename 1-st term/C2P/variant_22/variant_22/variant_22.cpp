#include <iostream>

using namespace std;

int findMaxElementFromLine (int tempLine[], int sizeOfLine) {
    int maxElement = tempLine[0], index = 0;
    
    for (int i = 0; i < sizeOfLine; i++)
        if (maxElement < tempLine[i]) {
            index = i;
            maxElement = tempLine[i];
        }
    
    for (int i = 0; i < sizeOfLine; i++)
        if (maxElement == tempLine[i])
            return i;
    
    return index;
}

int main() {
    const int sizeOfLine = 3;
    const int sizeOfColumn = 3;
    int matrix[sizeOfColumn][sizeOfLine] = {{3, 2, 5}, {9, 3, 9}, {1, 3, 5}};
    
    for (int i = 0; i < sizeOfColumn; i++) {
        int *tempLine = new int[sizeOfLine];
        for (int j = 0; j < sizeOfLine; j++)
            tempLine[j] = matrix[i][j];
        
        int index = findMaxElementFromLine(tempLine, sizeOfLine);
        
        cout << "Максимальный элемент " << i + 1 << " строки: " << matrix[i][index] << " и его индекс: " << index << " ";   
        
        for (int j = 0; j < sizeOfLine; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
