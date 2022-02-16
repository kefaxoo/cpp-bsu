#include <iostream>

using namespace std;

int main()
{
   int size, menu, sign, min, max, countMin = 0, countMax = 0, indexMin, indexMax, j = 0, k = 0, a = 0;
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
    
    for (int i = 0; i < size; i++)
        if (m[i] < 0)
        {
            max = m[i];
            break;
        }
    
    while(true)
    {
        if (m[a] > 0)
        {
            min = m[a];
            break;
        }
        a++;
    }
    
    for (int i = 0; i < size; i++)
    {
        if ((m[i] < min) && (m[i] > 0))
            min = m[i];
        if ((m[i] > max) && (m[i] < 0))
            max = m[i];
    }
    
    for (int i = 0; i < size; i++)
    {
        if (m[i] == min)
            countMin++;
        if (m[i] == max)
            countMax++;
    }
    
    switch(countMin)
    {
        case 0:
            cout << endl << "Положительных чисел в массиве нет." << endl;
            break;
        
        case 1:
        {
            for (int i = 0; i < size; i++)
                if (m[i] == min)
                    indexMin = i;
            
            cout << endl << "Минимальный положительный элемент = " << min << " с индексом: " << indexMin << endl;
        }
            break;
            
        default:
        {
            int *indexMinM = new int[countMin];
            
            for (int i = 0; i < size; i++)
                if (m[i] == min)
                {
                    indexMinM[j] = i;
                    j++;
                }
            
            cout << endl << "Минимальный положительный элемент = " << min << " с индексами: ";
            
            for (int i = 0; i < countMin; i++)
                cout << indexMinM[i] << " ";
            
            cout << endl;
            
            delete [] indexMinM;
        }
    }
    
    switch(countMax)
    {
        case 0:
            cout << endl << "Отрицательных чисел в массиве нет." << endl;
            break;
        
        case 1:
        {
            for (int i = 0; i < size; i++)
                if (m[i] == max)
                    indexMax = i;
            
            cout << endl << "Максимальный отрицательный элемент = " << max << " с индексом: " << indexMax << endl;
        }
            break;
            
        default:
        {
            int *indexMaxM = new int[countMax];
            
            for (int i = 0; i < size; i++)
                if (m[i] == max)
                {
                    indexMaxM[j] = i;
                    j++;
                }
            
            cout << endl << "Максимальный отрицательный элемент = " << max << " с индексами: ";
            
            for (int i = 0; i < countMax; i++)
                cout << indexMaxM[i] << " ";
            
            cout << endl;
            
            delete [] indexMaxM;
        }
    }
    
    delete [] m;
}