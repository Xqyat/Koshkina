#include "Human.h"

Human::Human() : _SNP("You"), _age(20) {}

Human::Human(string SNP, int age)
    : _SNP(SNP), _age(age) {}

Human::Human(string SNP)
    : _SNP(SNP), _age(20) {}

Human::~Human() {}

void Human::setHumanSNP(string SNP) {
    _SNP = SNP;
}

string Human::getHumanSNP() {
    return _SNP;
}

void Human::setHumanAge(int age) {
    _age = age;
}

int Human::getHumanAge() {
    return _age;
}

void Human::displayHuman() {

    setlocale(LC_ALL, "RUS");
    cout << "ФИО: " << _SNP << endl;
    cout << "Возраст: " << _age << endl;
}

