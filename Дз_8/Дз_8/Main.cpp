#include <iostream>
#include "��_8.h"
using namespace std;
#define setrus setlocale(LC_ALL, "RUS")
//
//int main()
//{
//    setrus;
//    int size1, size2;
//    cout << "������� ������ �������������� �������: ";
//    cin >> size1;
//    int* arr1 = new int[size1];
//    readArray(arr1, size1);
//    cout << "������� ������ ������������� �������: ";
//    cin >> size2;
//    double* arr2 = new double[size2];
//    readArray(arr2, size2);
//    cout << "������������� ������:\n";
//    printArray(arr1, size1);
//    cout << "����� ��������� �������������� �������: " << sum(arr1, size1) << endl;
//    cout << "������������ ������:\n";
//    printArray(arr2, size2);
//    cout << "����� ��������� ������������� �������: " << sum(arr2, size2) << endl;
//    delete[] arr1;
//    delete[] arr2;
//}
//1-----
//int main()
//{
//    setrus;
//    int size1, size2;
//    cout << "������� ������ �������������� �������: ";
//    cin >> size1;
//    int* arr1 = new int[size1];
//    readArray(arr1, size1);
//    cout << "������� ������ ������������� �������: ";
//    cin >> size2;
//    double* arr2 = new double[size2];
//    readArray(arr2, size2);
//    int* arr1_copy = new int[size1];
//    double* arr2_copy = new double[size2];
//    copyArray(arr1, arr1_copy, size1);
//    copyArray(arr2, arr2_copy, size2);
//    cout << "������������� ������:\n";
//    printArray(arr1, size1);
//    cout << "����� �������������� �������: " << endl;
//    printArray(arr1_copy, size1);
//    cout << "������������ ������:\n";
//    printArray(arr2, size2);
//    cout << "����� ������������� �������: " << endl;
//    printArray(arr2_copy, size2);
//    delete[] arr1;
//    delete[] arr2;
//}
//2-----
//int main()
//{
//    setrus;
//    int size1, size2, el1;
//    double el2;
//    cout << "������� ������ �������������� �������: ";
//    cin >> size1;
//    int* arr1 = new int[size1];
//    readArray(arr1, size1);
//    cout << "������� ������ ������������� �������: ";
//    cin >> size2;
//    double* arr2 = new double[size2];
//    readArray(arr2, size2);
//    cout << "������� ������� �������������� �������: ";
//    cin >> el1;
//    if (contains(arr1, size1, el1)) cout << el1 << " ���������� � ������������� ������� \n";
//    else cout << el1 << " �� ���������� � ������������� ������� \n";
//    cout << "������� ������� ������������ �������: ";
//    cin >> el2;
//    if (contains(arr2, size2, el2)) cout << el2 << " ���������� � ������������� ������� \n";
//    else cout << el2 << " �� ���������� � ������������� ������� \n";
//    delete[] arr1;
//    delete[] arr2;
//}
//3-----
//int main()
//{
//    setrus;
//    int size1, size2, resize1, resize2;
//
//    cout << "������� ������ �������������� �������: ";
//    cin >> size1;
//    int* arr1 = new int[size1];
//    readArray(arr1, size1);
//
//    cout << "������� ������ ������������� �������: ";
//    cin >> size2;
//    double* arr2 = new double[size2];
//    readArray(arr2, size2);
//
//    cout << "�� ������� ��������� �������� ������������� ������: ";
//    cin >> resize1;
//    int new_size1 = size1 + resize1;
//    int* new_arr1 = new int[new_size1];
//
//    cout << "�� ������� ��������� �������� ������������ ������: ";
//    cin >> resize2;
//    int new_size2 = size2 + resize2;
//    double* new_arr2 = new double[new_size2];
//
//    resizeArray(arr1, new_arr1, size1 < new_size1 ? size1 : new_size1);
//    resizeArray(arr2, new_arr2, size2 < new_size2 ? size2 : new_size2);
//
//    cout << "��������� ������������� ������:\n";
//    printArray(new_arr1, new_size1);
//    cout << "��������� ������������ ������:\n";
//    printArray(new_arr2, new_size2);
//
//    delete[] arr1;
//    delete[] arr2;
//    delete[] new_arr1;
//    delete[] new_arr2;
//}
