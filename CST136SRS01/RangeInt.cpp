#include "stdafx.h"
#include "RangeInt.h"
#include "Exception.h"

RangeInt::RangeInt(const int d0, const int d1) : lower_(d0), value_(d0), upper_(d1), limits_(true)
{
	if (lower_ > upper_)
	{
		throw badlimits();
	}
}

void RangeInt::setLower(const int d0)
{
	if (d0 > value_)
	{
		throw badlower();
	}
	lower_ = d0;
}

void RangeInt::setUpper(const int d0)
{
	if (d0 <= value_)
	{
		throw badupper();
	}
	upper_ = d0;
}

void RangeInt::setValue(const int d0)
{
	if (limits_ && (d0 < lower_ || d0 >= upper_))
	{
		throw badvalue();
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