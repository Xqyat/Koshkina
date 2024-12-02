// Функция для шифрования/дешифрования символа
char caesarCipher(char ch, int shift, bool encrypt)
{

    // Уменьшаем сдвиг если он больше длины алфавита
    shift %= 26;

    // Шифруем символ 
    if (encrypt)
    {
        if (ch >= 'A' and ch <= 'Z')
        {
            if (('Z' - ch) - shift >= 0) return ch + shift;
            else return 'A' + (shift - ('Z' - ch) - 1);
        }
        else if (ch >= 'a' and ch <= 'z')
        {
            if (('z' - ch) - shift >= 0) return ch + shift;
            else return 'a' + (shift - ('z' - ch) - 1);
        }
    }
    // Дешифруем символ
    else
    {
        if (ch >= 'A' and ch <= 'Z')
        {
            if ((ch - 'A') - shift >= 0) return ch - shift;
            else return 'Z' - (shift - (ch - 'A') - 1);
        }
        else if (ch >= 'a' and ch <= 'z')
        {
            if ((ch - 'a') - shift >= 0) return ch - shift;
            else return 'z' - (shift - (ch - 'a') - 1);
        }
    }

    // Если символ оказался не буквой возвращаем его без изменений
    return ch;
}