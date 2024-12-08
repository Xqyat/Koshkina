#include "Employee.h"


Employee::~Employee() {}

Employee::Employee() : Human("You", 25), _position("Worker") {}
Employee::Employee(string SNP, int age, string position)
    : Human(SNP, age), _position(position) {}
Employee::Employee(string SNP, int age)
    : Human(SNP, age), _position("Worker") {}
Employee::Employee(string position)
    : Human("You", 25), _position(position) {}


void Employee::setEmployeePosition(string position) {
    _position = position;
}

string Employee::getEmployeePosition() {
    return _position;
}

void Employee::displayHuman() {
    cout << "Должность: " << _position << endl;
}
