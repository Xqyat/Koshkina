// ������� ��� ����������/������������ �������
char caesarCipher(char ch, int shift, bool encrypt)
{

    // ��������� ����� ���� �� ������ ����� ��������
    shift %= 26;

    // ������� ������ 
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
    // ��������� ������
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

    // ���� ������ �������� �� ������ ���������� ��� ��� ���������
    return ch;
}