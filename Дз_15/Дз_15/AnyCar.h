#pragma once
#include <string>

namespace anyCar
{
	enum Mileage
	{
		BMW = 129000,
		GHOR = 10000,
		URUS = 40000,
		IKLOS = 25000,
		undefined = 0
	};
	
	std::string correctAlpha(std::string str);
	int correctCount(int count);
}