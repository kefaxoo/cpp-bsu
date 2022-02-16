#include <iostream>

using namespace std;

void ladder(double x[], double y[], int sizeOfArray);

int countOfPoints(double x[], double y[], int sizeOfArray) {
    int count = 0;
    const int x1 = -1, y1 = 0, x2 = 0, y2 = 1, x3 = 1, y3 = 0;
    
    for (int i = 0; i < sizeOfArray; i++) {
        int a = (x1 - x[i]) * (y2 - y1) - (x2 - x1) * (y1 - y[i]);
        int b = (x2 - x[i]) * (y3 - y2) - (x3 - x2) * (y2 - y[i]);
        int c = (x3 - x[i]) * (y1 - y3) - (x1 - x3) * (y3 - y[i]);
        
        if ((a >= 0 && b >= 0 && c >= 0) || (a <= 0 && b <= 0 && c <= 0))
            count++;
    }
    
    return count;
}

int main() {
    const int sizeOfArray = 5;
    double x[sizeOfArray] = {2, 0, 0, 3, 1}, y[sizeOfArray] = {1, 1, 3, 1, 2};
    
    cout << "Количество точек, принадлежащих треугольнику: " << countOfPoints(x, y, sizeOfArray) << endl;
    ladder(x, y, sizeOfArray);
}

void ladder(double x[], double y[], int sizeOfArray) {
    for (int i = 0; i < sizeOfArray; i++) {
        for (int j = sizeOfArray - i; j > 0; j--) {
            cout << " ";
        }
        cout << x[i] << " " << y[i] << endl;
    }
}
