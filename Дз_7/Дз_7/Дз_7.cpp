#include <iostream>
using namespace std;
#define setrus setlocale(LC_ALL, "RUS");

//1-----
//int sum_arr(int arr[], int size, int i)
//{
//	if (i < size-1)
//	{
//		return arr[i] + sum_arr(arr, size, i + 1);
//	}
//	else
//	{
//		return arr[i];
//	}
//}
//
//
//
//int main()
//{
//    setrus;
//	int size;
//	int a;
//	cout << "Введите размер массива: ";
//	cin >> size;
//	int* arr = new int[size];
//	for (int i = 0; i < size; ++i)
//	{
//		cout << "Введите " << i << " элемент массива: ";
//		cin >> a;
//		arr[i] = a;
//	}
//	cout << sum_arr(arr, size, 0);
//	delete[] arr;
//}
//2-----
int copy_arr(char arr1[], char arr2[], int size, int i)
{
	if (i < size)
	{
		arr2[i] = arr1[i];
		return copy_arr(arr1, arr2, size, i + 1);
	}
	else
	{
		return 0;
	}
}



int main()
{
	setrus;
	char str1[100], str2[100];
	cout << "Введите первую строку:" << endl;
	cin.getline(str1, 100);
	int size = 0;
	for (int i = 0; str1[i-1] != '\0'; ++i)
	{
		size += 1;
	}
	copy_arr(str1, str2, size, 0);
	for (int i = 0; i < size; ++i)
	{
		cout << str2[i];
	}
	return 0;
}
