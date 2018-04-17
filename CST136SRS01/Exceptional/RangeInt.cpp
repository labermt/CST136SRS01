#include "stdafx.h"
#include "RangeInt.h"


int RangeInt::getLower() const
{
	return kUnboundLower;
}

int RangeInt::getUpper() const
{
	return kUnboundUpper;
}

void RangeInt::setLower(const int lower)
{
	//kUnboundLower = lower;
}

void RangeInt::setUpper(const int upper)
{
	//kUnboundUpper = upper;
}

RangeInt::RangeInt() : RangeInt(1, 100) //delegating ctor
{
}

RangeInt::RangeInt(const int lower, const int upper)
	: kUnboundLower{lower}, kUnboundUpper{upper}
{
}

RangeInt::~RangeInt()
{
}

//What are the default values?
//How to use setters when vars are const?