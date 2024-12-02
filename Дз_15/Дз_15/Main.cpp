#include <iostream>
#include "Car.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    Car* first_car = new Car("2", "4", "5", -23, -1200);
    cout << *first_car << endl;
    Car* second_car = new Car("BMW", "dd");
    cout << *second_car;
}