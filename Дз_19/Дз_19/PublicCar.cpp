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
    else cout << "������ �� ����� ���� ������ 0!";

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
    output << "�����: " << t.getCarMark() << endl
        << "����: " << t.getCarColor() << endl
        << "��� ������: " << t.getCarBodytype() << endl
        << "����� ���������: " << t.getCarEnginevalue() << endl
        << "������: " << t.getCarMileage() << endl
        << "�������� ��������: " << t.getRaceCar() << endl
        << "����� ����������������: " << t.getLoadCapacity() << endl
        << "�������� ����������: " << t.getCarMinibus() << endl;
    return output;
}

void PublicCar::readFromConsole()
{
    Car::readFromConsole();
    cout << "������� ������� ����������: ";
    bool raceCar; cin >> raceCar; setRaceCar;
    cout << "������� ����� ����������������: ";
    string loadCapacity; cin >> loadCapacity; setLoadCapacity;
    cout << "������� �������� ����������: "; cin >> _minibus;
}


void PublicCar::writeToFile()
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

void PublicCar::display()
{
    Car::display();
    cout << "�������� ��������: " << getRaceCar << endl
        << "����� ����������������: " << getLoadCapacity << endl
        << "�������� ���������: " << _minibus << endl;
}