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
			cout << "Слот добавлен в машину\n";
			return;
		}
	}
	cout << "В слоте больше нет места!\n";
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
	return "Количество пустых слотов: " + to_string(emptyCount) + "\n";
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
	cout << "Внесено " << money << " рублей в автомат\n";
}

void VendingMachine::withdrawMoney()
{
	cout << "Вы сняли " << _money << " рублей\n";
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
					cout << "Недостаточно средств для покупки снека!\n";
					return;
				}
				_money -= snack->getPrice();
				slot->delSnack(snack);
				cout << "Оплата прошла успешно, с баланса списано " << snack->getPrice() << " рублей" << endl;
				cout << "Вы получили " << snack->getName() << endl;
				return;
			}
		}
	}
	cout << "В выбраном слоте нет снеков\n";
}

void VendingMachine::refund(int money)
{
	_money += money;
	cout << "Произведён возврат средств в размере " << money << " рублей\n";
}

