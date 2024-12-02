#pragma once
#include "PCar.h"
#include "Truck.h"
#include "Car.h"
#include <string>

using namespace std;

class PCar : virtual public Car
{

public:
	PCar();
	PCar(string mark, string color, string bodyType, double engineValue, int mileage, bool raceCar);
	PCar(string mark, string color, string bodyType, double engineValue, int mileage);
	PCar(string mark, string color, string bodyType, double engineValue);
	PCar(string mark, string color, string bodyType);
	PCar(string mark, string color);
	PCar(bool raceCar);

	~PCar();

	PCar operator++();
	PCar operator--();
	bool operator<(PCar other);
	bool operator>(PCar other);
	friend ostream& operator<<(ostream& output, PCar t);

	void setRaceCar(bool raceCar);
	bool getRaceCar();


	virtual void readFromConsole();
	virtual void writeToFile();
	virtual void display();

private:
	bool _raceCar;
};