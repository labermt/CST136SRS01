#pragma once
class RangeInt
{
private:
	const int kUnboundLower_;
	const int kUnboundUpper_;
	int value_{ 0 };

	constexpr int kUnboundLower(int num);
	constexpr int kUnboundUpper(int num);

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

constexpr int RangeInt::kUnboundLower(int const num)
{

}

constexpr int RangeInt::kUnboundUpper(int const num)
{

}

