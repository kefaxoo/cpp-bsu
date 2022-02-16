#include <iostream>

using namespace std;

int main()
{   
    setlocale(LC_ALL, "RUSSIAN");
    
    int size, menu, sign, minFirst, minSecond, countMinFirst = 0, countMinSecond = 0, j = 0;
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
    
    minFirst = m[0];
    
    for (int i = 0; i < size; i++)
        if (minFirst > m[i])
            minFirst = m[i];
    
    minSecond = m[0];
    
    for (int i = 0; i < size; i++)
        if (m[i] == minFirst)
            countMinFirst++;
    
    while(true)
    {
        if (m[j] == minFirst)
            j++;
        else
        {
            minSecond = m[j];
            break;
        }
    }
    
    for (int i = 0; i < size; i++)
        if (m[i] != minFirst)
            if (minSecond > m[i])
                minSecond = m[i];
    
    for (int i = 0; i < size; i++)
        if (m[i] == minSecond)
            countMinSecond++;
    
    cout << endl << countMinSecond << endl;
    
    if (countMinFirst == size)
    {
        cout << endl << "Все числа в массиве одинаковы и равны: " << minFirst << endl;
        
        delete [] m;
        exit(0);
    }
    
    if ((countMinFirst + countMinSecond) == size)
    {
        if (countMinFirst == 1)
        {
            cout << endl << "Минимальный элемент в массиве равен: " << minFirst << " и он повторяется один раз" << endl;
            
            delete [] m;
            exit(0);
        }
        else
        {
            cout << endl << "Минимальный элемент в массиве равен: " << minFirst << " и количество повторов в массиве равно: " << countMinFirst << endl;
            
            delete [] m;
            exit(0);
        }
    }
    
    if (countMinFirst == 1)
    {
        cout << endl << "Минимальный первый элемент в массиве равен: " << minFirst << " и он повторяется один раз" << endl;
        
        if (countMinSecond == 1)
        {
            cout << endl << "Минимальный второй элемент в массиве равен: " << minSecond << " и он повторяется один раз" << endl;
            
            delete [] m;
            exit(0);
        }
        else
        {
            cout << endl << "Минимальный второй элемент в массиве равен: " << minSecond << " и количество повторов в массиве равно: " << countMinSecond << endl;
            
            delete [] m;
            exit(0);
        }
    }
    else
    {
        cout << endl << "Минимальный первый элемент в массиве равен: " << minFirst << " и количество повторов в массиве равно: " << countMinFirst << endl;
        
        if (countMinSecond == 1)
        {
            cout << endl << "Минимальный второй элемент в массиве равен: " << minSecond << " и он повторяется один раз" << endl;
            
            delete [] m;
            exit(0);
        }
        else
        {
            cout << endl << "Минимальный второй элемент в массиве равен: " << minSecond << " и количество повторов в массиве равно: " << countMinSecond << endl;

            delete [] m;
            exit(0);
        }
    }
}
