#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
        
    const int sizeOfColumn = 3;
    const int sizeOfLine = 3;
        
    int matrix[sizeOfLine][sizeOfColumn];
    int vector[sizeOfLine];
    
    for (int i = 0; i < sizeOfLine; i++)
        for (int j = 0; j < sizeOfColumn; j++) {
            cout << endl << "Введите элемент " << i + 1 << " строки " << j + 1 << " столбца: ";
            cin >> matrix[i][j];
        }
    
    cout << endl << "Исходная матрица: " << endl;
    for (int i = 0; i < sizeOfLine; i++) {
        for (int j = 0; j < sizeOfColumn; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    
    for (int i = 0; i < sizeOfLine; i++) {
        cout << endl << "Введите " << i + 1 << " элемент: ";
        cin >> vector[i];
    }
    
    for (int i = 0; i < sizeOfLine; i++)
        for (int j = 0; j < sizeOfColumn; j++)
            matrix[i][j] *= vector[j];
    
    cout << endl << "Полученная матрица: " << endl;
    for (int i = 0; i < sizeOfLine; i++) {
        for (int j = 0; j < sizeOfColumn; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    
    int *newMatrix = new int[sizeOfColumn];
    
    for (int i = 0; i < sizeOfLine; i++)
        for (int j = 0; j < sizeOfColumn; j++)
            newMatrix[i] += matrix[i][j];
    
    cout << endl << "Сумма элементов в каждой строке: " << endl;
    for (int i = 0; i < sizeOfColumn; i++) {
        cout << newMatrix[i] << endl;
    }
    
    delete [] newMatrix;
}
