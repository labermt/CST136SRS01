#pragma once

class RangeInt
{
private:
	int upper_{ 10 };
	int lower_{ 0 };
	int value_{ 0 };
	bool limits_{ false };

public:
	RangeInt(const int d0, const int d1);
	RangeInt(){};

	void setLower(const int d0);
	void setUpper(const int d0);
	void setValue(const int d0);

	const int getLower();
	const int getUpper();
	const int getValue();
};