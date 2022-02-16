#include <iostream>
#include <time.h>

using namespace std;

int main() {
    /* Объявить двумерный массив и сделать сортировку каждой строки по возрастанию */
    
    setlocale(LC_ALL, "RUSSIAN");
    
    srand(time(0));
    
    const int sizeOfLine = 5;
    const int sizeOfColumn = 5;
    
    int matrix[sizeOfLine][sizeOfColumn], menu, sign;
    
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
    
    for (int i = 0; i < sizeOfLine; i++)
        for (int j = 0; j < (sizeOfColumn - 1); j++)
            for (int k = j; k < sizeOfColumn; k++)
                if (matrix[i][j] > matrix[i][k]) {
                    int temp = matrix[i][j];
                    matrix[i][j] = matrix[i][k];
                    matrix[i][k] = temp;
                }
    
    cout << endl << "Отсортированная по возрастанию строк матрица: " << endl;
    
    for (int i = 0; i < sizeOfLine; i++) {
        for (int j = 0; j < sizeOfColumn; j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
}
