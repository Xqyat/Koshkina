#pragma once
#include "Car.h"
#include <string>

using namespace std;

class PCar : public Car
{
public:
	PCar();
	PCar(string mark, string color, string bodyType, double engineValue, int mileage, bool raceCar);
	PCar(string mark, string color, string bodyType, double engineValue, int mileage);
	PCar(string mark, string color, string bodyType, double engineValue);
	PCar(string mark, string color, string bodyType);
	PCar(string mark, string color);
	PCar(string mark);

	void setRaceCar(bool raceCar);
	bool getRaceCar();

	void displayPCar();

private:
	bool _raceCar;
};