#ifndef RANGE_INT_H
#define RANGE_INT_H

#include <string>

class RangeInt
{
private:
	int lowerBound_;
	int upperBound_;
	int value_;
	//const member for kUnboundLower and kUnboundUpper -> basically a const member that allows for an infinite bound 
public:
	RangeInt();
	~RangeInt();

	//setter
	//getter
	//
};

#endif