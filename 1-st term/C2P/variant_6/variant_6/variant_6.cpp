#include <iostream>

using namespace std;

bool ifNumberContainsZeroInByte(int a) {
    do {
        if (a % 2 == 0)
            return 0;
        
        a /= 2;
    } while(a >= 1);
    
    return 1;
}

int main() {
    const int sizeOfLine = 3;
    const int sizeOfColumn = 3;
    int matrix[sizeOfColumn][sizeOfLine] = {{15, 8, 6}, {8, 10, 13}, {1, 1, 9}}, count = 0;
    
    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine; j++) {
            cout << matrix[i][j] << " ";
            if (i == j)
                if(ifNumberContainsZeroInByte(matrix[i][j]))
                    count++;
        }
        cout << endl;
    }
    
    cout << "Количество чисел в главной диагонали, имеющие только единицы в 2-ой системе: " << count << endl;
}
