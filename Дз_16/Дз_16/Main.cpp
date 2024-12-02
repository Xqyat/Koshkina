#include <iostream>
#include "PCar.h"
#include "Truck.h"

using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    Truck* first_truck = new Truck("KAMAZ", "Black", "1", 5.2, 12345678, "Minimal");
    first_truck->displayTruck();
    cout << endl;
    PCar* first_PCar = new PCar("BMW", "Black", "cabriolet", 5.2, 12345678, true);
    first_PCar->displayPCar();
    cout << endl;
    Truck* second_truck = new Truck("KAMAZ");
    second_truck->displayTruck();
    cout << endl;
    PCar* second_PCar = new PCar("BMW");
    second_PCar->displayPCar();
}