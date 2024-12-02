#include "AnyCar.h"
#include <iostream>

using namespace std;

string anyCar::correctAlpha(string str)
{
	setlocale(LC_ALL, "RUS");
	for (int i = 0; i < str.length(); i++)
	{
		if (!isalpha(str.at(i)) && !ispunct(str.at(i)))
		{
			cout << "Некорректны ввод данных в поле!" << endl
				<< "__________________" << endl;
			return "undefined";
		}
	}
	return str;

}

int anyCar::correctCount(int count)
{
	setlocale(LC_ALL, "RUS");
	if (count >= 0) return count;
	else
	{
		cout << "Некорректны ввод данных в поле!" << endl
			<< "__________________" << endl;
		return 0;
	}
}