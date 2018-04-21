#include "stdafx.h"
#include "Exception.h"

class RangeInt
{
public:
		RangeInt(const int min, const int max);
		RangeInt();	
				
		void setLower(const int min);
		void setUpper(const int min);
		void setValue(const int min);

		const int getLower();
		const int getUpper();
		const int getValue();	
private:		
	int upper_{ 10 };	
	int lower_{ 0 };	
	int value_{ 0 };	
	bool limits_{ false };
};

