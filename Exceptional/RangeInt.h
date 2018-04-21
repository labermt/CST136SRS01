#pragma once
#include <limits>
#include <xlocale>

class RangeInt
{
private:
	static constexpr auto KUnboundLower{ std::numeric_limits<int>::max() - 1 };// these will never change, static is enforced for now but may go away 
	static constexpr auto KUnboundUpper{ std::numeric_limits<int>::min() + 1 }; // these will never change 
	int value_{ std::numeric_limits<int>::max()};
	const int upperBound_{ KUnboundLower };
	const int lowerBound_{ KUnboundUpper };

public:
	void setValue(int);
	void setValue(short);
	void setValue(float); 
	void setValue(unsigned);
	void setValue(double);
	void setValue(long); 
	void setValue(char *);
	void setValue(std::string); 

	void setLower(int); 
	void setLower(short);
	void setLower(unsigned);
	void setLower(double);
	void setLower(long); 
	void setLower(char*);
	void setLower(std::string); 

	void setUpper(int); 
	void setUpper(short);
	void setUpper(unsigned);
	void setUpper(double);
	void setUpper(long); 
	void setUpper(char*);
	void setUpper(std::string); 

	int getValue() const;
	int getUpper() const; 
	int getLower() const; 
	RangeInt()
	{
		upperBound_{};
		lowerBound_{};
	}
	RangeInt(int min, int max) : lowerBound_{min}, upperBound_(max-1)
	{

	}
};
