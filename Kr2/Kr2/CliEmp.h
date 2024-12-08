#pragma once
#include "Human.h"
#include "Client.h"
#include "Employee.h"

class CliEmp : public Client, Employee
{
private:
	bool _discount;

public:
	CliEmp();
	CliEmp(string SNP, int age, Animal* animal, string position, bool discount);
	~CliEmp();

	void setDiscount(bool discount);
	bool getDiscount();

	void displayHuman();
};