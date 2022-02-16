#include <iostream>
#include <math.h>

using namespace std;

double findD(double w, double z) { // здесь можно обойтись двумя, так как по условию у нас расстояние от начала координат
    return sqrt(pow(w, 2) + pow(z, 2)); // здесь возводим тупо в квадрат, потому что расстояние от начала координат
}

void findMaxD(double x[], double y[], int sizeOfArray);

int main() {
    const int sizeOfArray = 5;
    double x[sizeOfArray] = {2, 4, 10, 2, 5};
    double y[sizeOfArray] = {5, 1, 2, 8, 9};
    
    findMaxD(x, y, sizeOfArray);
}

void findMaxD(double x[], double y[], int sizeOfArray) {
    double maxD = findD(x[0], y[0]), maxX = x[0], maxY = x[0];
    
    for (int i = 1; i < sizeOfArray; i++) {
        double temp = findD(x[i], y[i]);
        
        if (temp > maxD) {
            maxD = temp;
            maxX = x[i];
            maxY = y[i];
        }
    }
    
    cout << "Максимальное расстояние от начала координат: " << maxD << " имеет точка с координатами (" << maxX << "; " << maxY << ")" << endl;
}
