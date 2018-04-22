#include "stdafx.h"
#include "RangeInt.h"
#include "ErrorHandler.h"

using namespace std;


	RangeInt::RangeInt(const int lowerBound, const int upperBound)
		:kUnboundLower{ false },
		KUnboundUpper{ false }
	{
		setLowerBound(lowerBound);
		setUpperBound(upperBound);
	}


	// Handle narrowing conversions (float, double, long, unsigned, ...). 
	int RangeInt::getLowerBound() const noexcept
	{
		return lowerBound;
	}


	int RangeInt::getUpperBound() const noexcept
	{
		return upperBound;
	}


	void RangeInt::setLowerBound(const int lowerBoundValue)
	{
		lowerBound = lowerBoundValue;
	}


	// throws error if a string is passed
	void RangeInt::setLowerBound(string lowerBoundValue)
	{
		throw ErrorHandler::notValidInt();
	}


	// throws error if a c-string is passed
	void setLowerBound(const char lowerBoundValue)
	{
		throw ErrorHandler::notValidInt();
	}


	void RangeInt::setUpperBound(const int upperBoundValue)
	{
		upperBound = upperBoundValue;
	}


	// throws error if a string is passed
	void RangeInt::setUpperBound(string upperBoundValue)
	{
		throw ErrorHandler::notValidInt();
	}


	// throws error if a c-string is passed
	void setUpperBound(const char upperBoundValue)
	{
		throw ErrorHandler::notValidInt();
	}


	void RangeInt::setValue(const int value)
	{

		// verify that the value being set is within the bounds and that 
		if (value < lowerBound && !kUnboundLower
			|| value > upperBound && !KUnboundUpper)
			throw ErrorHandler::outOfBounds();
		chosenValue = value;
	}


	int RangeInt::getValue() const noexcept
	{
		return chosenValue;
	}
