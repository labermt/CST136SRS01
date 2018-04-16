#include "stdafx.h"
#include "rangeint.h"
#include <iostream>
#include <string>
#include <sstream>


RangeInt::RangeInt() :
	kUnboundLower_{},
	kUnboundUpper_{},
	value_{}
{
}

int RangeInt::getLower() const
{
	return kUnboundLower_;
}

int RangeInt::getUpper() const
{
	return kUnboundUpper_;
}

int RangeInt::getValue() const
{
	return value_;
}

void RangeInt::setLower()
{
	kUnboundLower_ = getIntFromConsole();
}

void RangeInt::setUpper()
{
	kUnboundUpper_ = getIntFromConsole();
}

void RangeInt::setValue()
{
	value_ = getIntFromConsole();
}

int RangeInt::getIntFromConsole() 
{
	std::string input;
	int safeInt;

	// TODO: Does not fail if double is input
	while (true)
	{
		std::cout << "Set lower to: ";

		getline(std::cin, input);
		std::stringstream toInt(input);

		if (toInt >> safeInt)
		{
			break;
		}
		std::cout << "Invalid number, please try again." << std::endl;
	}

	return safeInt;
}
