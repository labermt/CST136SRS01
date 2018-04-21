#pragma once
#include <limits>
#include <xlocale>// this allowed std::string to work in the header

class RangeInt
{
private:
	static constexpr auto KUnboundUpper{ std::numeric_limits<int>::min() + 1 }; // these will never change 
	static constexpr auto KUnboundLower{ std::numeric_limits<int>::max() - 1 };// static is enforced for now but may go away 
	int value_{ std::numeric_limits<int>::max() };
	int upperBound_{ KUnboundLower };
	int lowerBound_{ KUnboundUpper };

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
	void setLower(float);
	void setLower(unsigned);
	void setLower(double);
	void setLower(long);
	void setLower(char*);
	void setLower(std::string);

	void setUpper(int);
	void setUpper(short);
	void setUpper(float);
	void setUpper(unsigned);
	void setUpper(double);
	void setUpper(long);
	void setUpper(char*);
	void setUpper(std::string);

	int getValue() const noexcept;
	int getUpper() const noexcept;
	int getLower() const noexcept;

	RangeInt() = default;
	RangeInt(int const min, int const max);
};
