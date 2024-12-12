#include <iostream>
#include <fstream>
#include "PCar.h"
#include "Truck.h"
int main()
{
    PCar* first_car = new PCar;
    Truck* second_car = new Truck;
    PCar* third_car = new PCar();
    Truck* fourth_car = new Truck(Mileage::BMW);

    Car** arr = new Car * [4] {first_car, second_car, third_car, fourth_car};

    bool start = true;
    do
    {
        setlocale(LC_ALL, "");
        std::cout
            << "Выберите машину: " << std::endl
            << "1 = первая легковая машина" << std::endl << "2 = первый грузовик" << std::endl
            << "3 = вторая легковая машина" << std::endl << "4 = второй грузовик" << std::endl
            << "0 = Перейти к выводу данных." << std::endl;
        char choice;
        std::cin >> choice;
        switch (choice)
        {
        case '1':
            arr[0]->readFromConsole();
            break;
        case '2':
            arr[1]->readFromConsole();
            break;
        case '3':
            arr[2]->readFromConsole();
            break;
        case '4':
            arr[3]->readFromConsole();
            break;
        case '0':
            start = false;
            break;
        default:
            break;
        }
    } while (start);

    start = true;
    do
    {
        setlocale(LC_ALL, "");
        std::cout
            << "Выберите машину: " << std::endl
            << "1 = первая легковая машина" << std::endl << "2 = первый грузовик" << std::endl
            << "3 = вторая легковая машина" << std::endl << "4 = второй грузовик" << std::endl
            << "0 = выйти из программы." << std::endl;
        char choice;
        std::cin >> choice;
        switch (choice)
        {
        case '1':
            cout << *first_car;
            break;
        case '2':
            cout << *second_car;
            break;
        case '3':
            cout << *third_car;
            break;
        case '4':
            cout << *fourth_car;
            break;
        case '0':
            start = false;
            break;
        default:
            break;
        }
    } while (start);

    cout << "Средний расход топлива второго грузовика на 100км: " << fourth_car->avFuelExp() << endl;
    fourth_car->downMileage(1000);
    cout << "Пробег второго грузовика уменьшен на 1000" << endl;
    cout << "Пробег второго грузовика: " << fourth_car->getCarMileage() << endl;

    ofstream out("Topic.txt", ios::out | ios::trunc);
    out.close();

    for (int i = 0; i < 4; ++i)
    {
        arr[i]->writeToFile();
        cout << "Машина \"" << arr[i]->getCarMark() << "\" успешно записана в файл" << endl;
    }

    delete first_car;
    delete second_car;
    delete third_car;
    delete fourth_car;
    delete[] arr;

    return 0;
}