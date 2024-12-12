#include "VendingMachine.h"

VendingMachine::~VendingMachine() {};
VendingMachine::VendingMachine()
{
	this->_slotsCount = 5;
	this->_money = 0;
	_snackSlots = new SnackSlot * [_slotsCount];
	clearSlots();
};
VendingMachine::VendingMachine(int slotsCount) : _slotsCount(slotsCount), _snackSlots(new SnackSlot* [_slotsCount]), _money(0)
{
	clearSlots();
};

int VendingMachine::getSlotsCount() {  return _slotsCount; }
int VendingMachine::getMoney() { return _money; }
void VendingMachine::setSlotsCount(int count) { _slotsCount = count; }
SnackSlot** VendingMachine::getSnackSlot() { return _snackSlots; }

void VendingMachine::addSlot(SnackSlot* snackSlot)
{
	for (int i = 0; i < _slotsCount; i++)
	{
		if (_snackSlots[i] == nullptr)
		{
			_snackSlots[i] = snackSlot;
			cout << "���� �������� � ������\n";
			return;
		}
	}
	cout << "� ����� ������ ��� �����!\n";
}

void VendingMachine::delSlot(SnackSlot* snackSlot)
{
	for (int i = 0; i < _slotsCount; i++)
	{
		if (_snackSlots[i] == snackSlot)
		{
			_snackSlots[i] = nullptr;
			return;
		}
	}
}

string VendingMachine::getEmptySlotsCount()
{
	int emptyCount = 0;
	for (int i = 0; i < _slotsCount; i++)
	{
		SnackSlot* snackSlot = _snackSlots[i];
		if (snackSlot != nullptr)
		{
			if (snackSlot->checkEmpty()) ++emptyCount;
		}
		else ++emptyCount;
	}
	return "���������� ������ ������: " + to_string(emptyCount) + "\n";
}

void VendingMachine::clearSlots()
{
	for (int i = 0; i < _slotsCount; i++)
	{
		_snackSlots[i] = nullptr;
	}
}

void VendingMachine::depositMoney(int money)
{
	_money += money;
	cout << "������� " << money << " ������ � �������\n";
}

void VendingMachine::withdrawMoney()
{
	cout << "�� ����� " << _money << " ������\n";
	_money = 0;
}

void VendingMachine::buySnack(SnackSlot* slot)
{
	Snack** snacks = slot->getSnacks();
	if (!slot->checkEmpty())
	{
		for (int i = 0; i < slot->getSnacksQuantity(); i++)
		{
			if (snacks[i] != nullptr)
			{
				Snack* snack = snacks[i];
				if (snack->getPrice() > _money)
				{
					cout << "������������ ������� ��� ������� �����!\n";
					return;
				}
				_money -= snack->getPrice();
				slot->delSnack(snack);
				cout << "������ ������ �������, � ������� ������� " << snack->getPrice() << " ������" << endl;
				cout << "�� �������� " << snack->getName() << endl;
				return;
			}
		}
	}
	cout << "� �������� ����� ��� ������\n";
}

void VendingMachine::refund(int money)
{
	_money += money;
	cout << "��������� ������� ������� � ������� " << money << " ������\n";
}

