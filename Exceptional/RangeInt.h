#pragma once
#include <limits>
#include <string>

class RangeInt
{
private:
	int lower_bound_{ kUnboundLower };
	int upper_bound_{ kUnboundUpper };
	int value_{ std::numeric_limits<int>::max() };

	static constexpr int kUnboundLower{ std::numeric_limits<int>::min() };
	static constexpr int kUnboundUpper{ std::numeric_limits<int>::max() - 1 };

public:
	RangeInt(int const min, int const max);
	RangeInt() = default;

	int get_lower() const noexcept;
	int get_upper() const noexcept;
	int get_value() const noexcept;

	void set_lower(int const num);
	void set_lower(short const num);
	void set_lower(long const num);
	void set_lower(float const num);
	void set_lower(double const num);
	void set_lower(char* const num);
	void set_lower(unsigned const num);
	void set_lower(std::string const num);

	void set_upper(int const num);
	void set_upper(short const num);
	void set_upper(long const num);
	void set_upper(float const num);
	void set_upper(double const num);
	void set_upper(char* const num);
	void set_upper(unsigned const num);
	void set_upper(std::string const num);

	void set_value(int const num);
	void set_value(short const num);
	void set_value(long const num);
	void set_value(float const num);
	void set_value(double const num);
	void set_value(char* const num);
	void set_value(unsigned const num);
	void set_value(std::string const num);

};
