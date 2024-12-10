#pragma once
#include <string>
#include <iostream>
using namespace std;

class Snack
{
private:
	string _snackName;
	int _price;
public:
	~Snack();
	Snack();
	Snack(string snackName, int price);

	void getSnackName();
	string setSnackName();
	void getPrice();
	int setPrice();

	int changePrice(string snackName);
};