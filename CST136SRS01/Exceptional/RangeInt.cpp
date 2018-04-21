#include "stdafx.h"
#include "RangeInt.h"
#include <limits>
#include <gsl.h>

int RangeInt::getValue() const noexcept
{
	return value;
}

void RangeInt::setValue(const int newValue)
{
	if(newValue > getUpper() || newValue < getLower()) 
		throw std::logic_error("Value out of bounds.");
	value = gsl::narrow<int>(newValue);
}

int RangeInt::getLower() const noexcept
{
	return kUnboundLower;
}

int RangeInt::getUpper() const noexcept
{
	return kUnboundUpper;
}

/*
void RangeInt::setLower(const double)    //throws exception?
{
value = gsl::narrow_cast<int>(newValue);
}

void RangeInt::setLower(const std::string newValue)
{
	value = gsl::narrow_cast<int>(newValue);
}

void RangeInt::setLower(const char * newValue)
{
	value = gsl::narrow<int>(newValue);
}*/

void RangeInt::setLower(const int lower)
{
	kUnboundLower = gsl::narrow<int>(lower);
	if (kUnboundLower > kUnboundUpper) throw std::logic_error("Lower bound cannot be greater than the upper bound.");
	if (value < kUnboundLower) throw std::logic_error("Lower bound cannot be greater than value.");
}

void RangeInt::setUpper(const int upper)
{
	kUnboundUpper = gsl::narrow<int>(upper);
	if (kUnboundLower > kUnboundUpper) throw std::logic_error("Lower bound cannot be greater than the upper bound.");
	if (value > kUnboundUpper) throw std::logic_error("Upper bound cannot be less than than value.");
}

//default, delegating ctor
RangeInt::RangeInt() : RangeInt(std::numeric_limits<int>::min(), std::numeric_limits<int>::max())
{
}

RangeInt::RangeInt(const int lower, const int upper)
	: kUnboundLower{lower}, kUnboundUpper{upper}, value{lower}
{
}