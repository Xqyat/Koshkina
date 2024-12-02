#include <string>
#include "Truck.h"
using namespace std;

Truck::~Truck()
{}

Truck::Truck()
{
    setCarMark("undefined");
    setCarColor("undefined");
    setCarBodytype("undefined");
    setCarEnginevalue(0);
    setCarMileage(0);
    this->_loadCapacity = "undefined";
}

Truck::Truck(string mark, string color, string bodyType, double engineValue, int mileage, string loadCapacity) :
    Car(mark, color, bodyType, engineValue, mileage), _loadCapacity(correctAlpha(loadCapacity)) {}
Truck::Truck(string mark, string color, string bodyType, double engineValue, int mileage) :
    Car(mark, color, bodyType, engineValue, mileage), _loadCapacity("undefined") {}
Truck::Truck(string mark, string color, string bodyType, double engineValue) :
    Car(mark, color, bodyType, engineValue, 0), _loadCapacity("undefined") {}
Truck::Truck(string mark, string color, string bodyType) :
    Car(mark, color, bodyType, 0, 0), _loadCapacity("undefined") {}
Truck::Truck(string mark, string color) :
    Car(mark, color, "undefined", 0, 0), _loadCapacity("undefined") {}
Truck::Truck(string loadCapacity) :
    Car("undefined", "undefined", "undefined", 0, 0), _loadCapacity(loadCapacity) {}

void Truck::setLoadCapacity(string loadCapacity)
{
    this->_loadCapacity = correctAlpha(loadCapacity);
}
string Truck::getLoadCapacity()
{
    return _loadCapacity;
}

void Truck::readFromConsole()
{
    setlocale(LC_ALL, "RUS");
    Car::readFromConsole();
    cout << "������� ����� ������������: "; cin >> _loadCapacity;

}

void Truck::writeToFile()
{
    ofstream out;
    out.open("Car.txt", ios::app);
    if (out.is_open())
    {
        out << "�����: " << getCarMark() << endl
            << "����: " << getCarColor() << endl
            << "��� ������: " << getCarBodytype() << endl
            << "����� ���������: " << getCarEnginevalue() << endl
            << "������: " << getCarMileage() << endl
            << "����� ����������������: " << getLoadCapacity() << endl;
    }
    out.close();
}

void Truck::display()
{
    setlocale(LC_ALL, "RUS");
    Car::display();
    cout << "����� ����������������: " << _loadCapacity << endl;
}