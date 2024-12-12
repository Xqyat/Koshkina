#pragma once
#include "Car.h"
#include <string>

using namespace std;

class Truck : virtual public Car
{


public:
	Truck();
	Truck(string mark, string color, string bodyType, double engineValue, int mileage, string loadCapacity);
	Truck(string mark, string color, string bodyType, double engineValue, int mileage);
	Truck(string mark, string color, string bodyType, double engineValue);
	Truck(string mark, string color, string bodyType);
	Truck(string mark, string color);
	Truck(string mark);
	Truck(int mileage);

	~Truck();

	friend ostream& operator<<(ostream& output, Truck t);

	void setLoadCapacity(string loadCapacity);
	string getLoadCapacity();

	void readFromConsole();
	void writeToFile();

private:
	string _loadCapacity;
};