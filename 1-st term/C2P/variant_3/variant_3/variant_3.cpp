#include <iostream>

using namespace std;

int findMaxElementInLine(int line[], int sizeOfLine, int &maxElement, int &index) {
    maxElement = 0;
    index = 0;
    
    for (int i = 0; i < sizeOfLine; i++)
        if (maxElement < line[i]) {
            maxElement = line[i];
            index = i;
        }
    
    return 0;
}

int main() {
    const int sizeOfColumn = 3;
    const int sizeOfLine = 5;
    int matrix[sizeOfColumn][sizeOfLine] = {{9, 3, 7, 7, 3}, {5, 4, 1, 1, 7}, {6, 2, 8, 6, 9}}, maxElement, index;
    
    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine; j++)
            cout << matrix[i][j] << " ";
        
        findMaxElementInLine(matrix[i], sizeOfLine, maxElement, index);
        
        cout << "Наибольший элемент " << maxElement << " и его индекс: " << index << endl;
    }
}
