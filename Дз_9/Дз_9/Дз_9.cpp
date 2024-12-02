#include <iostream>
#include "ƒз_9.h"
using namespace std;

void readArray(int* arr, int size)
{
	int a;
	for (int i = 0; i < size; ++i)
	{
		cout << "¬ведите " << i << " элемент массива: ";
		cin >> a;
		arr[i] = a;
	}
}
void readArray(double* arr, int size)
{
	double a;
	for (int i = 0; i < size; ++i)
	{
		cout << "¬ведите " << i << " элемент массива: ";
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


int getElement(int* arr1, int i)
{
	return arr1[i];
}

int getMaxElement(int* arr1, int size1, int (*getElementPtr)(int[], int))
{
	int max_el = getElementPtr(arr1, 0);
	for (int i = 1; i < size1; ++i)
	{
		if (getElementPtr(arr1, i) > max_el) max_el = getElementPtr(arr1, i);
	}
	return max_el;
}

int getSumEvenElements(int* arr1, int size1, int (*getElementPtr)(int[], int))
{
	int evenSum = 0;
	for (int i = 0; i < size1; ++i)
	{
		if (getElementPtr(arr1, i) % 2 == 0) evenSum += getElementPtr(arr1, i);
	}
	return evenSum;
}