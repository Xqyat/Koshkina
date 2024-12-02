#include "PublicCar.h"

PublicCar::PublicCar(string mark, string color, string bodyType, double engineValue, int mileage, bool raceCar, string loadCapacity, bool minibus) :
	Car(mark, color, bodyType, engineValue, mileage), PCar(raceCar), Truck(loadCapacity), _minibus(minibus) {}
PublicCar::PublicCar() : PublicCar("undefined", "undefined", "undefined", 0, 0, false, "undefined", false) {}
PublicCar::~PublicCar() {};

void PublicCar::setMinibus(bool minibus) { this->_minibus; }
bool PublicCar::getMinibus() { return _minibus; }


PublicCar PublicCar::operator++()
{
    setCarEnginevalue(getCarEnginevalue() + 1);
    return *this;
}

PublicCar PublicCar::operator--()
{
    if (getCarEnginevalue() > 0)
    {
        setCarEnginevalue(getCarEnginevalue() - 1);
        return *this;
    }
    else cout << "Пробег не может быть меньше 0!";

}

bool PublicCar::operator< (PublicCar other)
{
    return this->getCarEnginevalue() < other.getCarEnginevalue();
}
bool PublicCar::operator> (PublicCar other)
{
    return this->getCarEnginevalue() > other.getCarEnginevalue();
}
ostream& operator<<(ostream& output, PublicCar t)
{
    output << "Марка: " << t.getCarMark() << endl
        << "Цвет: " << t.getCarColor() << endl
        << "Тип кузова: " << t.getCarBodytype() << endl
        << "Объём двигателя: " << t.getCarEnginevalue() << endl
        << "Пробег: " << t.getCarMileage() << endl
        << "Является гоночной: " << t.getRaceCar() << endl
        << "Класс грузоподъёмности: " << t.getLoadCapacity() << endl
        << "Является маршруткой: " << t.getCarMinibus() << endl;
    return output;
}

void PublicCar::readFromConsole()
{
    Car::readFromConsole();
    cout << "Введите явлется гононочной: ";
    bool raceCar; cin >> raceCar; setRaceCar;
    cout << "Введите класс грузоподъёмности: ";
    string loadCapacity; cin >> loadCapacity; setLoadCapacity;
    cout << "Введите является маршруткой: "; cin >> _minibus;
}


void PublicCar::writeToFile()
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

void PublicCar::display()
{
    Car::display();
    cout << "Является гоночной: " << getRaceCar << endl
        << "Класс грузоподъёмности: " << getLoadCapacity << endl
        << "Является маршрутка: " << _minibus << endl;
}