#include "Client.h"


Client::~Client() {}
Client::Client() : Human("You", 20), _animal(nullptr) {}
Client::Client(string SNP, int age, Animal* animal)
	: Human(SNP, age), _animal(animal) {}
Client::Client(string SNP, int age)
	: Human(SNP, age), _animal(nullptr) {}
Client::Client(string SNP)
	: Human(SNP , 20), _animal(nullptr) {}
Client::Client(Animal* animal)
	: Human("You", 20), _animal(animal) {}

void Client::setClientPet(Animal* animal) { this->_animal = animal; }
Animal* Client::getClientPet() { return _animal; }

void Client::displayHuman() {
	if (_animal) {
		cout << "Питомец клиента " << Human::getHumanSNP() << " - " << _animal->getAnimalName() << endl;
	}
	else {
		cout << "У клиента нет питомца." << endl;
	}
}

void Client::takeAnimal(Animal* animal) {
	if (_animal) {
		cout << "У клиента " << getHumanSNP() << " есть питомец." << endl;
	}
	else {
		_animal = animal;
		cout << getHumanSNP() << " узверевляет: " << this->_animal->getAnimalName() << endl;
	}
}