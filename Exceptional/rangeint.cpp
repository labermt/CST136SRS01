#include "stdafx.h"
#include "rangeint.h"

RangeInt::RangeInt(int const lower, int const upper)
{
	if (lower >= upper)
	{
		throw std::invalid_argument("Range is not valid.");
	}
	lower_bound_ = lower;
	upper_bound_ = upper - 1;
}

int RangeInt::get_lower() const noexcept
{
	return lower_bound_;
}

int RangeInt::get_upper() const noexcept
{
	return upper_bound_;
}

int RangeInt::get_value() const noexcept
{
	return value_;
}

void RangeInt::set_lower(int const lower)
{
	if (lower > value_  || lower >= upper_bound_)
	{
		throw std::out_of_range("Lower bound out of range.");
	}
	lower_bound_ = lower;
}

void RangeInt::set_lower(unsigned const lower)
{
	set_lower(gsl::narrow<int>(lower));
}

void RangeInt::set_lower(short const lower)
{
	set_lower(gsl::narrow<int>(lower));
}

void RangeInt::set_lower(long const lower)
{
	set_lower(gsl::narrow<int>(lower));
}

void RangeInt::set_lower(float const lower)
{
	set_lower(gsl::narrow<int>(lower));
}

void RangeInt::set_lower(double const lower)
{ 
	set_lower(gsl::narrow<int>(lower));
}

void RangeInt::set_lower(char* const lower)
{
	int value_as_int;
	std::istringstream iss(lower);

	if (!(iss >> value_as_int) || iss.bad())
	{
		throw std::invalid_argument("Lower bound parameter not valid.");
	}
	set_lower(value_as_int);
}

void RangeInt::set_lower(std::string const lower)
{
	int value_as_int;
	std::istringstream iss(lower);

	if (!(iss >> value_as_int) || iss.bad())
	{
		throw std::invalid_argument("Lower bound parameter not valid.");
	}
	set_lower(value_as_int);
}

void RangeInt::set_upper(int const upper)
{
	if (upper < value_  || upper <= lower_bound_)
	{
		throw std::out_of_range("Upper bound out of range.");
	}
	upper_bound_ = upper;
}

void RangeInt::set_upper(unsigned const upper)
{
	set_upper(gsl::narrow<int>(upper));
}

void RangeInt::set_upper(short const upper)
{
	set_upper(gsl::narrow<int>(upper));
}

void RangeInt::set_upper(long const upper)
{
	set_upper(gsl::narrow<int>(upper));
}

void RangeInt::set_upper(float const upper)
{
	set_upper(gsl::narrow<int>(upper));
}

void RangeInt::set_upper(double const upper)
{
	set_upper(gsl::narrow<int>(upper));
}

void RangeInt::set_upper(char* const upper)
{
	int value_as_int;
	std::istringstream iss(upper);

	if (!(iss >> value_as_int) || iss.bad())
	{
		throw std::invalid_argument("Upper bound parameter not valid.");
	}
	set_upper(value_as_int);
}

void RangeInt::set_upper(std::string const upper)
{
	int value_as_int;
	std::istringstream iss(upper);

	if (!(iss >> value_as_int) || iss.bad())
	{
		throw std::invalid_argument("Upper bound parameter not valid.");
	}
	set_upper(value_as_int);
}

void RangeInt::set_value(int const value)
{
	if (value < lower_bound_  || value >= upper_bound_)
	{
		throw std::out_of_range("Value out of range.");
	}
	upper_bound_ = value;
}

void RangeInt::set_value(unsigned const value)
{
	set_value(gsl::narrow<int>(value));
}

void RangeInt::set_value(short const value)
{
	set_value(gsl::narrow<int>(value));
}

void RangeInt::set_value(long const value)
{
	set_value(gsl::narrow<int>(value));
}

void RangeInt::set_value(float const value)
{
	set_value(gsl::narrow<int>(value));
}

void RangeInt::set_value(double const value)
{
	set_value(gsl::narrow<int>(value));
}

void RangeInt::set_value(char* const value)
{
	int value_as_int;
	std::istringstream iss(value);

	if (!(iss >> value_as_int) || iss.bad())
	{
		throw std::invalid_argument("Value parameter not valid.");
	}
	set_value(value_as_int);
}

void RangeInt::set_value(std::string const value)
{
	int value_as_int;
	std::istringstream iss(value);

	if (!(iss >> value_as_int) || iss.bad())
	{
		throw std::invalid_argument("Value parameter not valid.");
	}
	set_value(value_as_int);
}
