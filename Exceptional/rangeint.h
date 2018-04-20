#pragma once
#include "rangeint.h"
#include "gsl.h"
#include <limits>
#include <string>

class RangeInt
{
private:
	static constexpr int kUnboundLower{ std::numeric_limits<int>::min() };
	static constexpr int kUnboundUpper{ std::numeric_limits<int>::max() - 1 };
	int lower_bound_{ kUnboundLower };
	int upper_bound_{ kUnboundUpper };
	int value_ {std::numeric_limits<int>::max()};

public:
	RangeInt(int const lower, int const upper): lower_bound_{lower}, upper_bound_{upper} {}

public:
	int get_lower() const;
	int get_upper() const;
	int get_value() const;

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

	void is_value_good();

	//int static getIntFromConsole();

};
