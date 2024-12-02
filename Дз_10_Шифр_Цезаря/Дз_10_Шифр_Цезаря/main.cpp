#include <iostream>
#include <string>
#include "Дз10.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    string line;
    char ch;
    bool encrypt;
    int shift;
    do
    {
        cout << "Введите символ операции: E для шифрования и D для дешифрования\n(при написании иного символа программа завершит работу): ";
        cin >> ch;
        if (ch == 'E' or ch == 'e') encrypt = true;
        else if (ch == 'D' or ch == 'd') encrypt = false;
        else
        {
            cout << "Неправильно выбрана операция!";
            exit(0);
        }

        cout << "Введите строку для шифрования/дешифрования:\n";
        cin.ignore();
        getline(cin, line);

        cout << "Введите длину сдвига: ";
        cin >> shift;
        
        for (int i = 0; i < line.length(); ++i)
        {
            line[i] = caesarCipher(line[i], shift, encrypt);
        }

        cout << "Результат:\n" << line << endl << endl;
    } while (true);
}
