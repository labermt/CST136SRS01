#include "stdafx.h"
#include "RangeInt.h"
#include <exception>
#include <iostream>

int main()
{
	try
	{
		//Testing RangeInt
		RangeInt range_int = RangeInt(1, 10);
		range_int.setValue(5); //correct
		//range_int.setLower(11); //throws exception
		//range_int.setUpper(-9); //throws exception
		//range_int.setValue(50); //throws exception
		range_int.setUpper(6); //correct
		range_int.setLower(-1000); //correct
		//range_int.setValue(1000000); //throws exception

		std::cout << "range_int is correctly setup" << std::endl;
	}
	catch(const std::exception & e)
	{
		//Catch and display RangeInt exceptions
		std::cerr << e.what() << std::endl; //Standard output stream for errors
	}

	return 0;
}
