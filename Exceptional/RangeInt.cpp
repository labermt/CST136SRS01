#include "stdafx.h"
#include "RangeInt.h"


RangeInt::RangeInt()
{

	// Create a default ctor is unbound on both upper and lower values.
	// Create the default ctor by delegating, default parameters, or default generation.

}


RangeInt::~RangeInt()
{


}


// Create a ctor that accepts: [lower bound, upper bound).
RangeInt::RangeInt(int lowerBound, int upperBound)
	:kUnboundLower{lowerBound}
{
	
}


// Create lower bound and upper bound setters and getters. Handle narrowing conversions (float, double, long, unsigned, ...). Allow std::string and c-strings for setters and handle non-valid strings
const int RangeInt::getLowerBound() const
{

}

const int RangeInt::getUpperBound() const
{

}

void RangeInt::setLowerBound(int lowerBound)
{

}

void RangeInt::setUpperBound(int upperBound)
{

}

// Create setters for the value and throw an exception if the value exceeds the bounds. Ensure a strong exception guarantee.
void RangeInt::setValue(int value)
{

}

// Create a getter for the value.
const int RangeInt::getValue() const
{

}


// Devise a strategy for dealing with changing bounds when the value is outside the bounds

