#include <iostream>

using namespace std;

int classification(int line[], int sizeOfLine) {
    int countTwo = 0, countThree = 0, countFour = 0, countFive = 0, classification;

    for (int i = 0; i < sizeOfLine; i++)
        if (line[i] >= 1 && line[i] <= 3)
            countTwo++;
        else
        if (line[i] >= 4 && line[i] <= 5)
            countThree++;
        else
        if (line[i] >= 6 && line[i] <= 8)
            countFour++;
        else
        if (line[i] >= 9)
            countFive++;

    if (countTwo != 0)
        return 2;
    else
        if (countThree != 0)
            return 3;
        else
            if (countFour != 0 && countFive == 0)
                return 4;
            else
                if (countFive == sizeOfLine)
                    return 5;


    return classification;
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
        cout << " " << classification(matrix[i], sizeOfLine) << endl;
    }
}
