#pragma once

#include "Animal.h"

class Bobr : virtual public Animal
{
private:
	int _countTeeths;

public:
	Bobr();
	Bobr(string name, int age, string gender, int countTeeths);
	Bobr(string name, int age, string gender);
	Bobr(string name, int age);
	Bobr(string name);
	Bobr(int countTeeths);

	~Bobr();

	void setCountTeeths(int countTeeths);
	int getCountTeeths();

	virtual void displayAnimal();

	virtual void animalSound();
};
