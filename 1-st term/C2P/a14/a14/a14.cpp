#include <iostream>

using namespace std;

void cinArray (int marks[], int sizeOfArray);

bool isArrayHasMarksBelowNine(int marks[], int sizeOfArray) {
    for (int i = 0; i < sizeOfArray; i++)
        if (marks[i] < 9)
            return true;
    
    return false;
}

int main() {
    const int sizeOfArray = 5;
    int marks[sizeOfArray];
    
    cinArray(marks, sizeOfArray);
    
    if (isArrayHasMarksBelowNine(marks, sizeOfArray))
        cout << endl << "Не отличник" << endl;
    else
        cout << endl << "Отличник" << endl;
}

void cinArray (int marks[], int sizeOfArray) {
    for (int i = 0; i < sizeOfArray;) {
        cout << endl << "Введите " << i + 1 << " оценку: ";
        cin >> marks[i];
        
        if (marks[i] > 0 && marks[i] < 11)
            i++;
        else
            cout << endl << "Введена неправильная оценка. Попробуйте ещё раз!";
    }
}
