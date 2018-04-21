
#include "stdafx.h"
#include "rangeint.h"
#include <gsl.h>
using namespace std;
using namespace gsl;


void RangeInt::check_value(int const num)
{
	if (lower_ >= upper_)
	{
		throw out_of_range("invalid range");
	}
	if (narrow<int>(num) > upper_)
	{
		throw out_of_range("Value range excedes upper limit.");
	}
	if (narrow<int>(num) < lower_)
	{
		throw out_of_range("Min range is less than lower bound.");
	}
}

void RangeInt::check_string(string str)
{
	int i{};
	while (str[i])
	{
		if (isalpha(str[i]))
		{
			throw out_of_range("invalid argument");
		}
		i++;
	}
}


/***************set upper***************/

void RangeInt::set_upper(int const up)
{
	check_value(up);
	upper_ = narrow<int>(up);
}
void RangeInt::set_upper(float const up)
{
	check_value(up);
	upper_ = narrow<int>(up);
}
void RangeInt::set_upper(double const up)
{
	check_value(up);
	upper_ = narrow<int>(up);
}
void RangeInt::set_upper(long const up)
{
	check_value(up);
	upper_ = narrow<int>(up);
}
void RangeInt::set_upper(unsigned const up)
{
	check_value(up);
	upper_ = narrow<int>(up);
}
void RangeInt::set_upper(long double const up)
{
	check_value(up);
	upper_ = narrow<int>(up);
}
void RangeInt::set_upper(string const up)
{
	check_string(up);
	check_value(stold(up));
	upper_ = narrow<int>(stold(up));

}


/***************set lower***************/

void RangeInt::set_lower(int const low)
{
	check_value(low);
	lower_ = narrow<int>(low);
}
void RangeInt::set_lower(float const low)
{
	check_value(low);
	lower_ = narrow<int>(low);
}
void RangeInt::set_lower(double const low)
{
	check_value(low);
	lower_ = narrow<int>(low);
}
void RangeInt::set_lower(long const low)
{
	check_value(low);
	lower_ = narrow<int>(low);
}
void RangeInt::set_lower(unsigned const low)
{
	check_value(low);
	lower_ = narrow<int>(low);
}
void RangeInt::set_lower(long double const low)
{
	check_value(low);
	lower_ = narrow<int>(low);
}
void RangeInt::set_lower(string const low)
{
	check_string(low);
	check_value(stold(low));
	lower_ = narrow<int>(stold(low));
}


/***************set value***************/

void RangeInt::set_value(int const val)
{
	check_value(val);
	value_ = narrow<int>(val);
}
void RangeInt::set_value(float const val)
{
	check_value(val);
	value_ = narrow<int>(val);
}
void RangeInt::set_value(double const val)
{
	check_value(val);
	value_ = narrow<int>(val);
}
void RangeInt::set_value(long const val)
{
	value_ = narrow<int>(val);
}
void RangeInt::set_value(unsigned const val)
{
	check_value(val);
	value_ = narrow<int>(val);
}
void RangeInt::set_value(long double const val)
{
	check_value(val);
	lower_ = narrow<int>(val);
}

void RangeInt::set_value(string const val)
{
	check_string(val);
	check_value(stold(val));
	lower_ = narrow<int>(stold(val));
}


/***************get value***************/

int RangeInt::get_lower()
{
	return lower_;
}
int RangeInt::get_upper()
{
	return upper_;
}
int RangeInt::get_value()
{
	return value_;
}

