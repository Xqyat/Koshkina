#include <iostream>
#include "��_10.h"
using namespace std;
int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{

    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b)
{
    return double(a) / double(b);
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

double power(int base, int exponent)
{
    if (exponent == 1)
    {
        return base;
    }
    else if (exponent == 0)
    {
        return 1;
    }
    else if (exponent < 0)
    {
        return 1 / power(base, exponent * -1);
    }
    else
    {
        return base * power(base, exponent - 1);
    }

}

bool ifIn(char* arr, char el)
{
    for (int i = 0; arr[i] != '\0'; ++i)
    {
        if (el == arr[i]) return true;
    }

    return false;
}