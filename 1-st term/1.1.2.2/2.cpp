#include <iostream>
using namespace std;
int main()
{
    /*  На плоскости заданы две точки: A(x1,y1) и B(x2,y2). Определить, какой из отрезков: OA или OB – образует больший угол с осью Ox. */
    
    setlocale(LC_ALL, "RUSSIAN");
    
    int x1, x2, y1, y2, k1, k2;
    
    cout << "Введите первую координату по x: ";
    cin >> x1;
    cout << endl << "Введите первую координату по y: ";
    cin >> y1;
    
    cout << endl << "Введите вторую координату по x: ";
    cin >> x2;
    cout << endl << "Введите вторую координату по y: ";
    cin >> y2;
    
    // сделано не по правилам математики, но так требовал препод))
    
    k1 = abs(y1) / abs(x1);
    k2 = abs(y2) / abs(x2);
    
    if (k1 == k2)
        cout << endl << "Угол одинаковый" << endl;
    else
    {
        if (k1 > k2)
            cout << endl << "Угол больший у прямой OA" << endl;
        else
            cout << endl << "Угол больший у прямой OB" << endl;
    }
}
