#include "Cat.h"

Cat::~Cat() {}

Cat::Cat() {
	setAnimalName("undefined");
	setAnimalAge(0);
	setAnimalGender("Yes");
	this->_hasBeard = false;
}

Cat::Cat(string name, int age, string gender, bool hasBeard) :
	Animal(name, age, gender), _hasBeard(hasBeard) {}
Cat::Cat(string name, int age , string gender) :
	Animal(name, age, gender), _hasBeard(false) {}
Cat::Cat(string name, int age) :
	Animal(name, age, "Yes"), _hasBeard(false) {}
Cat::Cat(string name) :
	Animal(name, 0, "Yes"), _hasBeard(false) {}
Cat::Cat(bool hasBeard) :
	Animal("undefined", 0, "Yes"), _hasBeard(hasBeard) {}


void Cat::setHasBeard(bool hasBeard) { this->_hasBeard = hasBeard; }
bool Cat::getHasBeard() { return _hasBeard; }

void Cat::displayAnimal() {
	Animal::displayAnimal();
	cout << "”сы у кота: " << _hasBeard << endl;
}

void Cat::animalSound() {
	Animal::animalSound();
	cout << "ћя”!" << endl;
}

