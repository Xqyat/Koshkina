#include "VendingMachine.h"

VendingMachine::~VendingMachine() {};
VendingMachine::VendingMachine()
{
	this->_VendingMachineName = "¬кусн€шка";
};
VendingMachine::VendingMachine(string VendingMachineName, int price) {};

void VendingMachine::getVendingMachineName() { this->_VendingMachineName; };
string VendingMachine::setVendingMachineName() { return _VendingMachineName; }

int VendingMachine::changePrice(string VendingMachineName)
{
	cout << "¬ведите новую цену дл€ " << getVendingMachineName() << " - ";
	cin >> setPrice();
	cout << "Ќова€ цена на " << getVendingMachineName() << " - " << getPrice();
}
