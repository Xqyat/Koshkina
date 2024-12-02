#include <iostream>
#include "Кр1.h"
using namespace std;

bool contains(int arr[], int n, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (n == arr[i])
		{
			return true;
		}
	}
	return false;
}
bool contains(float arr[], float n, float size)
{
	for (int i = 0; i < size; ++i)
	{
		if (n == arr[i])
		{
			return true;
		}
	}
	return false;
}
void copyArray(int arr[], int* new_arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		new_arr[i] = arr[i];
	}
}
void copyArray(float arr[], float* new_arr, int size)
{
	for (int i = 0; i < size; ++i)
	{
		new_arr[i] = arr[i];
	}
}