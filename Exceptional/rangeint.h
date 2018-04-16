#pragma once
#include "rangeint.h"

class RangeInt
{
private:
	int const kUnboundLower_;
	int const kUnboundUpper_;
	int value_;

public:
	RangeInt();

public:
	int getLower() const;
	int getUpper() const;
	int getValue() const;

	void setValue(int);
	
};
