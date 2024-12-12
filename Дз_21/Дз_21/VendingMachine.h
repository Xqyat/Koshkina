#pragma once
#include <iostream>
#include "SnackSlot.h"
#include "Snack.h"

class VendingMachine
{
private:
	int _slotsCount;
	int _money;
	SnackSlot** _snackSlots;
	
public:
	~VendingMachine();
	VendingMachine();
	VendingMachine(int slotsCount);
	
	int getSlotsCount();
	int getMoney();
	void setSlotsCount(int count);
	SnackSlot** getSnackSlot();

	void addSlot(SnackSlot* snackSlots);
	string getEmptySlotsCount();
	void delSlot(SnackSlot* snackSlots);
	void clearSlots();

	void depositMoney(int money);
	void withdrawMoney();
	void buySnack(SnackSlot* slot);
	void refund(int money);
};