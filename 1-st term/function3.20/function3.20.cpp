#include <iostream>
#include <time.h>

using namespace std;

int reversed(int number) {
    int revers = 0;
    
    while(number) {
        revers = revers * 10 + number % 10;
        number /= 10;
    }
    
    return revers;
}

bool palindrome(int number) {
    return number == reversed(number);
}

int main() {
    srand(time(0));
    
    int sizeOfArray;
    
    cout << "Введите размер массива: ";
    cin >> sizeOfArray;
    
    int *array = new int[sizeOfArray];
    
    while(true) {
        int menu;
        bool boolMenu = false;
        cout << endl << "Выберите способ заполнения массива: " << endl;
        cout << "1 - Ручной ввод элементов" << endl;
        cout << "2 - Рандомные значение" << endl;
        cout << "Выбранный способ: ";
        cin >> menu;
        
        switch(menu) {
            case 1: {
                for (int i = 0; i < sizeOfArray; i++) {
                    cout << endl << "Введите " << i + 1 << " элемент массива: ";
                    cin >> array[i];
                }
                boolMenu = true;
            }
                break;
                
            case 2: {
                for (int i = 0; i < sizeOfArray; i++)
                    array[i] = rand();
                boolMenu = true;
            }
                break;
                
            default:
                cout << endl << "Введено неправильный номер способа. Попробуйте ещё раз!";
        }
        
        if (boolMenu)
            break;
    }
    
    cout << endl << "Исходный массив: " << endl;
    for (int i = 0; i < sizeOfArray; i++)
        cout << i + 1 << ") " << array[i] << endl;
    
    bool *ifNumberIsPalindrome = new bool[sizeOfArray];
    
    for (int i = 0; i < sizeOfArray; i++)
        ifNumberIsPalindrome[i] = palindrome(array[i]);
    
    int countOfPalindromes = 0;
    for (int i = 0; i < sizeOfArray; i++)
        if (ifNumberIsPalindrome[i])
            countOfPalindromes++;
    
    int tempIndex = 0;
    for (int i = 0; i < sizeOfArray; i++)
        if (ifNumberIsPalindrome[i]) {
            int temp = array[i];
            array[i] = array[tempIndex];
            array[tempIndex] = temp;
            tempIndex++;
        }
    
    for (int i = 0; i < countOfPalindromes - 1; i++)
        for (int j = i; j < countOfPalindromes; j++)
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
    
    for (int i = countOfPalindromes; i < sizeOfArray - 1; i++)
        for (int j = i; j < sizeOfArray; j++)
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
    
    cout << endl << "Полученный массив: " << endl;
    for (int i = 0; i < sizeOfArray; i++)
        cout << i + 1 << ") " << array[i] << endl;
}
