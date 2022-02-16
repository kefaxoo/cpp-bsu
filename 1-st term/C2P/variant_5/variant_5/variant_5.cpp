#include <iostream>
#include <math.h>

using namespace std;

int findSumOfModules(int line[], int sizeOfLine) {
    int sum = 0;
    
    for (int i = 0; i < sizeOfLine; i++)
        if (line[i] != 0)
            sum += line[i];
        else
            return sum;
    
    return sum;
}

int main() {
    const int sizeOfLine = 3;
    const int sizeOfColumn = 3;
    int matrix[sizeOfColumn][sizeOfLine] = {{6, 8, 0}, {11, 0, 8}, {0, 2, 6}};
    
    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine; j++)
            cout << matrix[i][j] << " ";
        cout << findSumOfModules(matrix[i], sizeOfLine) << endl;
    }
}
