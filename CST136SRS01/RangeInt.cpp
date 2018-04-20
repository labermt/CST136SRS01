#include "stdafx.h"
#include "RangeInt.h"

RangeInt::RangeInt(int d0, int d1) : lower_(d0), value_(d0 + 1), upper_(d1)
{
	if (lower_ > upper_)
	{
		
	}

}

void RangeInt::setLower(int d0)
{


	lower_ = d0;
}

void RangeInt::setUpper(int d0)
{
	if (d0 > )
	{
		
	}
	upper_ = d0;
}

const int RangeInt::getLower()
{
	return lower_;
}

const int RangeInt::getUpper()
{
	return upper_;
}