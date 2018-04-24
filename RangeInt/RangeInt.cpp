#include "stdafx.h"
#include "RangeInt.h"
#include "Exception.h"

RangeInt::RangeInt(const int min, const int max) : lower_(min), value_(min), upper_(max), limits_(true)
{
	if (lower_ > upper_)
	{
		throw badlimits();
	}
}

void RangeInt::setLower(const int min)
{
	if (min > value_)
	{
		throw badlower();
	}
	lower_ = min;
}

void RangeInt::setUpper(const int min)
{
	if (min <= value_)
	{
		throw badupper();
	}
	upper_ = min;
}

void RangeInt::setValue(const int min)
{
	if (limits_ && (min < lower_ || min >= upper_))
	{
		throw badvalue();
	}
	value_ = min;	
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

