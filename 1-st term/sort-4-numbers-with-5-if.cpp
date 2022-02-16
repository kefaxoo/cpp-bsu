#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL,"RUSSIAN");
    
    int a, b, c, d, minA, minB, maxA, maxB, min, second, third, max, temp;
    
    cout << "Введите первое число: ";
    cin >> a;
    
    cout << endl << "Введите второе число: ";
    cin >> b;
    
    cout << endl << "Введите третье число: ";
    cin >> c;
    
    cout << endl << "Введите четвёртое число: ";
    cin >> d;
    
    cout << endl << "Сортировка чисел по возрастанию: " << endl;
    
    if (b > a)
    {
        minA = a;
        maxA = b;
    }
    else
        {
            minA = b;
            maxA = a;
        }
    
    if (d > c)
    {
        minB = c;
        maxB = d;
    }
    else
        {
            minB = d;
            maxB = c;
        }
    
    if (minB > minA)
    {
        min = minA;
        second = minB;
    }
    else
    {
        min = minB;
        second = minA;
    }
    
    if (maxB > maxA)
    {
        third = maxA;
        max = maxB;
    }
    else
    {
        third = maxB;
        max = maxA;
    }
    
    if (second > third)
    {
        temp = third;
        third = second;
        second = temp;
    }
    
    cout << "1 - " << min << endl;
    cout << "2 - " << second << endl;
    cout << "3 - " << third << endl;
    cout << "4 - " << max << endl;
}
