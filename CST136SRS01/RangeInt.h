#pragma once

class RangeInt
{
private:
	int upper_{ 10 };
	int lower_{ 0 };
	int value_{0};

public:
	RangeInt(int d0, int d1);
	RangeInt();

	void setUpper(int d0);
	void setLower(int d0);
	const int getUpper();
	const int getLower();
};