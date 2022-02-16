#include <iostream>

using namespace std;

int findSecondMax(int array[], int sizeOfArray) {
    int firstMax = array[0], secondMax = array[0];
    
    for (int i = 0; i < sizeOfArray; i++) {
        if (firstMax < array[i])
            firstMax = array[i];
    }
    
    for (int i = 0; i < sizeOfArray; i++) {
        if (secondMax < array[i] && array[i] != firstMax)
            secondMax = array[i];
    }
    
    return secondMax;
}

void reverse (int array[], int sizeOfArray);

int main() {
    const int sizeOfArray = 5;
    int array[sizeOfArray] = {-10, 20, -30, 40, 55};
    
    int max = findSecondMax(array, sizeOfArray);
    
    if (max == -1000)
        cout << "Нет второго наибольшего" << endl;
    else
        cout << "Второе наибольшее число в массиве: " << max << endl;
    
    reverse(array, sizeOfArray);
}

void reverse(int array[], int sizeOfArray) {
    cout << "Массив в обратном порядке: " << endl;
    for (int i = sizeOfArray - 1; i > -1; i--)
        cout << i + 1 << ") " << array[i] << endl;
}
