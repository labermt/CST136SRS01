#pragma once
class RangeInt
{
	int lowerValue{ 0 };
	int upperValue{ 0 };
	const int kUnboundLower{ 0 };
	const int KUnboundUpper{ 0 };

public:
	RangeInt() = default;	// sets all members to their default values
	~RangeInt();
	RangeInt(int lowerBound, int upperBound);

	const int getLowerBound() const;
	const int getUpperBound() const;

	void setLowerBound(int lowerBound);
	void setUpperBound(int upperBound);

	void setValue(int value);

	const int getValue() const;
};

