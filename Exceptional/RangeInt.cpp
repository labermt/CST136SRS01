#include "stdafx.h"
#include "RangeInt.h"
#include <limits>
#include <stdexcept>


RangeInt::RangeInt(int const min, int const max):
	kUnboundLower_{min}, kUnboundUpper_{max}
{
}

RangeInt::RangeInt():
	kUnboundLower_{std::numeric_limits<int>::min()},
	kUnboundUpper_{std::numeric_limits<int>::max()}
{
}

void RangeInt::set_lower(int const num)
{
	
}

void RangeInt::set_upper(int const num)
{

}

void RangeInt::set_value(int const num)
{
	if (num < kUnboundLower_ && num <= kUnboundUpper_)
	{
		throw std::out_of_range("Tried to set value that was out of bounds");
	}
	value_ = num;
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
