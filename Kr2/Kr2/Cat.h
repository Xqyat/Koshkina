#pragma once

#include "Animal.h"

class Cat : virtual public Animal
{
private:
	bool _hasBeard;

public:
	Cat();
	Cat(string name, int age, string gender, bool hasBeard);
	Cat(string name, int age, string gender);
	Cat(string name, int age);
	Cat(string name);
	Cat(bool hasBeard);

	~Cat();

	void setHasBeard(bool hasBeard);
	bool getHasBeard();

	virtual void displayAnimal();

	virtual void animalSound();
};
