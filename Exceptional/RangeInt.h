#pragma once
class RangeInt
{	
private:
	int kUnboundLower_;
	int kUnboundUpper_;
	int value_;

	constexpr auto kUnboundLower();
	constexpr auto kUnboundUpper();

public:
	RangeInt(int const lower, int const upper);
	RangeInt();
	
	auto get_lower() const;
	auto get_upper() const;
	auto get_value()const;

	void set_lower(int num);
	void set_upper(int num);
	void set_value(int num);
};

