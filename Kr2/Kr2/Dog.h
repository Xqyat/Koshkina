#pragma once

#include "Animal.h"

class Dog : virtual public Animal
{
private:
	string _size;

public:
	Dog();
	Dog(string name, int age, string gender, string size);
	Dog(string name, int age, string gender);
	Dog(string name, int age);
	Dog(string name);

	~Dog();

	void setSize(string size);
	string getSize();

	virtual void displayAnimal();
	virtual void animalSound();
};
