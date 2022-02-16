#include <iostream>

using namespace std;

void functionForArray(int marks[], int sizeOfArray);

int functionForCountOfBadMarks(int marks[], int sizeOfArray) {
    int count = 0;
    
    for (int i = 0; i < sizeOfArray; i++)
        if (marks[i] > 0 && marks[i] < 4)
            count++;
    
    return count;
}

int main() {
    const int sizeOfArray = 10;
    int marks[sizeOfArray];
    
    functionForArray(marks, sizeOfArray);
}

void functionForArray(int marks[], int sizeOfArray) {
    for (int i = 0; i < sizeOfArray;)
    {
        cout << endl << "Введите " << i + 1 << " оценку: ";
        cin >> marks[i];
        
        if (marks[i] > 0 && marks[i] < 11)
            i++;
        else
            cout << endl << "Введена неправильная оценка. Попробуйте ещё раз!";
    }
    
    int countOfBadMarks = functionForCountOfBadMarks(marks, sizeOfArray);
    
    cout << endl << "Количество плохих оценок: " << countOfBadMarks << endl;
}
