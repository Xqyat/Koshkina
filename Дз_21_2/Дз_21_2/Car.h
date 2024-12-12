#pragma once
#include <iostream>
#include "AnyCar.h"
#include <string>
#include <fstream>

using namespace std;
using namespace anyCar;

class Car
{
private:
	string _mark;
	string _color;
	string _bodyType;
	double _engineValue;
	int _mileage;
public:
	Car();
	Car(string mark, string color, string bodyType, double engineValue, int mileage);
	Car(string mark, string color, string bodyType, double engineValue);
	Car(string mark, string color, string bodyType);
	Car(string mark, string color);
	Car(string mark);

	virtual ~Car();

	void setCarMark(string mark);
	string getCarMark();
	void setCarColor(string color);
	string getCarColor();
	void setCarBodytype(string bodyType);
	string getCarBodytype();
	void setCarEnginevalue(double engineValue);
	double getCarEnginevalue();
	void setCarMileage(double mileage);
	double getCarMileage();

	virtual void readFromConsole() = 0;
	virtual void writeToFile();

	double avFuelExp();
	void downMileage(int reduce);
};