#include "SnackSlot.h"

SnackSlot::~SnackSlot() {};
SnackSlot::SnackSlot()
{
	_snacksQuantity = 5;
	_snacks = new Snack*[_snacksQuantity];
	clearSlot();
};
SnackSlot::SnackSlot(int snacksQuantity) : _snacksQuantity(snacksQuantity), _snacks(new Snack* [_snacksQuantity])
{
	clearSlot();
}

int SnackSlot::getSnacksQuantity() { return _snacksQuantity; }
void SnackSlot::setSnacksQuantity(int quantity) { _snacksQuantity = quantity; }
Snack** SnackSlot::getSnacks() { return _snacks; }

void SnackSlot::addSnack(Snack* snack)
{
	for (int i = 0; i < _snacksQuantity; i++)
	{
		if (_snacks[i] == nullptr)
		{
			_snacks[i] = snack;
			cout << "Снек добавлен в слот\n";
			return;
		}
	}
	cout << "В слоте больше нет места!\n";
}

void SnackSlot::delSnack(Snack* snack)
{
	for (int i = 0; i < _snacksQuantity; i++)
	{
		if (_snacks[i] == snack)
		{
			_snacks[i] = nullptr;
			return;
		}
	}
}

void SnackSlot::clearSlot()
{
	for (int i = 0; i < _snacksQuantity; i++)
	{
		_snacks[i] = nullptr;
	}
}

bool SnackSlot::checkEmpty()
{
	for (int i = 0; i < _snacksQuantity; i++)
	{
		if (_snacks[i] != nullptr)
		{
			return false;
		}
	}
	return true;
}
