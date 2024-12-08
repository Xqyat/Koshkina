#include "CliEmp.h"
#include <iostream>
using namespace std;

CliEmp::CliEmp() : Human("You", 20) {}
CliEmp::CliEmp(string SNP, int age, Animal* animal, string position, bool discount)
    : Human(SNP, age), Client(animal), Employee(position), _discount(discount) {}
CliEmp::~CliEmp() {}

void CliEmp::setDiscount(bool discount) {
    _discount = discount;
}

bool CliEmp::getDiscount() {
    return _discount;
}

void CliEmp::displayHuman() {

    Human::displayHuman();
    Client::displayHuman();
    Employee::displayHuman();
    cout << "Скидка: " << (_discount ? "Да" : "Нет") << endl;
}
