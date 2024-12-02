#include <iostream>
#include "Дз_10.h"

using namespace std;

#define setrus setlocale(LC_ALL, "RUS")

int main()
{
    setrus;

    char operation;
    char operations[] = { '+', '-', '*', '/', '!', '^' };
    int first_num, second_num;

    while (true)
    {
        cout << "Введите символ математической операции из следующих: +, -, *, /, !, ^\n(или любой другой символ для завершения программы): ";
        cin >> operation;

        if (!(ifIn(operations, operation)))
        {
            cout << "Завершение программы.";
            exit(0);
        }
        else if (operation != '!')
        {
            cout << "Введите два целочисленных числа." << endl;
            cout << "Первое число: ";
            cin >> first_num;
            cout << "Второе число: ";
            cin >> second_num;
        }
        else
        {
            cout << "Введите одно целочисленное число: ";
            cin >> first_num;
        }

        switch (operation)
        {
        case '+':
            cout << first_num << " + " << second_num << " = ";
            cout << add(first_num, second_num) << endl;
            break;

        case '-':
            cout << first_num << " - " << second_num << " = ";
            cout << subtract(first_num, second_num) << endl;
            break;

        case '*':
            cout << first_num << " * " << second_num << " = ";
            cout << multiply(first_num, second_num) << endl;
            break;

        case '/':
            cout << first_num << " / " << second_num << " = ";
            cout << divide(first_num, second_num) << endl;
            break;

        case '!':
            cout << first_num << "!" << " = ";
            cout << factorial(first_num) << endl;
            break;

        case '^':
            cout << first_num << "^" << second_num << " = ";
            cout << power(first_num, second_num) << endl;
            break;

        }
    }

}