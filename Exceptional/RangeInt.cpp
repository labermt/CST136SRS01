#include "stdafx.h"
#include "RangeInt.h"
#include <limits>


RangeInt::RangeInt(int const lower = 0, int const upper = 21)
{
	kUnboundLower_ = std::numeric_limits<int>::min();
	kUnboundUpper_ = std::numeric_limits<int>::max();
}
