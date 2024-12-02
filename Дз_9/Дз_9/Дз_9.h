#pragma once
void readArray(int* arr, int size);
void readArray(double* arr, int size);
void printArray(int* arr, int size);
void printArray(double* arr, int size);

int getElement(int* arr1, int i);
int getMaxElement(int* arr1, int size1, int (*getElementPtr)(int[], int));
int getSumEvenElements(int* arr1, int size1, int (*getElementPtr)(int[], int));