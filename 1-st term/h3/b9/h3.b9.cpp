#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    
    int size, menu, sign;
    bool boolMenu;
    
    cout << "Введите размер массива: ";
    cin >> size;
    
    int *m = new int[size];
    
    while(true)
    {
        cout << endl << "Выберите каким способом заполнить массив: " << endl;
        cout << "1 - Элементы массива вводятся вручную пользователем" << endl;
        cout << "2 - Элементы массива заполняются рандомными числами" << endl;
        cout << "Введите номер способа: ";
        cin >> menu;
        
        switch(menu)
        {
            case 1:
            {
                for(int i = 0; i < size; i++)
                {
                    cout << endl << "Введите " << i + 1 << " элемент массива: ";
                    cin >> m[i];
                }
                boolMenu = 1;
                break;
            }
                
            case 2:
            {
                for (int i = 0; i < size; i++)
                {
                    sign = rand() % 2 + 1;
                    switch(sign)
                    {
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
    
    while(true)
    {
        cout << endl << "Выберите способ отображения массива: " << endl;
        cout << "1 - с правого угла в левый " << endl;
        cout << "2 - с левого угла в правый " << endl;
        cout << "Ваш вариант: ";
        cin >> menu;
        
        switch(menu)
        {
            case 1:
            {
                for (int i = 0; i < size; i++)
                {
                    cout << endl;
                    if (i > 0)
                        for (int j = 0; j <= i; j++)
                            cout << " ";
                    cout << m[i];
                }
                cout << endl;
                
                boolMenu = 1;
            }
                break;
                
            case 2:
            {
                cout << endl;
                for (int i = (size - 1); i >= 0; i--)
                {
                    if (i > 0)
                        for (int j = 0; j <= i; j++)
                            cout << " ";
                    cout << m[i] << endl;
                }
                boolMenu = 1;
            }
                break;
                
            default:
            {
                cout << endl << "Выбран неверный вариант. Попробуйте ещё раз!" << endl;
                boolMenu = 0;
            }
        }
        
        if (boolMenu == 1)
            break;
    }
    
    delete [] m;
}