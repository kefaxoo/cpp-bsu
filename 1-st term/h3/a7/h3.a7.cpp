#include <iostream>

using namespace std;

int main()
{   
    setlocale(LC_ALL, "RUSSIAN");
    
    int size, menu, sign, first = 0, second = 0, third = 0, fourth = 0;
    bool boolMenu;
    
    cout << "Введите количество точек: ";
    cin >> size;
    
    int *x = new int[size];
    int *y = new int[size];
    
    while(true)
    {
        cout << endl << "Выберите каким способом ввести координаты: " << endl;
        cout << "1 - Координаты вводятся вручную пользователем" << endl;
        cout << "2 - Координаты заполняются рандомными числами" << endl;
        cout << "Введите номер способа: ";
        cin >> menu;
        
        switch(menu)
        {
            case 1:
            {
                for(int i = 0; i < size; i++)
                {
                    cout << endl << "Введите " << i + 1 << " координату по x: ";
                    cin >> x[i];
                    cout << endl << "Введите " << i + 1 << " координату по y: ";
                    cin >> y[i];
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
                            x[i] = rand();
                            break;
                            
                        case 2:
                            x[i] = -rand();
                    }
                    
                    sign = rand() % 2 + 1;
                    switch(sign)
                    {
                        case 1:
                            y[i] = rand();
                            break;
                            
                        case 2:
                            y[i] = -rand();
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
    {
        if (x[i] > 0)
        {
            if (y[i] > 0)
                first++;
            else
                fourth++;
        }
        else
        {
            if (y[i] > 0)
                second++;
            else
                third++;
        }
    }
    
    cout << endl << "Количество точек в первой четверти: " << first << endl;
    cout << "Количество точек во второй четверти: " << second << endl;
    cout << "Количество точек в третьей четверти: " << third << endl;
    cout << "Количество точек в четвёртой четверти: " << fourth << endl;
    
    delete [] x;
    delete [] y;
}