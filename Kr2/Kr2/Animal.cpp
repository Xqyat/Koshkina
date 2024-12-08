#include "Animal.h"


Animal::~Animal() {}

Animal::Animal(){
	this->_name = "undefined";
	this->_age = 0;
	this->_gender = "Yes";
}

Animal::Animal(string name, int age, string gender) :
	_name(name), _age(age), _gender(gender) {}
Animal::Animal(string name, int age) :
	_name(name), _age(age), _gender("Yes") {};
Animal::Animal(string name) :
	_name(name), _age(0), _gender("Yes") {};


void Animal::setAnimalName(string name) { this->_name = name; }
string Animal::getAnimalName() { return _name; }
void Animal::setAnimalAge(int age) { this->_age = age; }
int Animal::getAnimalAge() { return _age; }
void Animal::setAnimalGender(string gender) { this->_gender = gender; }
string Animal::getAnimalGender() { return _gender; }

void Animal::displayAnimal() {

	setlocale(LC_ALL, "RUS");
	cout << "Имя: " << _name << endl;
	cout << "Возраст: " << _age << endl;
	cout << "Пол: " << _gender << endl;
}

void Animal::animalSound() {
	setlocale(LC_ALL, "RUS");
	cout << getAnimalName() << " произносит: ";
}
