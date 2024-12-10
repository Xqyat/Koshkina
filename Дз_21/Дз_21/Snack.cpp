#include "Snack.h"

Snack::~Snack() {};
Snack::Snack() 
{	
	this->_snackName = "¬кусн€шка";
	this->_price = 88;
};
Snack::Snack(string snackName, int price) {};

void Snack::getSnackName() { this->_snackName; };
string Snack::setSnackName() { return _snackName; }

int Snack::changePrice(string snackName)
{
	cout << "¬ведите новую цену дл€ " << getSnackName() << " - ";
	cin >> setPrice();
	cout << "Ќова€ цена на " << getSnackName() << " - " << getPrice();
}
