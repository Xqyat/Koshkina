#include <iostream>
#include <string>
#include "Car.h"
using namespace std;



Car::~Car()
{}

Car::Car()
{
    this->_mark = "undefined";
    this->_color = "undefined";
    this->_bodyType = "undefined";
    this->_engineValue = 0;
    this->_mileage = 0;
}

Car::Car(string mark, string color, string bodyType, double engineValue, int mileage) : _mark(correctAlpha(mark)),
_color(correctAlpha(color)), _bodyType(correctAlpha(bodyType)), _engineValue(correctCount(engineValue)), _mileage(correctCount(mileage)) {}
Car::Car(string mark, string color, string bodyType, double engineValue) : Car(mark, color, bodyType, engineValue, 0) {}
Car::Car(string mark, string color, string bodyType) : Car(mark, color, bodyType, 0, 0) {}
Car::Car(string mark, string color) : Car(mark, color, "undefined", 0, 0) {}
Car::Car(string mark) : Car(mark, "undefined", "undefined", 0, 0) {}


void Car::setCarMark(string mark)
{
    this->_mark = correctAlpha(mark);
}
string Car::getCarMark()
{
    return _mark;
}
void Car::setCarColor(string color)
{
    this->_color = correctAlpha(color);
}
string Car::getCarColor()
{
    return _color;
}
void Car::setCarBodytype(string bodyType)
{
    this->_bodyType = correctAlpha(bodyType);
}
string Car::getCarBodytype()
{
    return _bodyType;
}
void Car::setCarEnginevalue(double engineValue)
{
    this->_engineValue = correctCount(engineValue);
}
double Car::getCarEnginevalue()
{
    return _engineValue;
}
void Car::setCarMileage(double mileage)
{
    this->_mileage = correctCount(mileage);
}
double Car::getCarMileage()
{
    return _mileage;
}

//Функции
void Car::display()
{
    cout << "Марка: " << _mark << endl;
    cout << "Цвет: " << _color << endl;
    cout << "Тип кузова: " << _bodyType << endl;
    cout << "Объём двигателя: " << _engineValue << endl;
    cout << "Пробег: " << _mileage << endl;
}