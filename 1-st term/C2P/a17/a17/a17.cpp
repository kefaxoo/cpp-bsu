#include <iostream>
#include <math.h>

using namespace std;

double d(double u, double v, double w, double z) {
    double tempDx, tempDy;
    
    if (u > w)
        tempDx = u - w;
    else
        tempDx = w - u;
    
    if (v > z)
        tempDy = v - z;
    else
        tempDy = z - v;
    
    
    return sqrt(pow(tempDx, 2) + pow(tempDy, 2));
}

void giveXandY(double x[], double y[], int sizeOfArray, double w, double z);

int main() {
    const int sizeOfArray = 5;
    double x[sizeOfArray] = {8, 3, 8, 6, 5}, y[sizeOfArray] = {8, 4, 8, 6, 7}, w, z;
    
    cout << "Введите координату точки по X: ";
    cin >> w;
    cout << endl << "Введите координату точки по Y: ";
    cin >> z;
    
    giveXandY(x, y, sizeOfArray, w, z);
}

void giveXandY(double x[], double y[], int sizeOfArray, double w, double z) {
    double u, v, maxD = 0, arrayOfD[sizeOfArray];
    int count = 1;
    
    for (int i = 0; i < sizeOfArray; i++) {
        u = x[i];
        v = y[i];
        
        arrayOfD[i] = d(u, v, w, z);
        
        if (maxD < arrayOfD[i])
            maxD = arrayOfD[i];
    }
    
    cout << "Точка(-и) с максимальным расстоянием " << maxD << "  до заданной точки: " << endl;
    
    for (int i = 0; i < sizeOfArray; i++) {
        if (arrayOfD[i] == maxD)
            cout << count++ << ") x: " << x[i] << "; y: " << y[i] << endl;
    }
}
