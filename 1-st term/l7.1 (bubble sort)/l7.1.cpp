#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUSSIAN");
    
    const int size = 10;
    int m[size];
    
    for (int i = 0; i < size; i++)
    {
        cout << endl << "Введите " << i + 1 << " элемент массива: ";
        cin >> m[i];
    }
    
    for (int i = 0; i < (size - 1); i++)
        for (int j = i; j < size; j++)
        if (m[j] > m[i])
        {
            int temp = m[i];
            m[i] = m[j];
            m[j] = temp;
        }
            
    for (int i = 0; i < size; i++)
        cout << endl << i + 1 << ") " << m[i];
    
    cout << endl;
}
