#include "Snack.h"

Snack::~Snack() {};
Snack::Snack() 
{	
	_name = "���������";
	_price = 88;
};
Snack::Snack(string name, int price) : _name(name), _price(price) {}
Snack::Snack(string name) : Snack(name, 88) {}

string Snack::getName() { return _name; }
void Snack::setName(string name) { _name = name; }
int Snack::getPrice() { return _price; }
void Snack::setPrice(int price) { _price = price; }

void Snack::changePrice()
{
	int price;
	cout << "������� ����� ���� ��� " << _name << " - ";
	cin >> price;
	setPrice(price);
	cout << "����� ���� �� " << getName() << " - " << getPrice() << endl;
}
