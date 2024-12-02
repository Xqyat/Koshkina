#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;

#define setrus setlocale(LC_ALL, "RUS")

//1-----
//int square(int i)
//{
//    return i * i;
//}
//int main()
//{
//    setrus;
//    int i;
//    cout << "Введите i: ";
//    cin >> i;
//    cout << square(i);
//    return 0;
//}
//2-----
//float sqrti(float x)
//{
//	if (x > 0)
//	{
//		return sqrt(x);
//	}
//	else
//	{
//		cout << "Negative argument";
//		exit(0);
//	}
//}
//
//int main()
//{
//	float x;
//	cin >> x;
//	cout << sqrti(x);
//}
//3-----
//float multiplyOrAdd(float x, float y, bool add = true)
//{
//	if (add)
//	{
//		return x + y;
//	}
//	else
//	{
//		return x * y;
//	}
//}
//int main()
//{
//	setrus;
//	int x, y;
//	bool add;
//	cout << "Введите х: ";
//	cin >> x;
//	cout << "Введите y: ";
//	cin >> y;
//	cout << "Введите 1 или 0: ";
//	cin >> add;
//	cout << multiplyOrAdd(x, y, add);
//	return 0;
//}
//4-----
//int countOdd(int elements[], int size)
//{
//	int count = 0;
//	for (int i = 0; i < size; ++i)
//	{
//		if (elements[i] % 2 == 0)
//		{
//			++count;
//		}
//	}
//	return count;
//}
//int main()
//{
//  setrus;
//  int size;
//  int a;
//  cout << "Введите размер массива: ";
//  cin >> size;
//  int *elements = new int[size];	
//  for (int i = 0; i < size; ++i)
//  {
//	  cout << "Введите " << i << " элемент массива: ";
//	  cin >> a;
//	  elements[i] = a;
//  }
//  cout << "Число чётных элементов массива: " << countOdd(elements, size);
//  return 0;
//}
//5-----
//int funcint(int n, int arr[])
//{
//	return arr[n] + n;
//}
//int main() 
//{
//	setrus;
//	int size;
//	int n, a;
//	cout << "Введите размер массива: ";
//	cin >> size;
//	int* elements = new int[size];
//	for (int i = 0; i < size; ++i)
//	{
//		cout << "Введите " << i << " элемент массива: ";
//		cin >> a;
//		elements[i] = a;
//	}
//	cout << "Введите n: ";
//	cin >> n;
//	cout << funcint(n, elements);
//	return 0;
//}
//6-----
//void myfunc(int& n, int arr[], int size)
//{
//	n += 1;
//	arr[n] = 0;
//	cout << "n = " << n << endl;
//	cout << "{ ";
//	for (int i = 0; i < size; ++i)
//	{
//		cout << arr[i] << ", ";
//	}
//	cout << "}";
//}
//int main()
//{
//	setrus;
//	int size;
//	int n, a;
//	cout << "Введите размер массива: ";
//	cin >> size;
//	int* elements = new int[size];
//	for (int i = 0; i < size; ++i)
//	{
//		cout << "Введите " << i << " элемент массива: ";
//		cin >> a;
//		elements[i] = a;
//	}
//	cout << "Введите n: ";
//	cin >> n;
//	myfunc(n, elements, size);
//	return 0;
//}
//7-----
//int compareStrings(char str1[], char str2[])
//{
//	char* ptr1 = str1;
//	while (*ptr1 != '\0')
//	{
//		++ptr1;
//	}
//	int len1 = ptr1 - str1;
//	char* ptr2 = str2;
//	while (*ptr2 != '\0')
//	{
//		++ptr2;
//	}
//	int len2 = ptr2 - str2;
//	return len1 == len2 ? 0 : len1 < len2 ? -1 : 1;
//}
//int main()
//{
//	setrus;
//	
//	char str1[100], str2[100];
//	cout << "Введите первую строку:" << endl;
//	cin.getline(str1, 100);
//	cout << "Введите вторую строку:" << endl;
//	cin.getline(str2, 100);
//	cout << compareStrings(str1, str2);
//}
//8-----
//bool exists(int num, int arr[], int size)
//{
//    if (size == 0)
//    {
//        return false;
//    }
//    for (int i = 0; i < size; ++i)
//    {
//        if (arr[i] == num)
//        {
//            return true;
//        }
//    }
//    return false;
//}
//pair<int*, int> findCommonElements(int elements1[], int elements2[], int size1, int size2)
//{
//    int* commonarr = new int[min(size1, size2)];
//    int size3 = 0;
//    for (int i = 0; i < size1; ++i)
//    {
//        for (int j = 0; j < size2; ++j)
//        {
//            if (elements1[i] == elements2[j])
//            {
//                if (!exists(elements1[i], commonarr, size3))
//                {
//                    commonarr[size3] = elements1[i];
//                    ++size3;
//                }
//            }
//        }
//    }
//    return make_pair(commonarr, size3);
//}
//int main()
//{
//    setrus;
//    int size1, size2;
//    int a;
//    cout << "Введите размер первого массива (до 10): ";
//    cin >> size1;
//    int elements1[10], elements2[10];
//    for (int i = 0; i < size1; ++i)
//    {
//        cout << "Введите " << i << " элемент массива: ";
//        cin >> a;
//        elements1[i] = a;
//    }
//    cout << "Введите размер второго массива (до 10): ";
//    cin >> size2;
//    for (int i = 0; i < size2; ++i)
//    {
//        cout << "Введите " << i << " элемент массива: ";
//        cin >> a;
//        elements2[i] = a;
//    }
//    auto res = findCommonElements(elements1, elements2, size1, size2);
//    cout << "{ ";
//    for (int i = 0; i < res.second; ++i)
//    {
//        cout << res.first[i];
//        if (i < res.second - 1) {
//            cout << ", ";
//        }
//    }
//    cout << " }";
//    delete[] res.first;
//}
//9-----
//void rotateArray(int arr[], int size, int pos)
//{
//    int arrs[6];
//    for (int i = 0; i < size; ++i)
//    {
//        arrs[i] = arr[i];
//    }
//    for (int i = 0; i < size; ++i)
//    {
//        while (pos > size)
//        {
//            pos -= size;
//        }
//        if (i < pos)
//        {
//            arr[size - pos + i] = arrs[i];
//        }
//        else
//        {
//            arr[i - pos] = arrs[i];
//        }
//    }
//}
//int main()
//{
//    setrus;
//    int arr[10];
//    int a, size;
//    int pos;
//    cout << "Введите размер массива (до 10): ";
//    cin >> size;
//    for (int i = 0; i < size; ++i)
//    {
//        cout << "Введите " << i << " элемент массива: ";
//        cin >> a;
//        arr[i] = a;
//    }
//    cout << "Введите длину сдвига: ";
//    cin >> pos;
//    rotateArray(arr, size, pos);
//    for (int i = 0; i < size; ++i)
//    {
//        cout << arr[i] << endl;
//    }
//    return 0;
//}
//10-----
//int mergeAndCompare(int arr1[], int arr2[], int arr3[], int size1, int size2, int& size3)
//{
//    if (size1 != size2)
//    {
//        return -1;
//    }
//    else
//    {
//        for (int i = 0; i < size1; ++i)
//        {
//            arr3[i] = arr1[i];
//        }
//        for (int i = 0; i < size2; ++i)
//        {
//            arr3[i + size1] = arr2[i];
//        }
//        size3 = size1 + size2;
//        return 0;
//    }
//}
//int main()
//{
//    setrus;
//    int a;
//    int size1, size2;
//    cout << "Введите размер первого массива (до 10): ";
//    cin >> size1;
//    int* arr1 = new int[size1];
//    for (int i = 0; i < size1; ++i)
//    {
//        cout << "Введите " << i << " элемент массива: ";
//        cin >> a;
//        arr1[i] = a;
//    }
//    cout << "Введите размер второго массива (до 10): ";
//    cin >> size2;
//    int* arr2 = new int[size2];
//    for (int i = 0; i < size2; ++i)
//    {
//        cout << "Введите " << i << " элемент массива: ";
//        cin >> a;
//        arr2[i] = a;
//    }
//    int size3 = size1 + size2;
//    int* arr3 = new int[size3];
//    if (mergeAndCompare(arr1, arr2, arr3, size1, size2, size3) == -1)
//    {
//        cout << "-1";
//    }
//    else
//    {
//        cout << "{ ";
//        for (int i = 0; i < size3; ++i)
//        {
//            cout << arr3[i];
//            if (i < size3 - 1) {
//                cout << ", ";
//            }
//        }
//        cout << " }";
//    }
//
//}