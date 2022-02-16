#include <iostream>

using namespace std;

bool isArrayHasBadMarks(int marks[], int sizeOfArray) {
    for (int i = 0; i < sizeOfArray; i++)
        if (marks[i] > 0 && marks[i] < 4)
            return true;
    
    return false;
}

void reverse (int marks[], int sizeOfArray);

int main() {
    const int sizeOfArray = 5;
    int marks[sizeOfArray] = {9, 4, 4, 7, 9};
    
    bool result = isArrayHasBadMarks(marks, sizeOfArray);
    
    if (result)
        cout << "Есть плохие оценки." << endl;
    else
        cout << "Нет плохих оценок." << endl;
    
    reverse(marks, sizeOfArray);
}

void reverse (int marks[], int sizeOfArray) {
    for (int i = sizeOfArray - 1; i > -1; i--)
        cout << marks[i] << endl;
}
