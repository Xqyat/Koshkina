#include <iostream>
using namespace std;
//1-----
//int main()
//{
//   int arr[7] = { 2, 3, 4, 5, 2, 8, 10 };
//   int arraylength = sizeof (arr) / sizeof (arr[0]);
//   for (int i = 0; i < arraylength; i++)
//   {
//       cout << arr[i] << endl;
//   }
//   return 0;
//}
//2-----
//int main()
//{
//	int arr[] = { 500, 4, 24, 15, 100, 105 };
//	int arrlength = sizeof(arr) / sizeof(arr[0]);
//	int sum = 0;
//	for (int i = 0; i < arrlength; ++i)
//	{
//		sum += arr[i];
//	}
//	cout << sum;
//	return 0;
//}
//3-----
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	int count = 0;
//	int n;
//	int arr[] = {3, 5, 8, 12, 13, 15, 20, 30, 1, 7, 24};
//	cout << "Введите число: ";
//	cin >> n;
//	int arrlength = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < arrlength; ++i)
//	{
//		if (arr[i] % n == 0)
//		{
//			++count;
//		}
//	}
//	cout << "Количество чисел кратных: "<< n << count;
//  return 0;
//}
//4-----
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	int arr[] = { 5, 4, 3, 4, 9 };
//	int arrlength = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 0; i < arrlength; ++i)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		if (arr[i] < min)
//			min = arr[i];
//	}
//	cout << "Разница между большим и меньшим элементами массива: " << max - min;
//  return 0;
//}
//5-----
//int main()
//{
//  int arr[] = { 5, 4, 3, 4, 9 };
//  int arr_len = sizeof(arr) / sizeof(arr[0]);
//  int imax;
//  int max = 0;
//  for (int i = 0; i < arr_len; ++i)
//  {
//    if (arr[i] > max)
//    {
//      max = arr[i];
//      imax = i;
//    }
//  }
//  cout << imax;
//  return 0;
//} 
//6-----
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	int size = 10;
//	int* a = new int[size];
//	int sum = 0;
//	for (int i = 0; i < size; ++i)
//	{
//		a[i] = i;
//		
//	}
//	
//	for (int i = 0; i < size; ++i)
//	{
//		sum += i;
//	}
//	cout << "Суума эдементов массива a: " << sum;
//	delete[] a;
//	return 0;
//}
//7-----
//int main()
//{
//  int size = 5;
//  int* arr = new int[size] { 1, 2, 3, 4, 5 };
//  int s;
//  for (int i1 = 0, i2 = (size - 1); i1 < i2; ++i1, --i2)
//  {
//    s = arr[i1];
//    arr[i1] = arr[i2];
//    arr[i2] = s;
//  }
//  for (int i = 0; i < size; ++i)
//  {
//    cout << arr[i];
//  }
//  delete[] arr;
//  return 0;
//}
//8-----
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	char stroka[] = { "AaBbCcDdEeFfGgggggg" };
//	int strokalength = sizeof(stroka) / sizeof(stroka[0]);
//	int count = 0;
//	for (int i = 0; i < strokalength; ++i)
//	{
//		if (isupper(stroka[i]))
//			count++;
//	}
//	cout << "Количество заглавных букв: " << count;
//  return 0;
//}
//9-----
//int main()
//{
//  char stroka[] = {"Aaaa132#aa"};
//  int size = sizeof(stroka) / sizeof(stroka[0]);
//  int c = 0;
//  for (int i = 0; i < size; ++i)
//  {
//    if (stroka[i] == 'A')
//    {
//      c += 1;
//    }
//  }
//  cout << c;
//  return 0;
//}
//10-----
//int main()
//{
//	setlocale(LC_ALL, "RUSSIAN");
//	char stroka[] = { "aaaabbbbccccdddd" };
//	int strokalength = sizeof(stroka) / sizeof(stroka[0]);
//	cout << "Строка в верхнем регистре: ";
//	for (int i = 0; i < strokalength; ++i)
//	{
//		putchar(toupper(stroka[i]));
//	}
//	return 0;
//}