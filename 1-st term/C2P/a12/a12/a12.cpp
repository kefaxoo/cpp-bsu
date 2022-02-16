#include <iostream>

using namespace std;

int findMaxElementFromArray (int array[], int sizeOfArray) {
    int maxElement = array[0], index, count = 0;
    
    for (int i = 0; i < sizeOfArray; i++)
        if (maxElement < array[i]) {
            index = i;
            maxElement = array[i];
        }
    
    for (int i = 0; i < sizeOfArray; i++)
        if (maxElement == array[i])
            count++;
    
    if (count > 1)
        for (int i = 0; i < sizeOfArray; i++)
            if (maxElement == array[i])
                return i;
    
    return index;
}

void ladder(int array[], int sizeOfArray);

int main() {
    const int sizeOfArray = 5;
    int array[sizeOfArray] = {-97, 38, 50, 91, 75};
    
    
    int index = findMaxElementFromArray (array, sizeOfArray);
    cout << "Первый максимальный элемент массива: " << array[index] << " с индексом: " << index << endl;
    
    ladder(array, sizeOfArray);
}

void ladder(int array[], int sizeOfArray) {
    for (int i = 0; i < sizeOfArray; i++) {
            for (int j = 0; j < sizeOfArray - i; j++)
                cout << "  ";
            cout << array[i] << endl;
        }
}
