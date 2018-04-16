#pragma once
class RangeInt
{	
private:
	int kUnboundLower_;
	int kUnboundUpper_;

	constexpr auto kUnboundLower();
	constexpr auto kUnboundUpper();

public:
	RangeInt(int const lower, int const upper);
};

