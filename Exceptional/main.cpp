// Exceptional.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RangeInt.h"

int main()
{
	auto errors{ 0 };
	auto good_tests{ 0 };
	auto test_cases{ 0 };
	
	try
	{
		//error
		++test_cases;
		RangeInt test(0, 4);
		test.set_value(10);
		++good_tests;
	}
	catch (std::out_of_range &e)
	{
		++errors;
	}
	
	try
	{
		//error
		++test_cases;
		RangeInt test(5, 10);
		test.set_value(1);
		++good_tests;
	}
	catch (std::out_of_range &e)
	{
		++errors;
	}
	try
	{
		//good
		++test_cases;
		RangeInt test(0, 15);
		test.set_value(10);
		++good_tests;
	}
	catch (std::out_of_range &e)
	{
		++errors;
	}
	try
	{
		//good
		++test_cases;
		RangeInt test(0, 15);
		test.set_value(10.0);
		++good_tests;
	}
	catch (std::out_of_range &e)
	{
		++errors;
	}
	try
	{
		//good
		++test_cases;
		RangeInt test(0, 15);
		test.set_value(10L);
		++good_tests;
	}
	catch (std::out_of_range &e)
	{
		++errors;
	}
	try
	{
		//good
		++test_cases;
		RangeInt test(0, 15);
		test.set_value(10.f);
		++good_tests;
	}
	catch (std::out_of_range &e)
	{
		++errors;
	}
	try
	{
		//error
		++test_cases;
		RangeInt test(0, 15);
		test.set_value("garbage");
		++good_tests;
	}
	catch (std::invalid_argument &e)
	{
		++errors;
	}
	try
	{
		//error
		++test_cases;
		RangeInt test(0, 15);
		test.set_value("garbage");
		++good_tests;
	}
	catch (std::out_of_range &e)
	{
		//wont hit error because looking for wrong error type
		++errors;
	}
	return errors;
}

