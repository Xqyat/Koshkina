#include <iostream>
#include "Дз_8.h"
using namespace std;

void readArray(int* arr, int size)
{
	int a;
	for (int i = 0; i < size; ++i)
	{
		cout << "Введите " << i << " элемент массива: ";
		cin >> a;
		arr[i] = a;
	}
}
void readArray(double* arr, int size)
{
	double a;
	for (int i = 0; i < size; ++i)
	{
		cout << "Введите " << i << " элемент массива: ";
		cin >> a;
		arr[i] = a;
	}
}
void printArray(int* arr, int size)
{
	cout << "{ ";
	for (int i = 0; i < size; ++i)
	{
		if (i != size - 1) cout << arr[i] << ", ";
		else cout << arr[i];
	}
	cout << " }\n";
}
void printArray(double* arr, int size)
{
	cout << "{ ";
	for (int i = 0; i < size; ++i)
	{
		if (i != size - 1) cout << arr[i] << ", ";
		else cout << arr[i];
	}
	cout << " }\n";
}
int sum(int* arr, int size)
{
	int sumi = 0;
	for (int i = 0; i < size; ++i)
	{
		sumi += arr[i];
	}
	return sumi;
}
double sum(double* arr, int size)
{
	double sumd = 0;
	for (int i = 0; i < size; ++i)
	{
		sumd += arr[i];
	}
	return sumd;
}
void copyArray(int* arr1, int* arr2, int size)
{
	for (int i = 0; i < size; ++i) arr2[i] = arr1[i];
}
void copyArray(double* arr1, double* arr2, int size)
{
	for (int i = 0; i < size; ++i) arr2[i] = arr1[i];
}

bool contains(int* arr, int size, int el)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == el)
		{
			return true;
		}
	}
	return false;
}

bool contains(double* arr, int size, double el)
{
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] == el)
		{
			return true;
		}
	}
	return false;
}
void resizeArray(int* arr1, int* arr2, int size)
{
	
	for (int i = 0; i < size; ++i)
	{
		arr2[i] = arr1[i];
	}
}

void resizeArray(double* arr1, double* arr2, int size)
{
	for (int i = 0; i < size; ++i)
	{
		arr2[i] = arr1[i];
	}
}