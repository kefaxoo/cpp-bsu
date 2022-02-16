#include <iostream>
#include <math.h>

using namespace std;

void convertToHex(int a) {
    int t = a, num = 0;
        
    while (t != 0)
    {
        t /= 16;
        num++;
    }
    
    while (num != 0)
    {
        t = a;
        t /= pow(16, num - 1);
        t %= 16;
        num--;
        
        switch (t)
        {
            case 0:
                cout << "0";
                break;
            case 1:
                cout << "1";
                break;
            case 2:
                cout << "2";
                break;
            case 3:
                cout << "3";
                break;
            case 4:
                cout << "4";
                break;
            case 5:
                cout << "5";
                break;
            case 6:
                cout << "6";
                break;
            case 7:
                cout << "7";
                break;
            case 8:
                cout << "8";
                break;
            case 9:
                cout << "9";
                break;
            case 10:
                cout << "A";
                break;
            case 11:
                cout << "B";
                break;
            case 12:
                cout << "C";
                break;
            case 13:
                cout << "D";
                break;
            case 14:
                cout << "E";
                break;
            case 15:
                cout << "F";
        }
    }
    
    cout << " ";
}

int main() {
    const int sizeOfLine = 3;
    const int sizeOfColumn = 3;
    int matrix[sizeOfColumn][sizeOfLine] = {{60, 95, 73}, {2, 69, 41}, {100, 15, 43}};
    
    cout << "Матрица в 10-ной системе исчисления: " << endl;
    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    
    cout << "Матрица в 16-ной системе исчисления: " << endl;
    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine; j++)
            convertToHex(matrix[i][j]);
        cout << endl;
    }
}
