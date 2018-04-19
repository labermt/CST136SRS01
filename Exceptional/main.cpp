// Exceptional.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RangeInt.h"
#include <stdexcept>
#include <ostream>
#include <iostream>


int main()
{
	try
	{
		RangeInt out_of_bounds(0,4);
		out_of_bounds.set_value(10);
	}
	catch (std::out_of_range &e)
	{
		std::cout << e << 10 <<std::endl;
	}
    return 0;
}

