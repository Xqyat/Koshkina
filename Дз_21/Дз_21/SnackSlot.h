#pragma once
#include <string>
#include "Snack.h"

using namespace std;

class SnackSlot
{
private:
	int _slotsQuantity;

public:
	~SnackSlot();
	SnackSlot();
	SnackSlot(int slotsQuantity);

	void getSlotsQuantity();
	int setSlotsQuantity();

	void addSnack(string snackName);
};