#include <iostream>

using namespace std;

int countOfBadMarks(int line[], int sizeOfLine) {
    int count = 0;
    
    for (int i = 0; i < sizeOfLine; i++)
        if (line[i] >= 1 && line[i] <= 3)
            count++;
    
    return count;
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
    
    int max = countOfBadMarks(matrix[0], sizeOfLine);
    
    for (int i = 0; i < sizeOfColumn; i++) {
        int temp = countOfBadMarks(matrix[i], sizeOfLine);
        
        if (max < temp)
            max = temp;
    }
    
    for (int i = 0; i < sizeOfColumn; i++) {
        int temp = countOfBadMarks(matrix[i], sizeOfLine);
        for (int j = 0; j < sizeOfLine; j++)
            cout << matrix[i][j] << " ";
        if (temp == max)
            cout << "max" << endl;
        else
            cout << endl;
    }
}
/*7
 16
 11
 2
 7
 18
 4
 11
 3
 19
 20
 3
 20
 7
 1
 1*/
