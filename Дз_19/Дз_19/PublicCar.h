#pragma once
#include "Car.h"
#include "PCar.h"
#include "Truck.h"

using namespace std;

class PublicCar : public PCar, Truck
{


public:
	PublicCar();
	PublicCar(string mark, string color, string bodyType, double engineValue, int mileage, bool racaCar, string loadCapacity, bool minibus);

	~PublicCar();

	void setMinibus(bool minibus);
	bool getMinibus();

	PublicCar operator++();
	PublicCar operator--();
	bool operator<(PublicCar other);
	bool operator>(PublicCar other);
	friend ostream& operator<<(ostream& output, PublicCar t);

	void readFromConsole();
	void writeToFile();
	void display();

private:
	bool _minibus;
};