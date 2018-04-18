#pragma once
class RangeInt
{
private:
	int kUnboundLower_{ -117 };
	int kUnboundUpper_{ 117 };
	int value_{ 0 };

	//constexpr int kUnboundLower(int lower);
	//constexpr int kUnboundUpper(int upper);

public:
	RangeInt(int const min, int const max);
	RangeInt();

	int get_lower() const;
	int get_upper() const;
	int get_value() const;

	void set_lower(int const num);
	void set_upper(int const num);
	void set_value(int const num);
};

