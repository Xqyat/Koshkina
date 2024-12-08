#include "Dog.h"

Dog::~Dog() {}

Dog::Dog() {
	setAnimalName("undefined");
	setAnimalAge(0);
	setAnimalGender("Yes");
	this->_size = "average";
}

Dog::Dog(string name, int age, string gender, string size) :
	Animal(name, age, gender), _size(size) {}
Dog::Dog(string name, int age, string gender) :
	Animal(name, age, gender), _size("average") {}
Dog::Dog(string name, int age) :
	Animal(name, age, "Yes"), _size("average") {}
Dog::Dog(string name) :
	Animal(name, 0, "Yes"), _size("average") {}


void Dog::setSize(string size) { this->_size = size; }
string Dog::getSize() { return _size; }

void Dog::displayAnimal() {
	Animal::displayAnimal();
	cout << "Собака большая, средняя или маленькая?: " << _size << endl;
}

void Dog::animalSound() {
	Animal::animalSound();
	cout << "ГАВ!" << endl;
}

