#include <iostream>
#include <math.h>

using namespace std;

int check10to16(int a) {
    int t = a, num = 0, countLetters = 0;
    
    while (t != 0)
    {
        t /= 16;
        num++;
    }
    
    while (num != 0)
    {
        t = a;
        t /= pow(16, num - 1);
        t %= 16;
        num--;
        
        switch (t)
        {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
                break;
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                countLetters++;
        }
    }
    
    return countLetters;
}

int main() {
    // числа вводятся до ввода нуля или отрицательного числа
    
    setlocale(LC_ALL, "RUSSIAN");
    
    int a, countNumbersWithoutLetters = 0;
    
    while(true) {
        cout << "Чтобы завершить программу введите 0 или отрицательное число." << endl;
        cout << "Введите число: ";
        cin >> a;
        cout << endl;
        
        if (a <= 0)
            exit(0);
        else
            if (check10to16(a) > 0)
                cout << "Если представить число " << a << " в шестнадцатиричной системе исчисления, то в нём будет " << check10to16(a) << " букв" << endl;
            else
                countNumbersWithoutLetters++;
        
        cout << "Введено " << countNumbersWithoutLetters << " чисел, которые не имеют букв в шестнадцатиричной системе исчисления" << endl;
    }
}
