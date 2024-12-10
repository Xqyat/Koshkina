#pragma once

class VendingMachine
{
private:
	int _slotCount;

public:
	~VendingMachine();
	VendingMachine();
	VendingMachine(int slotCount);

	void getSlotCount();
	int setSlotCount();

	void addSlot(int slot);
	int getEmptySlotsCount();
};