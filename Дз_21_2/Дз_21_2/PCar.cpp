#include <string>
#include "PCar.h"
#include "Car.h"
using namespace std;



PCar::PCar()
{
    setCarMark("undefined");
    setCarColor("undefined");
    setCarBodytype("undefined");
    setCarEnginevalue(0);
    setCarMileage(0);
    this->_raceCar = false;
}

PCar::PCar(string mark, string color, string bodyType, double engineValue, int mileage, bool raceCar) :
    Car(mark, color, bodyType, engineValue, mileage), _raceCar(raceCar) {}
PCar::PCar(string mark, string color, string bodyType, double engineValue, int mileage) :
    Car(mark, color, bodyType, engineValue, mileage), _raceCar(false) {}
PCar::PCar(string mark, string color, string bodyType, double engineValue) :
    Car(mark, color, bodyType, engineValue, 0), _raceCar(false) {}
PCar::PCar(string mark, string color, string bodyType) :
    Car(mark, color, bodyType, 0, 0), _raceCar(false) {}
PCar::PCar(string mark, string color) :
    Car(mark, color, "undefined", 0, 0), _raceCar(false) {}
PCar::PCar(string mark) :
    Car(mark, "undefined", "undefined", 0, 0), _raceCar(false) {}

PCar::~PCar() {}

ostream& operator<<(ostream& output, PCar t)
{
	output << "Марка: " << t.getCarMark() << endl
		<< "Цвет: " << t.getCarColor() << endl
		<< "Тип кузова: " << t.getCarBodytype() << endl
		<< "Объём двигателя: " << t.getCarEnginevalue() << endl
		<< "Пробег: " << t.getCarMileage() << endl
        << "Является гоночной: " << (t._raceCar ? "Да" : "Нет") << endl;
	return output;
}

void PCar::setRaceCar(bool raceCar)
{
    this->_raceCar = raceCar;
}
bool PCar::getRaceCar()
{
    return _raceCar;
}

void PCar::readFromConsole()
{
    setlocale(LC_ALL, "RUS");
    Car::readFromConsole();
    cout << "Является гоночной: "; cin >> _raceCar;

}

void PCar::writeToFile()
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
            << "Является гоночной: " << _raceCar << endl;
    }
    out.close();
}