#include "stdafx.h"
#include "RangeInt.h"
#include <limits>
#include <exception>
#include <stdexcept>
#include <iostream>


RangeInt::RangeInt(int const min, int const max):
	kUnboundLower_{min}, kUnboundUpper_{max}
{
}

RangeInt::RangeInt()
{
	//might need if statement to do this if value wasnt already set
	kUnboundLower_ = std::numeric_limits<int>::min();
	kUnboundUpper_ = std::numeric_limits<int>::max();
}

void RangeInt::set_lower(int const num)
{
}

void RangeInt::set_upper(int const num)
{
}

void RangeInt::set_value(int const num)
{
	try
	{
		value_ = num;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() <<std::endl;
	}
}

int RangeInt::get_value() const
{
	return value_;
}

int RangeInt::get_upper() const
{
	return kUnboundUpper_;
}

int RangeInt::get_lower() const
{
	return kUnboundLower_;
}
//Qs
// readme 23: not sure what to do about this or why to choose one over the other cant use default parameters because it will
//	interfere with the default constructor?
// readme 25: not sure what to do with that
// readme 27: cast narrow conversions? throw exception for not valid strings?
//	use template?