#include <iostream>
#include <math.h>

using namespace std;

void convertFromDecimalToBinary(int number) {
    int temp = number, count = 0;
    
    do {
        count++;
        temp /= 2;
    } while(temp >= 1);
    
    int *byte = new int[count], i = count - 1;
    
    do {
        byte[i] = number % 2;
        number /= 2;
        i--;
    } while(number >= 1);
    
    for (int j = 0; j < count; j++)
        cout << byte[j];
    cout << " ";
}

int main() {
    const int sizeOfLine = 3;
    const int sizeOfColumn = 3;
    int matrix[sizeOfColumn][sizeOfLine];
    
    for (int i = 0; i < sizeOfColumn; i++) {
        cout << "Введите элементы " << i + 1 << " строки через пробел: ";
        for (int j = 0; j < sizeOfLine; j++)
            cin >> matrix[i][j];
    }
    
    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine; j++)
            convertFromDecimalToBinary(matrix[i][j]);
        cout << endl;
    }
}
