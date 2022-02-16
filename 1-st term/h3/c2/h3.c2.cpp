#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "RUSSIAN");

    int size, menu, sign, tempCount = 1, maxCount = 1, thatNumber;
    bool boolMenu;

    cout << "Введите размер массива: ";
    cin >> size;

    int *m = new int[size];

    while(true) {
        cout << endl << "Выберите каким способом заполнить массив: " << endl;
        cout << "1 - Элементы массива вводятся вручную пользователем" << endl;
        cout << "2 - Элементы массива заполняются рандомными числами" << endl;
        cout << "Введите номер способа: ";
        cin >> menu;

        switch(menu) {
            case 1: {
                for(int i = 0; i < size; i++) {
                    cout << endl << "Введите " << i + 1 << " элемент массива: ";
                    cin >> m[i];
                }
                boolMenu = 1;
                break;
            }

            case 2: {
                for (int i = 0; i < size; i++) {
                    sign = rand() % 2 + 1;

                    switch(sign) {
                        case 1:
                            m[i] = rand();
                            break;

                        case 2:
                            m[i] = -rand();
                    }
                }
                boolMenu = 1;
            }
                break;

            default:
                cout << endl << "Введён неправильный номер способа. Попробуйте ещё раз!" << endl;
        }

        if (boolMenu == true)
            break;
    }

    for (int i = 1; i < size; i++) {
        if (m[i] == m[i - 1])
            tempCount++;
        else
        {
            if (tempCount > maxCount) {
                maxCount = tempCount;
                thatNumber = m[i - 1];
            }
            tempCount = 1;
        }
    }

    if (tempCount > maxCount)
        maxCount = tempCount;

    tempCount = 1;

    cout << endl << "Длина самой длинной последовательности равна: " << maxCount << " с числами: " << thatNumber << endl;

    delete [] m;
}
