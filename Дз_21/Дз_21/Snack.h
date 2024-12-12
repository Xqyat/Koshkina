#pragma once
#include <string>
#include <iostream>
using namespace std;

class Snack
{
private:
	string _name;
	int _price;
public:
	~Snack();
	Snack();
	Snack(string name, int price);
	Snack(string name);

	string getName();
	void setName(string name);
	int getPrice();
	void setPrice(int price);

	void changePrice();
};