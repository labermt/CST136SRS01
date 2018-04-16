#include "stdafx.h"
#include "rangeint.h"


RangeInt::RangeInt() :
	kUnboundLower_{},
	kUnboundUpper_{},
	value_{}
{
}

int RangeInt::getLower() const
{
	return kUnboundLower_;
}

int RangeInt::getUpper() const
{
	return kUnboundUpper_;
}

int RangeInt::getValue() const
{
	return value_;
}

void RangeInt::setValue(int const value)
{
	value_ = value;
}
