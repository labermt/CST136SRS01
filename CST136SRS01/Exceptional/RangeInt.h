#pragma once
class RangeInt
{
private:
	int value{ 0 }; 
	int setValue(int value) const;
	int getValue() const;
	const int upperBound_{ 0 }; 
	const int lowerBound_{ 0 }; 
	

public:
	RangeInt()
	{
		upperBound_{}; 
		lowerBound_{}; 
	}
	RangeInt(int lowerBound, int upperBound)
	{
		
	}
};