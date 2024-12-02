#include <iostream>
using namespace std;
#define setrus setlocale(LC_ALL, "RUS")
//1-----
//int main()
//{
//    setrus;
//    cout << "Введите день недели: ";
//    int day;
//    cin >> day;
//    switch(day)
//    {
//        case 1:
//            cout << "Понедельник";
//            break;
//        case 2:
//            cout << "Вторник";
//            break;
//        case 3:
//            cout << "Среда";
//            break;
//        case 4:
//            cout << "Четверг";
//            break;
//        case 5:
//            cout << "Пятница";
//            break;
//        case 6:
//            cout << "Суббота";
//            break;
//        case 7:
//            cout << "Воскресенье";
//            break;
//        default:
//            cout << "В неделе только 7 дней!";
//            break;
//    }
//	  return 0;
//}
//2-----
//int main()
//{
//	int x = 2;
//	int c = 1;
//	while (c < 10)
//	{
//		x *= 2;
//		c++;
//	}
//	cout << x;
//	return 0;
//}
//3-----
//int main()
//{
//	setrus;
//	int n, c = 1, res = 1;
//	cout << "Введите число n: ";
//	cin >> n;
//	while (c <= n)
//	{
//		res *= c++;
//	}
//	cout << "Факториал числа " << n << ": " << res;
//	return 0;
//}
//4-----
//int main()
//{
//	setrus;
//	int n, a = 2;
//	cout << "Введите число n: ";
//	cin >> n;
//	while (a <= n)
//	{
//		cout << a << endl;
//		a += 2;
//	}
//	return 0;
//}
//5-----
//int main()
//{
//	for (int x = 10; x > 0; x -= 2)
//	{
//		cout << x << endl;
//	}
//  return 0;
//}
//6-----
//int main()
//{
//  int sum = 0, c = 1;
//  while ((c <= 100) && (sum <= 1000))
//  {
//    sum += c;
//    c++;
//  }
//  cout << sum;
//}
//7-----
//int main()
//{
//	setrus;
//	int n, d;
//	cout << "Введите число n: ";
//	cin >> n;
//	if (n > 1)
//	{
//		d = n - 1;
//		for (d; d > 0; d--)
//		{
//			if ((n % d == 0) && (d != 1))
//			{
//				cout << "n не простое число" << endl;
//				break;
//			}
//			else if (d == 1)
//			{
//				cout << "n простое число" << endl;
//				break;
//			}
//		}
//	}
//	else
//	{
//		cout << "n не простое число" << endl;
//	}
//	return 0;
//}
//8-----
//int main()
//{
//    setrus;
//    char opr;
//    int x, y;
//    cout << "Введите операцию: ";
//    cin >> opr;
//    cout << "Введите первое число: ";
//    cin >> x;
//    cout << "Введите второе число: ";
//    cin >> y;
//    switch (opr)
//    {
//    case '+':
//        cout << x << " + " << y << " = " << x + y;
//        break;
//    case '-':
//        cout << x << " - " << y << " = " << x - y;
//        break;
//    case '*':
//        cout << x << " * " << y << " = " << x * y;
//        break;
//    case '/':
//        cout << x << " / " << y << " = " << x / y;
//        break;
//    case '!':
//    {
//        int c = 2, fx = 1, fy = 1;
//        while (c <= x)
//        {
//            fx *= c;
//            c++;
//        }
//        c = 2;
//        while (c <= y)
//        {
//            fy *= c;
//            c++;
//        }
//        cout << "x! = " << fx << endl;
//        cout << "y! = " << fy;
//    }
//    break;
//    case '^':
//    {
//        int c = 2, res = x;
//        while (c <= y)
//        {
//            res *= x;
//            c++;
//        }
//        cout << x << '^' << y << " = " << res;
//    }
//    break;
//    }
//}