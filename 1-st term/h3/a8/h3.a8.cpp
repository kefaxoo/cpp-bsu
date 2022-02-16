#include <iostream>
#include <math.h>

using namespace std;

int main()
{    
    setlocale(LC_ALL, "RUSSIAN");
    
    int size, menu, sign, x, y, minPoint, minIndex, tempPoint;
    bool boolMenu;
    
    cout << "Введите количество точек: ";
    cin >> size;
    
    int *xM = new int[size];
    int *yM = new int[size];
    
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
                    cin >> xM[i];
                    cout << endl << "Введите " << i + 1 << " координату по y: ";
                    cin >> yM[i];
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
                            xM[i] = rand();
                            break;
                            
                        case 2:
                            xM[i] = -rand();
                    }
                    
                    sign = rand() % 2 + 1;
                    switch(sign)
                    {
                        case 1:
                            yM[i] = rand();
                            break;
                            
                        case 2:
                            yM[i] = -rand();
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
    
    cout << endl << "Введите координату точки по x: ";
    cin >> x;
    cout << endl << "Введите координату точки по y: ";
    cin >> y;
    
    if (abs(xM[0]) < x)
    {
        if (abs(yM[0]) < y)
        {
            minPoint = sqrt(pow(x - xM[0], 2) + pow(y - yM[0], 2));
            minIndex = 0;
        }
        else
        {
            minPoint = sqrt(pow(x - xM[0], 2) + pow(yM[0] - y, 2));
            minIndex = 0;
        }
    }
    else
    {
        if (abs(yM[0]) < y)
        {
            minPoint = sqrt(pow(xM[0] - x, 2) + pow(y - yM[0], 2));
            minIndex = 0;
        }
        else
        {
            minPoint = sqrt(pow(xM[0] - x, 2) + pow(yM[0] - y, 2));
            minIndex = 0;
        }
    }
    
    
    for (int i = 0; i < size; i++)
    {
        if (abs(xM[i]) < x)
        {
            if (abs(yM[i]) < y)
                tempPoint = sqrt(pow(x - xM[i], 2) + pow(y - yM[i], 2));
            else
                tempPoint = sqrt(pow(x - xM[i], 2) + pow(yM[i] - y, 2));
        }
        else
        {
            if (abs(yM[i]) < y)
                tempPoint = sqrt(pow(xM[i] - x, 2) + pow(y - yM[i], 2));
            else
                tempPoint = sqrt(pow(xM[i] - x, 2) + pow(yM[i] - y, 2));
        }
        
        if (minPoint > tempPoint)
        {
            minPoint = tempPoint;
            minIndex = i;
        }
    }
    
    cout << endl << "Точка с индексом: " << minIndex << " с координатами x: " << xM[minIndex] << " y: " << yM[minIndex] << " - с наименьшим расстоянием до заданной пользователем точки" << endl;
    
    delete [] xM;
    delete [] yM;
}