#include <iostream>
#include <math.h>

using namespace std;

void Otr(double x1, double y1, double x2, double y2, double x3, double y3) {
    double d1, d2, d3, tempX, tempY; // d1 - 1+2, d2 - 1+3, d3 - 2+3
    
    x1 = abs(x1);
    y1 = abs(y1);
    x2 = abs(x2);
    y2 = abs(y2);
    x3 = abs(x3);
    y3 = abs(y3);
    
    if (x1 > x2)
        tempX = x1 - x2;
    else
        tempX = x2 - x1;
    
    if (y1 > y2)
        tempY = y1 - y2;
    else
        tempY = y2 - y1;
    
    d1 = sqrt(pow(tempX, 2) + pow(tempY, 2));
    
    if (x1 > x3)
        tempX = x1 - x3;
    else
        tempX = x3 - x1;
    
    if (y1 > y3)
        tempY = y1 - y3;
    else
        tempY = y3 - y1;
    
    d2 = sqrt(pow(tempX, 2) + pow(tempY, 2));
    
    if (x2 > x3)
        tempX = x2 - x3;
    else
        tempX = x3 - x2;
    
    if (y2 > y3)
        tempY = y2 - y3;
    else
        tempY = y3 - y2;
    
    d3 = sqrt(pow(tempX, 2) + pow(tempY, 2));
    
    double min = d1, middle;
    
    if (min > d2)
        min = d2;
    else
        if (min > d3)
            min = d3;
    
    if (min == d1)
        if (d2 > d3)
            middle = d3;
        else
            middle = d2;
    else
        if (min == d2)
            if (d1 > d3)
                middle = d3;
            else
                middle = d1;
        else
            if (d2 > d1)
                middle = d1;
            else
                middle = d2;
    
    if (min == d1)
        cout << endl << "Миниммальное расстояние между точками 1 и 2" << endl;
    else
        if (min == d2)
            cout << endl << "Миниммальное расстояние между точками 1 и 3" << endl;
        else
            cout << endl << "Миниммальное расстояние между точками 2 и 3" << endl;
    
    if (middle == d1)
        cout << endl << "Второе минимальное по возрастанию расстояние между точками 1 и 2" << endl;
    else
        if (middle == d2)
            cout << endl << "Второе минимальное по возрастанию расстояние между точками 1 и 3" << endl;
        else
            cout << endl << "Второе минимальное по возрастанию расстояние между точками 2 и 3" << endl;

}

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    cout << "Введите координату первой точки по х: ";
    cin >> x1;
    cout << endl << "Введите координату первой точки по y: ";
    cin >> y1;
    
    cout << endl << "Введите координату первой точки по х: ";
    cin >> x2;
    cout << endl << "Введите координату первой точки по y: ";
    cin >> y2;
    
    cout << endl << "Введите координату третьей точки по х: ";
    cin >> x3;
    cout << endl << "Введите координату третьей точки по y: ";
    cin >> y3;
    
    Otr(x1, y1, x2, y2, x3, y3);
}
