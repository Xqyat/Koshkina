#include <iostream>
#include "PCar.h"
#include "Truck.h"
int main()
{
    Truck* first_truck = new Truck("KAMAZ", "Black", "1", 5.2, 12345678, "Minimal");
    PCar* first_PCar = new PCar("BMW", "Black", "cabriolet", 5.2, 12345678, true);
    Truck second_truck("Audi");
    PCar second_PCar("Ferrari");

    Car** arr = new Car * [4] {first_truck, first_PCar, & second_PCar, & second_truck};

    bool start = true;
    
    do
    {
        setlocale(LC_ALL, "RUS");

        cout << "Выберите машину: 1 = KAMAZ, 2 = BMW, 3 = Audi, 4 = Ferrari, 5 = вывести все, 0 = выйти из программы." << endl;
        cout << "--------------" << endl;

        char choice;
        cin >> choice;
        switch (choice)
        {
        case '1':
            arr[0]->display();
            cout << "--------------" << endl;
            break;
        case '2':
            arr[0]->display();
            cout << "--------------" << endl;
            break;
        case '3':
            arr[0]->display();
            cout << "--------------" << endl;
            break;
        case '4':
            arr[0]->display();
            cout << "--------------" << endl;
            break;
        case '5':
            for (int i = 0; i < 4; ++i)
            {
                arr[i]->display();
                cout << "--------------" << endl;
            }
            break;
        case '0':
            start = false;
            break;
        default:
            break;
        }


    } while (start);

    delete first_truck;
    delete first_PCar;
    delete arr;
    return 0;
}
