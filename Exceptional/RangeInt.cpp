#include "stdafx.h"
#include "RangeInt.h"
#include <stdexcept>
#include <gsl.h>
#include <sstream>
#include <iostream>


void RangeInt::set_lower(int const num)
{
	if (num > value_ || num >= upper_bound_)
	{
		throw std::out_of_range("Tried to set lower bound out of range");
	}
	lower_bound_ = num;
}

void RangeInt::set_upper(int const num)
{
	if (num <= value_ || num <= lower_bound_)
	{
		throw std::out_of_range("Tried to set upper bound out of range");
	}
	upper_bound_ = num;
}

void RangeInt::set_value(int const num)
{
	if (num < lower_bound_ || num >= upper_bound_)
	{
		throw std::out_of_range("Tried to set value that was out of bounds");
	}
	value_ = num;
}

void RangeInt::set_lower(short const num)
{
	set_lower(gsl::narrow<int>(num));
}

void RangeInt::set_lower(long const num)
{
	set_lower(gsl::narrow<int>(num));
}

void RangeInt::set_lower(float const num)
{
	set_lower(gsl::narrow<int>(num));
}

void RangeInt::set_lower(double const num)
{
	set_lower(gsl::narrow<int>(num));
}

void RangeInt::set_lower(char* const num)
{
	auto int_num{ 0 };
	std::istringstream iss(num);
	if (!(iss >> int_num || iss.bad()))
	{
		throw std::invalid_argument("String was bad");
	};
	set_lower(int_num);
}

void RangeInt::set_lower(unsigned const num)
{
	set_lower(gsl::narrow<int>(num));
}

void RangeInt::set_lower(std::string const num)
{
	auto int_num{ 0 };
	std::istringstream iss(num);
	if (!(iss >> int_num || iss.bad()))
	{
		throw std::invalid_argument("String was bad");
	}
	set_lower(int_num);
}

void RangeInt::set_upper(short const num)
{
	set_upper(gsl::narrow<int>(num));
}

void RangeInt::set_upper(long const num)
{
	set_upper(gsl::narrow<int>(num));
}

void RangeInt::set_upper(float const num)
{
	set_upper(gsl::narrow<int>(num));
}

void RangeInt::set_upper(double const num)
{
	set_upper(gsl::narrow<int>(num));
}

void RangeInt::set_upper(char* const num)
{
	auto int_num{ 0 };
	std::istringstream iss(num);
	if (!(iss >> int_num || iss.bad()))
	{
		throw std::invalid_argument("String was bad");
	}
	set_upper(int_num);
}

void RangeInt::set_upper(unsigned const num)
{
	set_upper(gsl::narrow<int>(num));
}

void RangeInt::set_upper(std::string const num)
{
	auto int_num{ 0 };
	std::istringstream iss(num);
	if (!(iss >> int_num || iss.bad()))
	{
		throw std::invalid_argument("String was bad");
	}
	set_upper(int_num);
}

void RangeInt::set_value(short const num)
{
	set_value(gsl::narrow<int>(num));
}

void RangeInt::set_value(long const num)
{
	set_value(gsl::narrow<int>(num));
}

void RangeInt::set_value(float const num)
{
	set_value(gsl::narrow<int>(num));
}

void RangeInt::set_value(double const num)
{
	set_value(gsl::narrow<int>(num));
}

void RangeInt::set_value(char* const num)
{
	auto int_num{ 0 };
	std::istringstream iss(num);
	if (!(iss >> int_num || iss.bad()))
	{
		throw std::invalid_argument("String was bad");
	}
	set_value(int_num);
}

void RangeInt::set_value(unsigned const num)
{
	set_value(gsl::narrow<int>(num));
}

void RangeInt::set_value(std::string const num)
{
	auto int_num{ 0 };
	std::istringstream iss(num);
	if (!(iss >> int_num) || iss.bad())
	{
		throw std::invalid_argument("String was bad");
	}
	set_value(int_num);
}

int RangeInt::get_value() const noexcept
{
	return value_;
}

RangeInt::RangeInt(int const min, int const max)
{
	if(min >= max)
	{
		throw std::out_of_range("dumb ass");
	}
	lower_bound_ = min;
	upper_bound_ = max;
}

int RangeInt::get_lower() const noexcept
{
	return lower_bound_;
}

int RangeInt::get_upper() const noexcept
{
	return upper_bound_;
}