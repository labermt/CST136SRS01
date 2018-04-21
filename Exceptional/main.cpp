// Exceptional.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RangeInt.h"
#include <iostream>


int main()
{
	auto errors{0}; 
	try
	{
			RangeInt test(0 , 1);
			test.set_value(10); 
	}
	catch(...)
	{
		++errors;
	}
	

    return errors;
}

