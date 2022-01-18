#include <iostream>
using namespace std;
int main()
{
    /*  Дата некоторого дня характеризуется тремя натуральными числами: номер года, порядковый номер месяца и день. По вводимым пользователем значениям определить дату следующего дня и дату предыдущего дня. */
    
    setlocale(LC_ALL, "RUSSIAN");
    
    int year, month, day; // даты, вводимые пользоватлем
    bool leapYear; // переменная для високосного года
    int dayInAMonth; // переменные для упрощения вычислений
    
    cout << "Введите год: ";
    cin >> year;
    
    /* инструкция к вычислению високосного года:
     
       1) Если год не делится на 4, значит он обычный.
       2) Иначе надо проверить не делится ли год на 100.
       3) Если не делится, значит это не столетие и можно сделать вывод, что год високосный.
       4) Если делится на 100, значит это столетие и его следует проверить его делимость на 400.
       5) Если год делится на 400, то он високосный.
       6) Иначе год обычный.
     
       1 - високосный
       0 - не високосный */
    
    if (year >= 1) // проверка существования года + если возможно перевод года для упрощения вычислений
    {
        if ((year % 4) == 0) // проверка на високосность
            leapYear = true;
        else
        {
            if ((year % 100) == 0)
            {
                if ((year % 400) == 0)
                    leapYear = true;
                else
                    leapYear = true;
            }
            else
                leapYear = false;
        }
    }
    else
    {
        cout << endl << "Введён неправильный год" << endl;
        exit(0);
    }
    
    cout << endl << "Введите номер месяца: ";
    cin >> month;
    
    /* 1 Январь - 31 день 1
       2 Февраль - 28 дней (29 в високосном) 3
       3 Март - 31 день 1
       4 Апрель - 30 дней 2
       5 Май - 31 день 1
       6 Июнь - 30 дней 2
       7 Июль - 31 день 1
       8 Август - 31 день 1
       9 Сентябрь - 30 дней 2
       10 Октябрь - 31 день 1
       11 Ноябрь - 30 дней 2
       12 Декабрь - 31 день 1
     
       1 - 31
       2 - 30
       3 - february */
    
    switch(month) // перевод месяца для упрощения вычислений
    {
        case 2:
            dayInAMonth = 3;
            break;
            
        case 4:
        case 6:
        case 9:
        case 11:
            dayInAMonth = 2;
            break;
            
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            dayInAMonth = 1;
            break;
            
        default:
        {
            cout << endl << "Введён неправильный месяц" << endl;
            exit(0);
        }
    }
    
    cout << endl << "Введите номер дня: ";
    cin >> day;
    
    if ((day > 0) && (day < 32)) // проверка на существование даты
    {
        switch(month)
        {
            case 2:
            {
                if (day == 29)
                {
                    if (leapYear == true)
                        break;
                    else
                    {
                        cout << endl << "Введена неправильная дата" << endl;
                        exit(0);
                    }
                }
                else
                {
                    if (day <= 28)
                        break;
                    else
                    {
                        cout << endl << "Введена неправильная дата" << endl;
                        exit(0);
                    }
                }
            }
                break;
                
            case 4:
            case 6:
            case 9:
            case 11:
                if (day > 30)
                    {
                        cout << endl << "Введена неправильная дата" << endl;
                        exit(0);
                    }
                break;
                
            default:
                break;
        }
    }
    else
    {
        cout << endl << "Введена неверная дата" << endl;
        exit(0);
    }
    
    cout << endl << "Текущая дата: "  << day << " ";
    switch(month)
    {
        case 1:
            cout << "января ";
            break;
            
        case 2:
            cout << "февраля ";
            break;
            
        case 3:
            cout << "марта ";
            break;
            
        case 4:
            cout << "апреля ";
            break;
            
        case 5:
            cout << "мая ";
            break;
            
        case 6:
            cout << "июня ";
            break;
            
        case 7:
            cout << "июля ";
            break;
            
        case 8:
            cout << "августа ";
            break;
            
        case 9:
            cout << "сентября ";
            break;
            
        case 10:
            cout << "октября ";
            break;
            
        case 11:
            cout << "ноября ";
            break;
            
        case 12:
            cout << "декабря ";
            break;
    }
    cout << year << " года" << endl;
    
    cout << "Предыдущий день: ";
    
    switch(day) // получение номера дня
    {
        case 1:
            switch(month)
            {
                case 1:
                case 2:
                case 4:
                case 6:
                case 8:
                case 9:
                case 11:
                    cout << "31 ";
                    break;
                    
                case 3:
                {
                    if (leapYear == true)
                        cout << "29 ";
                    else
                        cout << "28 ";
                }
                    
                case 5:
                case 7:
                case 10:
                case 12:
                    cout << "30 ";
                    break;
            }
            break;
            
        default:
            cout << day - 1 << " ";
    }
    
    if (day == 1) // получение месяца
        switch(month)
        {
            case 1:
                cout << "декабря ";
                break;
                
            case 2:
                cout << "января ";
                break;
                
            case 3:
                cout << "февраля ";
                break;
                
            case 4:
                cout << "марта ";
                break;
                
            case 5:
                cout << "апреля ";
                break;
                
            case 6:
                cout << "мая ";
                break;
                
            case 7:
                cout << "июня ";
                break;
                
            case 8:
                cout << "июля ";
                break;
                
            case 9:
                cout << "августа ";
                break;
                
            case 10:
                cout << "сентября ";
                break;
                
            case 11:
                cout << "октября ";
                break;
                
            case 12:
                cout << "ноября ";
                break;
        }
    else
        switch (month)
        {
            case 1:
                cout << "января ";
                break;
                
            case 2:
                cout << "февраля ";
                break;
                
            case 3:
                cout << "марта ";
                break;
                
            case 4:
                cout << "апреля ";
                break;
                
            case 5:
                cout << "мая ";
                break;
                
            case 6:
                cout << "июня ";
                break;
                
            case 7:
                cout << "июля ";
                break;
                
            case 8:
                cout << "августа ";
                break;
                
            case 9:
                cout << "сентября ";
                break;
                
            case 10:
                cout << "октября ";
                break;
                
            case 11:
                cout << "ноября ";
                break;
                
            case 12:
                cout << "декабря ";
                break;
        }
    
    if ((day == 1) && (month == 1)) // получение года
    {
        if (year == 1)
            cout << year + 1 << " года" << endl;
        else
            cout << year - 1 << " года" << endl;
    }
    else
        cout << year << " года" << endl;
    
    cout << "Следущий день: ";
    
    switch(day) // получение номера дня
    {
        case 28:
            if ((month == 2) && (leapYear == false))
                cout << "1 ";
            else
                cout << "29 ";
            break;
            
        case 29:
            if ((month == 2) && (leapYear == true))
                cout << "1 ";
            else
            {
                if ((dayInAMonth == 1) || (dayInAMonth == 2))
                cout << "30 ";
            }
            break;
            
        case 30:
            if (dayInAMonth == 2)
                cout << "1 ";
            else
                if (dayInAMonth == 1)
                    cout << "31 ";
            break;
            
        case 31:
            if (dayInAMonth == 1)
                cout << "1 ";
            break;
            
        default:
            cout << day + 1 << " ";
    }
    
    switch(day) // получение месяца
    {
        case 28:
            if (month == 2)
                cout << "марта ";
            else
                switch(month)
                {
                    case 1:
                        cout << "января ";
                        break;
                        
                    case 3:
                        cout << "марта ";
                        break;
                        
                    case 4:
                        cout << "апреля ";
                        break;
                        
                    case 5:
                        cout << "мая ";
                        break;
                        
                    case 6:
                        cout << "июня ";
                        break;
                        
                    case 7:
                        cout << "июля ";
                        break;
                        
                    case 8:
                        cout << "августа ";
                        break;
                        
                    case 9:
                        cout << "сентября ";
                        break;
                        
                    case 10:
                        cout << "октября ";
                        break;
                        
                    case 11:
                        cout << "ноября ";
                        break;
                        
                    case 12:
                        cout << "декабря ";
                        break;
                }
                cout << month << " ";
            break;
            
        case 29:
            if ((month == 2) && (leapYear == true))
                cout << "марта ";
            else
                switch(month)
                {
                    case 1:
                        cout << "января ";
                        break;
                        
                    case 3:
                        cout << "марта ";
                        break;
                        
                    case 4:
                        cout << "апреля ";
                        break;
                        
                    case 5:
                        cout << "мая ";
                        break;
                        
                    case 6:
                        cout << "июня ";
                        break;
                        
                    case 7:
                        cout << "июля ";
                        break;
                        
                    case 8:
                        cout << "августа ";
                        break;
                        
                    case 9:
                        cout << "сентября ";
                        break;
                        
                    case 10:
                        cout << "октября ";
                        break;
                        
                    case 11:
                        cout << "ноября ";
                        break;
                        
                    case 12:
                        cout << "декабря ";
                        break;
                }
            break;
            
        case 30:
            switch(month)
            {
                case 1:
                    cout << "января ";
                    break;
                    
                case 3:
                    cout << "марта ";
                    break;
                    
                case 4:
                case 5:
                    cout << "мая ";
                    break;
                    
                case 6:
                case 7:
                    cout << "июля ";
                    break;
                    
                case 8:
                    cout << "августа ";
                    break;
                    
                case 9:
                case 10:
                    cout << "октября ";
                    break;
                    
                case 11:
                case 12:
                    cout << "декабря ";
            }
            
        case 31:
            switch(month)
            {
                case 1:
                    cout << "февраля ";
                    break;
                    
                case 3:
                    cout << "апреля ";
                    break;
                    
                case 5:
                    cout << "июня ";
                    break;
                    
                case 7:
                    cout << "августа ";
                    break;
                    
                case 8:
                    cout << "сентября ";
                    break;
                    
                case 10:
                    cout << "ноября ";
                    break;
                    
                case 12:
                    cout << "января ";
                    break;
            }
            break;
            
        default:
            switch(month)
            {
                case 1:
                    cout << "января ";
                    break;
                    
                case 2:
                    cout << "февраля ";
                    break;
                    
                case 3:
                    cout << "марта ";
                    break;
                    
                case 4:
                    cout << "апреля ";
                    break;
                    
                case 5:
                    cout << "мая ";
                    break;
                    
                case 6:
                    cout << "июня ";
                    break;
                    
                case 7:
                    cout << "июля ";
                    break;
                    
                case 8:
                    cout << "августа ";
                    break;
                    
                case 9:
                    cout << "сентября ";
                    break;
                    
                case 10:
                    cout << "октября ";
                    break;
                    
                case 11:
                    cout << "ноября ";
                    break;
                    
                case 12:
                    cout << "декабря ";
                    break;
            }
    }
    
    if ((day == 31) && (month == 12)) // получение года
        cout << year + 1 << " года" << endl;
    else
        cout << year << " года" << endl;
}
