// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "rangeint.h"
#include "gsl.h"
#include <iostream>

int main()
{

	int i = 5;
	auto j = 5.0;
	try
	{
		// Narrowing conversion example
		auto const input{ 0.0 };
		auto test = gsl::narrow<int>(input);

		auto classTest{ RangeInt::getIntFromConsole() };

		//throw "test";
	}
	catch (int param)
	{
		std::cout << "int exception";
	}
	catch (char param)
	{
		std::cout << "char exception";
	}
	catch (...)
	{
		std::cout << "default exception";
	}

	return 0;
}
