#pragma once
#include <string>
#include "stdafx.h"
#include <iostream>

using namespace std;

class RangeInt
{
	int lowerBound{ 0 };
	int upperBound{ 0 };
	const bool kUnboundLower{ true };
	const bool KUnboundUpper{ true };
	int chosenValue{ 0 };
	string test;


public:
	RangeInt() = default;	// sets all members to their default values
	RangeInt(const int lowerBound, const int upperBound);

	int getLowerBound() const noexcept;
	int getUpperBound() const noexcept;

	void setLowerBound(const int lowerBoundValue);
	void setLowerBound(const string lowerBoundValue);
	void setLowerBound(const char lowerBoundValue);

	void setUpperBound(const int upperBoundValue);
	void setUpperBound(const string upperBoundValue);
	void setUpperBound(const char upperBoundValue);

	void setValue(const int value);

	int getValue() const noexcept;
};

