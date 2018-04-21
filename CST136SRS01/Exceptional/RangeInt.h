#pragma once
#include "RangeInt.h"
#include <string>

class RangeInt
{
private:
	/*constexpr*/ int kUnboundLower, kUnboundUpper;
	int value;
public:
	int getValue() const noexcept;
	
	void setValue(const int);
	int getLower() const noexcept;
	int getUpper() const noexcept;
	void setLower(const int);
	void setUpper(const int);

	/*
	void setLower(const std::string);
	void setLower(const char *);
	void setUpper(const std::string);
	void setUpper(const char *);
	*/

	RangeInt();
	RangeInt(const int lower, const int upper);
};

