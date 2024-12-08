#pragma once

#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
	string _name;
	int _age;
	string _gender;

public:
	Animal();
	Animal(string name, int age, string gender);
	Animal(string name, int age);
	Animal(string name);
	
	virtual ~Animal();

	void setAnimalName(string name);
	string getAnimalName();
	void setAnimalAge(int age);
	int getAnimalAge();
	void setAnimalGender(string gender);
	string getAnimalGender();

	virtual void displayAnimal() = 0;

	virtual void animalSound() = 0;
};
