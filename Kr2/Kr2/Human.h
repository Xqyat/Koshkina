#pragma once

#include <iostream>
#include <string>

using namespace std;

class Human
{
private:
	string _SNP;
	int _age;

public:
	Human();
	Human(string SNP, int age);
	Human(string SNP);

	virtual ~Human();

	void setHumanSNP(string SNP);
	string getHumanSNP();
	void setHumanAge(int age);
	int getHumanAge();

	virtual void displayHuman() = 0;
};
