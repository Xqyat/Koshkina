#pragma once

#include "Human.h"
#include "Animal.h"

class Client : virtual public Human
{
private:
	Animal* _animal;

public:
	Client();
	Client(string SNP, int age, Animal* animal);
	Client(string SNP, int age);
	Client(string SNP);
	Client(Animal* animal);

	~Client();

	void setClientPet(Animal* animal);
	Animal* getClientPet();

	virtual void displayHuman();
	virtual void takeAnimal(Animal* animal);
};
