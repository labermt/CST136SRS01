#pragma once
#include "rangeint.h"
#include "gsl.h"
#include <limits>
#include <string>
#include <sstream>

class RangeInt
{
private:
	static constexpr int kUnboundLower{ std::numeric_limits<int>::min() };
	static constexpr int kUnboundUpper{ std::numeric_limits<int>::max() - 1 };
	int lower_bound_{ kUnboundLower };
	int upper_bound_{ kUnboundUpper };
	int value_ {std::numeric_limits<int>::max()};

public:
	RangeInt() = default;
	RangeInt(int, int);

public:
	int get_lower() const noexcept;
	int get_upper() const noexcept;
	int get_value() const noexcept;

	void set_lower(int);
	void set_lower(unsigned);
	void set_lower(short);
	void set_lower(long);
	void set_lower(float);
	void set_lower(double);
	void set_lower(char*);
	void set_lower(std::string);

	void set_upper(int);
	void set_upper(unsigned);
	void set_upper(short);
	void set_upper(long);
	void set_upper(float);
	void set_upper(double);
	void set_upper(char*);
	void set_upper(std::string);

	void set_value(int);
	void set_value(unsigned);
	void set_value(short);
	void set_value(long);
	void set_value(float);
	void set_value(double);
	void set_value(char*);
	void set_value(std::string);
};
