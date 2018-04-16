#pragma once
#include "rangeint.h"

class RangeInt
{
private:
	int kUnboundLower_;
	int kUnboundUpper_;
	int value_;

public:
	RangeInt();

public:
	int getLower() const;
	int getUpper() const;
	int getValue() const;

	void setLower();
	void setUpper();
	void setValue();

	int static getIntFromConsole();
	
};
