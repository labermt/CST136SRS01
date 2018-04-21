#pragma once
#include <string>

class RangeInt
{
private:
	int lower_;
	int upper_;
	int value_;

public:
	RangeInt(const int lower = kUnboundLower, const int upper = kUnboundUpper);

public:
	void setLower(const long double lower);
	void setLower(const std::string& lowerStr);
	int getLower() const noexcept;

	void setUpper(const long double upper);
	void setUpper(const std::string& upperStr);
	int getUpper() const noexcept;

	void setValue(const long double value);
	void setValue(const std::string& valueStr);
	int getValue() const noexcept;

private:
	void checkValueInRange(const long double value) const;

public:
	bool operator==(const RangeInt& rangeInt) const;

private:
	static constexpr auto kUnboundLower{ -50'000 };
	static constexpr auto kUnboundUpper{ 50'000 };
};