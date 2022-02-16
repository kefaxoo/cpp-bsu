#include <iostream>

using namespace std;

int condition(int line[], int sizeOfLine) {
    for (int i = 0; i < sizeOfLine; i++)
        if (line[i] >= 1 && line[i] <= 3)
            return 1;
    
    return 0;
}

int main() {
    int sizeOfColumn = 4;
    int sizeOfLine = 4;
    int matrix[sizeOfColumn][sizeOfLine];

    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine;) {
            cout << endl << "Введите " << j + 1 << " оценку " << i + 1 << " человека: ";
            cin >> matrix[i][j];
            if(matrix[i][j] > 0 && matrix[i][j] < 11)
                j++;
            else
                cout << endl << "Введена неправильная оценка. Попробуйте ещё раз!" << endl;
        }
    }

    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine; j++)
            cout << matrix[i][j] << " ";
        if (condition(matrix[i], sizeOfLine))
            cout << "1";
        cout << endl;
    }
}
