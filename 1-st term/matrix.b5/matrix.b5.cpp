#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    
    const int sizeOfColumn = 4;
    const int sizeOfLine = 4;
    
    int A[sizeOfLine][sizeOfColumn];
    
    for (int i = 0; i < sizeOfLine; i++)
        for (int j = 0; j < sizeOfColumn; j++) {
            while(true) {
                cout << endl << "Введите оценку " << i + 1 << " студента за " << j + 1 << " экзамен: ";
                cin >> A[i][j];
                
                if ((A[i][j] > -1) && (A[i][j] < 11))
                    break;
                else
                    cout << endl << "Введена неправильная оценка. Попробуйте ещё раз!";
            }
        }
    
    int temp = 0, countOfAStudents = 0, countOfDStudents = 0;
    
    for (int i = 0; i < sizeOfLine; i++) {
        for (int j = 0; j < sizeOfColumn; j++)
            if (A[i][j] > 8)
                temp++;
        
        if (temp == sizeOfLine)
            countOfAStudents++;
        
        temp = 0;
    }
    
    for (int i = 0; i < sizeOfLine; i++)
        for (int j = 0; j < sizeOfColumn; j++)
            if ((A[i][j] < 4) && (A[i][j] > 0)) {
                countOfDStudents++;
                break;
            }
    
    cout << endl << "Количество студентов-отличников: " << countOfAStudents << endl;
    cout << "Количество студентов-двоечников: " << countOfDStudents << endl;
}
