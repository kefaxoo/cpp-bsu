#include <iostream>
#include <time.h>

using namespace std;

int main() {
    srand(time(0));
    
    setlocale(LC_ALL, "RUSSIAN");
    
    const int sizeOfLine = 3;
    const int sizeOfColumn = 3;
    
    int matrix[sizeOfLine][sizeOfColumn], menu, sign, positiveLine = -1, negativeLine = -1;
    
    bool boolMenu;
    
    while(true)
    {
        cout << endl << "Выберите каким способом заполнить массив: " << endl;
        cout << "1 - Элементы массива вводятся вручную пользователем" << endl;
        cout << "2 - Элементы массива заполняются рандомными числами" << endl;
        cout << "Введите номер способа: ";
        cin >> menu;
        
        switch(menu) {
            case 1: {
                for (int i = 0; i < sizeOfLine; i++)
                    for (int j = 0; j < sizeOfColumn; j++) {
                        cout << endl << "Введите элемент " << i + 1 << " строки " << j + 1 << " столбца: ";
                        cin >> matrix[i][j];
                    }
                boolMenu = 1;
            }
                break;
                
            case 2: {
                for (int i = 0; i < sizeOfLine; i++)
                    for (int j = 0; j < sizeOfColumn; j++) {
                        sign = rand() % 2 + 1;
                        
                        switch(sign) {
                            case 1:
                                matrix[i][j] = rand();
                                break;
                                
                            case 2:
                                matrix[i][j] = -rand();
                        }
                    }
                boolMenu = 1;
            }
                break;
                
            default:
                cout << endl << "Введён неправильный номер. Попробуйте ещё раз!" << endl;
        }
        
        if (boolMenu == true)
            break;
    }
    
    cout << endl << "Исходная матрица: " << endl;
    
    for (int i = 0; i < sizeOfLine; i++) {
        for (int j = 0; j < sizeOfColumn; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
    
    for (int i = 0; i < sizeOfColumn; i++)
        if (matrix[i][0] > 0)
            positiveLine = i;
    
    for (int i = 0; i < sizeOfColumn; i++)
        if (matrix[i][0] < 0) {
            negativeLine = i;
            break;
        }
    
    if ((positiveLine > -1) && (negativeLine > -1))
        for (int i = 0; i < sizeOfLine; i++) {
            int temp = matrix[positiveLine][i];
            matrix[positiveLine][i] = matrix[negativeLine][i];
            matrix[negativeLine][i] = temp;
        }
    else
        if (positiveLine > -1)
            for (int i = 0; i < sizeOfLine; i++) {
                int temp = matrix[0][i];
                matrix[0][i] = matrix[positiveLine][i];
                matrix[positiveLine][i] = temp;
            }
        else
            if (negativeLine > -1)
                for (int i = 0; i < sizeOfLine; i++) {
                    int temp = matrix[sizeOfColumn - 1][i];
                    matrix[sizeOfColumn - 1][i] = matrix[0][i];
                    matrix[0][i] = temp;
                }
            else
                exit(0);
    
    cout << endl << "Отсортированная по алгоритму матрица: " << endl;
    
    for (int i = 0; i < sizeOfLine; i++) {
        for (int j = 0; j < sizeOfColumn; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
