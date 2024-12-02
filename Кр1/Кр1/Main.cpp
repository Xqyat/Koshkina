#include <iostream>
#include "Кр1.h"
using namespace std;
#define setrus setlocale(LC_ALL, "RUS")
//1-----
//int main() 
//{
//	setrus;
//	char str[100];
//	cout << "Введите строчку: ";
//	cin.getline(str, 100);
//	int count = 0;
//	for (int i = 0; str[i - 1] != '\0'; ++i)
//	{
//		if (str[i] == 'A')
//		{
//			count += 1;
//		}
//	}
//	cout << "Количество букв A: " << count;
//}
//2-----
//int main()
//{
//	int sum = 0;
//	for (int i = 0; sum < 1000; i++)
//	{
//		sum = i + (i+1);
//	}
//	cout << sum;
//}
//3-----
//int main()
//{
//	int arr[] = {5, 4, 3, 4, 9};
//	int arrlength = sizeof(arr) / sizeof(arr[0]);
//	int max = arr[0], min = arr[0];
//	for (int i = 0; i < arrlength; i++)
//	{
//		if (max <= arr[i])
//		{
//			max = arr[i];
//		}
//		if (min >= arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	cout << max << " - " << min << " = "<< max - min;
//}
//4-----
//int main()
//{
//	int arr[] = { 500, 4, 24, 15, 100, 105 };
//	int arrlength = sizeof(arr) / sizeof(arr[0]);
//	int sum = 0;
//	for (int i = 0; i < arrlength; i++)
//	{
//		sum += arr[i];
//	}
//	cout << sum;
//}
//5-----
//int main()
//{
//	setrus;
//	char str[100];
//	cout << "Введите строку строчными буквами: ";
//	cin.getline(str, 100);
//	cout << "Строка с заглавными буквами: ";
//	for (int i = 0; str[i - 1] != '\0'; ++i)
//	{
//		putchar(toupper(str[i]));
//	}
//}
//6-----
//int sum(int* arr, int n)
//{
//	return arr[n] + n;
//}
//
//int main()
//{
//	setrus;
//	int size;
//	cout << "Введите длину массива: ";
//	cin >> size;
//	int* arr = new int[size];
//	int n;
//	cout << "Введите число n: ";
//	cin >> n;
//	for (int i = 0; i < size; ++i)
//	{
//		cout << "Введите элемент массива: ";
//		cin >> arr[i];
//	}
//	cout << "Сумма n и n-го элемента массива: " << sum(arr, n);
//}
//7-----
//int square(int n)
//{
//	return n*n;
//}
//int main()
//{
//	setrus;
//	int n;
//	cout << "Введите число n: ";
//	cin >> n;
//	cout << "Квадрат числа n:" << square(n);
//}
//8-----
//int countOdd(int* arr, int size)
//{
//	int count = 0;
//	for (int i = 0; i < size; ++i)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			++count;
//		}
//	}
//	return count;
//}
//int main()
//{
//	setrus;
//	int size;
//	cout << "Введите длину массива: ";
//	cin >> size;
//	int* arr = new int[size];
//	for (int i = 0; i < size; ++i)
//	{
//		cout << "Введите элемент массива: ";
//		cin >> arr[i];
//	}
//	cout << "Количество чётных элементов массива: " << countOdd(arr, size);
//}
//9-----
//int main()
//{
//	setrus;
//	int size1;
//	cout << "Введите длину 1 массива: ";
//	cin >> size1;
//	int* arr1 = new int[size1];
//	for (int i = 0; i < size1; ++i)
//	{
//		cout << "Введите элемент массива: ";
//		cin >> arr1[i];
//	}
//	int size2;
//	cout << "Введите длину 2 массива: ";
//	cin >> size2;
//	float* arr2 = new float[size2];
//	for (int i = 0; i < size2; ++i)
//	{
//		cout << "Введите элемент массива: ";
//		cin >> arr2[i];
//	}
//	cout << "Введите число для проверки на нахождение в 1 массиве: ";
//	int n1;
//	cin >> n1;
//	cout << "Введите число для проверки на нахождение в 2 массиве: ";
//	float n2;
//	cin >> n2;
//	cout << contains(arr1, n1, size1) << endl;
//	cout << contains(arr2, n2, size2) << endl;
//}
//10-----
int main()
{
	setrus;
	int size1;
	cout << "Введите длину 1 массива: ";
	cin >> size1;
	int* arr1 = new int[size1];
	for (int i = 0; i < size1; ++i)
	{
		cout << "Введите элемент массива: ";
		cin >> arr1[i];
	}
	int size2;
	cout << "Введите длину 2 массива: ";
	cin >> size2;
	float* arr2 = new float[size2];
	for (int i = 0; i < size2; ++i)
	{
		cout << "Введите элемент массива: ";
		cin >> arr2[i];
	}
	int* new_arr1 = new int[size1];
	float* new_arr2 = new float[size2];
	copyArray(arr1, new_arr1, size1);
	copyArray(arr2, new_arr2, size2);
	cout << "Копия целочисленного массива: ";
	cout << "{ ";
	for (int i = 0; i < size1; ++i)
	{
		if (i != size1 - 1) cout << new_arr1[i] << ", ";
		else cout << new_arr1[i];
	}
	cout << " }\n";
	cout << "Копия вещественного массива: ";
	cout << "{ ";
	for (int i = 0; i < size2; ++i)
	{
		if (i != size2 - 1) cout << new_arr2[i] << ", ";
		else cout << new_arr2[i];
	}
	cout << " }\n";

	delete[] arr1;
	delete[] arr2;
	delete[] new_arr1;
	delete[] new_arr2;
}