#include <iostream>
#include <math.h>

using namespace std;

bool checkIfNumberInHexHasLetter(int a) {
    int t = a, num = 0;
    
    bool varToReturn = false;
        
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
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                varToReturn = true;
        }
        
        if (varToReturn)
            break;
    }
    
    return varToReturn;
}

int main() {
    const int sizeOfLine = 3;
    const int sizeOfColumn = 3;
    int matrix[sizeOfColumn][sizeOfLine] = {{45, 4, 82}, {44, 5, 44}, {70, 53, 56}};
    int count = 0;
    
    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < sizeOfLine - i; j++) {
            cout << matrix[i][j] << " ";
            if (checkIfNumberInHexHasLetter(matrix[i][j]))
                count++;
        }
        cout << endl;
    }
    
    cout << "Количество цифр, которые в 16-ой системе имеют буквы: " << count << endl;
}
