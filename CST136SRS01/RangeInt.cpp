#include "stdafx.h"
#include "RangeInt.h"

RangeInt::RangeInt(const int d0, const int d1) : lower_(d0), value_(d0), upper_(d1), limits_(true)
{
	if (lower_ > upper_)
	{
		//fail
	}
}

void RangeInt::setLower(const int d0)
{
	lower_ = d0;
	if (lower_ > upper_)
	{
		//fail
	}
}

void RangeInt::setUpper(const int d0)
{
	upper_ = d0;
	if (lower_ > upper_)
	{
		//fail
	}
}

void RangeInt::setValue(const int d0)
{
	if (limits_ && d0 < lower_ || d0 >= upper_)
	{
		//fail
	}
	value_ = d0;
}

const int RangeInt::getLower()
{
	return lower_;
}

const int RangeInt::getUpper()
{
	return upper_;
}

const int RangeInt::getValue()
{
	return value_;
}