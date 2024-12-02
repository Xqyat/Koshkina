#include <iostream>
#include "PCar.h"
#include "Truck.h"
int main()
{
    setlocale(LC_ALL, "RUS");
    Truck* first_truck = new Truck("KAMAZ", "Black", "1", 5.2, 12345678, "Minimal");
    PCar* first_PCar = new PCar("BMW", "Black", "cabriolet", 5.2, 12345678, true);
    Truck second_truck("KAMAZ");
    PCar second_PCar("BMW");

    Car** arr = new Car * [4] {first_truck, first_PCar, & second_PCar, & second_truck};
    for (int i = 0; i < 4; ++i)
    {
        arr[i]->display();
        cout << endl;
    }
    

    delete first_truck;
    delete first_PCar;
}
