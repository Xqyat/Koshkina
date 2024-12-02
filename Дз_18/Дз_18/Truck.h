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
	Truck(string loadCapacity);

	~Truck();

	void setLoadCapacity(string loadCapacity);
	string getLoadCapacity();

	virtual void readFromConsole();
	virtual void writeToFile();
	virtual void display();

private:
	string _loadCapacity;
};