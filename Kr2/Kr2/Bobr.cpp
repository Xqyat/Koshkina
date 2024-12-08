#include "Bobr.h"

Bobr::~Bobr() {}

Bobr::Bobr() {
	setAnimalName("undefined");
	setAnimalAge(0);
	setAnimalGender("Yes");
	this->_countTeeths = false;
}

Bobr::Bobr(string name, int age, string gender, int countTeeths) :
	Animal(name, age, gender), _countTeeths(countTeeths) {}
Bobr::Bobr(string name, int age, string gender) :
	Animal(name, age, gender), _countTeeths(2) {}
Bobr::Bobr(string name, int age) :
	Animal(name, age, "Yes"), _countTeeths(2) {}
Bobr::Bobr(string name) :
	Animal(name, 0, "Yes"), _countTeeths(2) {}
Bobr::Bobr(int countTeeths) :
	Animal("undefined", 0, "Yes"), _countTeeths(countTeeths) {}


void Bobr::setCountTeeths(int countTeeths) { _countTeeths = countTeeths; }
int Bobr::getCountTeeths() { return _countTeeths; }

void Bobr::displayAnimal() {
	Animal::displayAnimal();
	cout << "Количество зубов: " << _countTeeths << endl;
}

void Bobr::animalSound() {
	Animal::animalSound();
	cout << "УУИИИИ!" << endl;
}

