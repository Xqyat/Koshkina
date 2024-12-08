#pragma once

#include "Human.h"

class Employee : virtual public Human {
private:
    string _position;

public:
    Employee();
    Employee(string SNP, int age, string position);
    Employee(string SNP, int age);
    Employee(string position);

    ~Employee();

    void setEmployeePosition(string position);
    string getEmployeePosition();

    virtual void displayHuman();
};
