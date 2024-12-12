#pragma once
#include <string>
#include "Snack.h"

using namespace std;

class SnackSlot
{
private:
	int _snacksQuantity;
	Snack** _snacks;

public:
	~SnackSlot();
	SnackSlot();
	SnackSlot(int snackQuantity);

	int getSnacksQuantity();
	void setSnacksQuantity(int quantity);
	Snack** getSnacks();

	void addSnack(Snack* snack);
	void delSnack(Snack* snack);
	void clearSlot();
	bool checkEmpty();
};