#pragma once
#include "RangeInt.h"

class RangeInt
{
private:
	const int kUnboundLower, kUnboundUpper;
public:
	int getLower() const;
	int getUpper() const;
	void setLower(const int);
	void setUpper(const int);
	RangeInt();
	RangeInt(const int lower, const int upper);
	~RangeInt();
};

