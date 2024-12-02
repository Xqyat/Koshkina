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
    this->_raceCar = "undefined";
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


PCar PCar::operator++()
{
    setCarEnginevalue(getCarEnginevalue() + 1);
    return *this;
}

PCar PCar::operator--()
{
    if (getCarEnginevalue() > 0)
    {
        setCarEnginevalue(getCarEnginevalue() - 1);
        return *this;
    }
    else cout << "������ �� ����� ���� ������ 0!";

}

bool PCar::operator< (PCar other)
{
    return this->getCarEnginevalue() < other.getCarEnginevalue();
}
bool PCar::operator> (PCar other)
{
    return this->getCarEnginevalue() > other.getCarEnginevalue();
}
ostream& operator<<(ostream& output, PCar t)
{
    output << "�����: " << t.getCarMark() << endl
        << "����: " << t.getCarColor() << endl
        << "��� ������: " << t.getCarBodytype() << endl
        << "����� ���������: " << t.getCarEnginevalue() << endl
        << "������: " << t.getCarMileage() << endl;
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

void PCar::display()
{
    setlocale(LC_ALL, "RUS");
    Car::display();
    cout << "�������� ��������: " << _raceCar << endl;
}