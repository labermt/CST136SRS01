// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "rangeint.h"

int main()
{
	// This block tries to set the value outside the range and throws 
	// an out_of_range exception.
	try
	{
		RangeInt test(0, 10);
		test.set_value(10);
	}
	catch (std::out_of_range &e)
	{
		e.what();
	}
	catch (std::invalid_argument &e)
	{
		e.what();
	}
	catch (...)
	{
	}

	// This block tries to set the lower bound to a value that causes the value
	// to be out of range, hence throws an out_of_range.
	try
	{
		{
			RangeInt test(0, 10);
			test.set_value(5);
			test.set_lower(6);
		}
	}
	catch (std::out_of_range &e)
	{
		e.what();
	}

	// This block attempts to set the value past the upper bound, hence throwing
	// an out_of_range exception.
	try
	{
		{
			RangeInt test(0, 10);
			test.set_value(5);
			test.set_upper(6);
			test.set_value("7");
		}
	}
	catch (std::out_of_range &e)
	{
		e.what();
	}

	// This block should not throw an error.
	try
	{
		{
			RangeInt test(0, 10);
			test.set_value(5.0);
		}
	}
	catch (std::out_of_range &e)
	{
		e.what();
	}

	// This block tries to convert one into an integer value, will fail and throw
	// an invalid_argument exception.
	try
	{
		{
			RangeInt test;
			test.set_lower("one");
		}
	}
	catch (std::invalid_argument &e)
	{
		e.what();
	}

	// This block tries to do the same, but does not have a catch for the 
	// invalid_argument exception so it falls through to the main's exception
	// handler.
	try
	{
		{
			RangeInt test(0, 10);
			test.set_lower("one");
		}
	}
	catch (std::out_of_range &e)
	{
		e.what();
	}

	return 0;
}
