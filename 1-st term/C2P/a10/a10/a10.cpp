#include <iostream>

using namespace std;

int countOfNumberFromInterval (int array[], int sizeOfArray, int u, int v) {
    int count = 0;
    
    for (int i = 0; i < sizeOfArray; i++)
        if (array[i] <= v && array[i] >= u)
            count++;
    
    return count;
}

void coutReverse (int array[], int sizeOfArray, int u, int v);

int main() {
    const int sizeOfArray = 5;
    int array[sizeOfArray] = {7, 50, 20, 43, 7}, u, v; // u - левая граница, v - правая граница
    
    cout << "Введит левую границу промежутка: ";
    cin >> u;
    cout << endl << "Введит правую границу промежутка: ";
    cin >> v;
    
    if (v > u) { // проверка границ промежутка
        int temp = v;
        v = u;
        u = temp;
    }
    
    int count = countOfNumberFromInterval (array, sizeOfArray, u, v);
    
    if (count == 0)
        cout << endl << "Нет чисел." << endl;
    else
        cout << endl << "Количество чисел, принадлежащих отрезку: " << count << endl;
    
    coutReverse(array, sizeOfArray, u, v);
}

void coutReverse (int array[], int sizeOfArray, int u, int v) {
    for (int i = sizeOfArray - 1; i > -1; i--)
        if (array[i] <= v && array[i] >= u)
            cout << i + 1 << ") " << array[i] << endl;
}
