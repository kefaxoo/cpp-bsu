#include <iostream>

using namespace std;

bool ifNumberMultipleToK(int a, int k) {
    if (a % k == 0)
        return true;
    
    return false;
}

int main() {
    const int sizeOfLine = 3;
    const int sizeOfColumn = 3;
    int matrix[sizeOfColumn][sizeOfLine] = {{3, 7, 2}, {6, 1, 14}, {4, 13, 14}}, k, count = 0;
    
    cout << "Введите число k: ";
    cin >> k;
    
    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine; j++) {
            cout << matrix[i][j] << " ";
            if (ifNumberMultipleToK(matrix[i][j], k))
                count++;
        }
        cout << count << endl;
        count = 0;
    }
}
