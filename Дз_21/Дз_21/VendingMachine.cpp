#include "VendingMachine.h"

VendingMachine::~VendingMachine() {};
VendingMachine::VendingMachine()
{
	this->_VendingMachineName = "���������";
};
VendingMachine::VendingMachine(string VendingMachineName, int price) {};

void VendingMachine::getVendingMachineName() { this->_VendingMachineName; };
string VendingMachine::setVendingMachineName() { return _VendingMachineName; }

int VendingMachine::changePrice(string VendingMachineName)
{
	cout << "������� ����� ���� ��� " << getVendingMachineName() << " - ";
	cin >> setPrice();
	cout << "����� ���� �� " << getVendingMachineName() << " - " << getPrice();
}
