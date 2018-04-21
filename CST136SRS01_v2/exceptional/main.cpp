// Exceptioanl_temp.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "rangeint.h"


struct doh : std::exception {
	const char* what() const noexcept { return "Doh!\n"; }
};

int main()
{

	try {
		{
			// value > upper
			RangeInt cliffhanger;
			cliffhanger.set_upper(10);
			cliffhanger.set_value(11);
		}
	}
	catch (std::out_of_range& ex) {
		std::cout << ex.what();
	}


	try {
		{
			// upper greater then numeric_limit max
			RangeInt cliffhanger;
			cliffhanger.set_upper(numeric_limits<int>::max() + 1);

		}
	}
	catch (std::out_of_range& ex) {
		std::cout << ex.what();
	}


	try {
		{
			// value < lower limit
			RangeInt cliffhanger;
			cliffhanger.set_lower(10);
			cliffhanger.set_value(9);

		}
	}
	catch (std::out_of_range& ex) {
		std::cout << ex.what();
	}

	try {
		{
			// string
			RangeInt cliffhanger;
			cliffhanger.set_value("324njbnj233");

		}
	}
	catch (std::out_of_range& ex) {
		std::cout << ex.what();
	}

	try {
		{
			// string
			RangeInt cliffhanger;
			cliffhanger.set_value("322.33");

		}
	}
	catch (std::out_of_range& ex) {
		std::cout << ex.what();
	}

	return 0;
}

