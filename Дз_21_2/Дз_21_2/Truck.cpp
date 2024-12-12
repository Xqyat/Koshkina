#include <string>
#include "Truck.h"
#include "Car.h"
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
Truck::Truck(string mark) :
    Car(mark, "undefined", "undefined", 0, 0), _loadCapacity("undefined") {}
Truck::Truck(int mileage) :
	Car("undefined", "undefined", "undefined", 0, mileage), _loadCapacity("undefined") {}

ostream& operator<<(ostream& output, Truck t)
{
	output << "Марка: " << t.getCarMark() << endl
		<< "Цвет: " << t.getCarColor() << endl
		<< "Тип кузова: " << t.getCarBodytype() << endl
		<< "Объём двигателя: " << t.getCarEnginevalue() << endl
		<< "Пробег: " << t.getCarMileage() << endl
		<< "Класс грузоподъёмности: " << t._loadCapacity << endl;
	return output;
}

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
    cout << "Введите класс габиритности: "; cin >> _loadCapacity;

}

void Truck::writeToFile()
{
    ofstream out;
    out.open("Car.txt", ios::app);
    if (out.is_open())
    {
        out << "Марка: " << getCarMark() << endl
            << "Цвет: " << getCarColor() << endl
            << "Тип кузова: " << getCarBodytype() << endl
            << "Объём двигателя: " << getCarEnginevalue() << endl
            << "Пробег: " << getCarMileage() << endl
            << "Класс грузоподъёмности: " << getLoadCapacity() << endl;
    }
    out.close();
}
