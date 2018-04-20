#include "stdafx.h"
#include "rangeint.h"

int RangeInt::get_lower() const
{
	return lower_bound_;
}

int RangeInt::get_upper() const
{
	return upper_bound_;
}

int RangeInt::get_value() const
{
	return value_;
}

void RangeInt::set_lower(int const value)
{
	if (value > value_  || value >= upper_bound_)
	{
		throw std::out_of_range("Lower bound out of range.");
	}
	value_ = value;
}

void RangeInt::set_lower(unsigned const value)
{
	set_lower(gsl::narrow<int>(value));
}

void RangeInt::set_lower(short const value)
{
	set_lower(gsl::narrow<int>(value));
}

void RangeInt::set_lower(long const value)
{
	set_lower(gsl::narrow<int>(value));
}

void RangeInt::set_lower(float const value)
{
	set_lower(gsl::narrow<int>(value));
}

void RangeInt::set_lower(double const value)
{
	set_lower(gsl::narrow<int>(value));
}

void RangeInt::set_lower(char* const value)
{
}

void RangeInt::set_lower(std::string const value)
{
}

void RangeInt::set_upper(int const value)
{
}

void RangeInt::set_upper(unsigned const value)
{
}

void RangeInt::set_upper(short const value)
{
}

void RangeInt::set_upper(long const value)
{
}

void RangeInt::set_upper(float const value)
{
}

void RangeInt::set_upper(double)
{
}

void RangeInt::set_upper(char*)
{
}

void RangeInt::set_upper(std::string)
{
}

void RangeInt::set_value(int)
{
}

void RangeInt::set_value(unsigned)
{
}

void RangeInt::set_value(short)
{
}

void RangeInt::set_value(long)
{
}

void RangeInt::set_value(float)
{
}

void RangeInt::set_value(double)
{
}

void RangeInt::set_value(char*)
{
}

void RangeInt::set_value(std::string)
{
}


//int RangeInt::getIntFromConsole()
//{
//	std::string input;
//	int safeInt;
//
//	// TODO: Does not fail if floaing point is input
//	while (true)
//	{
//		std::cout << "Set lower to: ";
//
//		getline(std::cin, input);
//		std::stringstream toInt(input);
//
//		if (toInt >> safeInt)
//		{
//			break;
//		}
//		std::cout << "Invalid number, please try again." << std::endl;
//	}
//
//	return safeInt;
//}
