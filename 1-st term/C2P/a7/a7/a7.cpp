#include <iostream>
#include <math.h>

using namespace std;

int findLastDigitOfNumber (int number) {
    return abs(number % 10);
}

void ladder (int array[], int sizeOfArray);

int main() {
    const int sizeOfArray = 4;
    int array[sizeOfArray] = {156, 20, 5, -123};
    
    ladder(array, sizeOfArray);
}

void ladder (int array[], int sizeOfArray) {
    for (int i = 0; i < sizeOfArray; i++) {
        for (int j = 0; j < i; j++)
            cout << "  ";
        int number = array[i];
        cout << array[i] << " - " << findLastDigitOfNumber(number) << endl;
    }
}
