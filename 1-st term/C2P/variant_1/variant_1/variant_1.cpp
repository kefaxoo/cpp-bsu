#include <iostream>

using namespace std;

double arithmeticMean(int line[], int sizeOfLine) {
    double arithmeticMean = 0, count = 0;

    for (int j = 0; j < sizeOfLine; j++) {
        if (line[j] > 0) {
            arithmeticMean += line[j];
            count++;
        }
    }

    return arithmeticMean /= count;
}

int main() {
    const int sizeOfColumn = 2;
    const int sizeOfLine = 5;
    int matrix[sizeOfColumn][sizeOfLine] = {{8, 1, 7, 7, 3}, {2, 5, 2, 10, 10}};

    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine; j++)
            cout << matrix[i][j] << " ";

        cout << arithmeticMean(matrix[i], sizeOfLine) << endl;
    }
}
