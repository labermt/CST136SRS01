#include "stdafx.h"
#include "RangeInt.h"
#include <algorithm>
#include <sstream>
#include <gsl.h>





RangeInt::RangeInt(int const min, int const max)
{
	if (min >= max)
	{
		throw std::out_of_range("Lower Bound was greater than upper bound");
	}
	lower_bound_ = min;
	upper_bound_ = max - 1;
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

void RangeInt::set_value(int const num)
{

	set_value(gsl::narrow<int>(num));

}

void RangeInt::set_value(double const num)
{
	set_value(gsl::narrow<int>(num));
}

void RangeInt::set_value(long const num)
{
	set_value(gsl::narrow<int>(num));
}

void RangeInt::set_value(unsigned const num)
{
	set_value(gsl::narrow<int>(num));
}

void RangeInt::set_value(string const num)
{
	auto int_num{ 0 };
	std::istringstream iss(num);
	if (!(iss >> int_num) || iss.bad())
	{
		throw std::invalid_argument("String was bad");
	}
	set_value(int_num);
}


void RangeInt::set_value(float const num)
{
	set_value(gsl::narrow<int>(num));
}

void RangeInt::set_value(char const num)
{
	istringstream iss(value_);

	int temp;

	iss >> temp;

	set_value(temp); 
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

void RangeInt::set_value(short const num)
{
	set_value(gsl::narrow<int>(num));
}



void RangeInt::set_lower(int const num)
{
	if (num > value_ || num >= upper_bound_)
	{
		throw std::out_of_range("Tried to set lower bound out of range");
	}
	lower_bound_ = num;
}

void RangeInt::set_lower(double const num)
{
	set_lower(gsl::narrow<int>(num));
}

void RangeInt::set_lower(long const num)
{
	set_lower(gsl::narrow<int>(num));
}

void RangeInt::set_lower(unsigned const num)
{
	set_lower(gsl::narrow<int>(num));
}

void RangeInt::set_lower(string const num)
{
	istringstream iss(value_);

	int temp;

	iss >> temp;

	set_value(temp); 
}


void RangeInt::set_lower(float const num)
{
	set_lower(gsl::narrow<int>(num));
}

void RangeInt::set_lower(char const num)
{
	istringstream iss(value_);

	int temp;

	iss >> temp;

	set_value(temp); 
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

void RangeInt::set_upper(int const num)
{
	set_upper(gsl::narrow<int>(num));
}

void RangeInt::set_upper(double const num)
{
	set_upper(gsl::narrow<int>(num));
}

void RangeInt::set_upper(long const num)
{
	set_upper(gsl::narrow<int>(num));
}

void RangeInt::set_upper(unsigned const num)
{
	set_upper(gsl::narrow<int>(num));
}

void RangeInt::set_upper(string const num)
{
	istringstream iss(value_);

	int temp;

	iss >> temp;

	set_value(temp); 
}


void RangeInt::set_upper(float const num)
{
	set_upper(gsl::narrow<int>(num));
}

void RangeInt::set_upper(char const num)
{
	istringstream iss(value_);

	int temp;

	iss >> temp;

	set_value(temp); 
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

