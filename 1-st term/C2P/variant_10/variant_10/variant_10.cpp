#include <iostream>
#include <math.h>

using namespace std;

bool ifNumberIsFromOnlyLetters(int a) {
    int t = a, num = 0;
        
    bool varToReturn = true;
        
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
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                varToReturn = false;
        }
        
        if (!varToReturn)
            break;
    }
    
    return varToReturn;
}

int main() {
    const int sizeOfLine = 3;
    const int sizeOfColumn = 3;
    int matrix[sizeOfColumn][sizeOfLine] = {{9, 12, 3}, {4, 2, 9}, {2, 5, 13}}, count = 0;
    
    for (int i = 0; i < sizeOfColumn; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << matrix[i][j] << " ";
            if (ifNumberIsFromOnlyLetters(matrix[i][j]))
                count++;
        }
        cout << endl;
    }
                
    cout << "Количество цифр, состоящих только их букв в 16-ой системе: " << count << endl;
}
