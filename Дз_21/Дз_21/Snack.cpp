#include "Snack.h"

Snack::~Snack() {};
Snack::Snack() 
{	
	this->_snackName = "���������";
	this->_price = 88;
};
Snack::Snack(string snackName, int price) {};

void Snack::getSnackName() { this->_snackName; };
string Snack::setSnackName() { return _snackName; }

int Snack::changePrice(string snackName)
{
	cout << "������� ����� ���� ��� " << getSnackName() << " - ";
	cin >> setPrice();
	cout << "����� ���� �� " << getSnackName() << " - " << getPrice();
}
