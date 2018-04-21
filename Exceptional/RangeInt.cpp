#include "stdafx.h"
#include "RangeInt.h"
#include <sstream>
#include "gsl.h"


RangeInt::RangeInt(int const lower, int const upper)
{
	if (lower >= upper)
	{
		throw std::out_of_range("My apologies, you are currently out of the range. Please correct.");
	}
	lowerBound_ = lower;
	upperBound_ = upper; 
}

void RangeInt::setValue(int const value)
{
	if (value < lowerBound_ || value >= upperBound_)
	{
		throw std::out_of_range ("My apologies, you are currently out of the range. Please correct.");
	}
	value_ = value;
}



void RangeInt::setValue(double const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setValue(long const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setValue(unsigned const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setValue(char* value)
{
	std::istringstream convert{ value };
	int temporaryVariable;
	convert >> temporaryVariable;

	if ( ! (convert >> temporaryVariable) || convert.bad())
	{
		throw std::out_of_range("My apologies, you are currently out of the range. Please correct.");
	}
	setValue(temporaryVariable);
}

void RangeInt::setValue(std::string const value)
{
	std::istringstream convert{ value };
	int temporaryVariable;
	convert >> temporaryVariable;

	if (!(convert >> temporaryVariable) || convert.bad())
	{
		throw std::out_of_range("My apologies, you are currently out of the range. Please correct.");
	}
	setValue(temporaryVariable);
}

void RangeInt::setValue(float const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setValue(long long const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setLower(int const value)
{
	if (value < lowerBound_ || value >= upperBound_)
	{
		throw std::out_of_range("My apologies, you are currently out of the range. Please correct.");
	}
	value_ = value;
}

void RangeInt::setLower(double const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setLower(long const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setLower(unsigned const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setLower(char* value)
{
	std::istringstream convert{ value };
	int temporaryVariable;
	convert >> temporaryVariable;

	if (!(convert >> temporaryVariable) || convert.bad())
	{
		throw std::out_of_range("My apologies, you are currently out of the range. Please correct.");
	}
	setValue(temporaryVariable);
}

void RangeInt::setLower(std::string const value)
{
	std::istringstream convert{ value };
	int temporaryVariable;
	convert >> temporaryVariable;

	if (!(convert >> temporaryVariable) || convert.bad())
	{
		throw std::out_of_range("My apologies, you are currently out of the range. Please correct.");
	}
	setValue(temporaryVariable);
}

void RangeInt::setLower(float const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setLower(long long const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setUpper(int const value)
{
	if (value < lowerBound_ || value >= upperBound_)
	{
		throw std::out_of_range("My apologies, you are currently out of the range. Please correct.");
	}
	value_ = value;
}

void RangeInt::setUpper(double const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setUpper(long const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setUpper(unsigned const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setUpper(char* value)
{
	std::istringstream convert{ value };
	int temporaryVariable;
	convert >> temporaryVariable;

	if (!(convert >> temporaryVariable) || convert.bad())
	{
		throw std::out_of_range("My apologies, you are currently out of the range. Please correct.");
	}
	setValue(temporaryVariable);
}

void RangeInt::setUpper(std::string const value)
{
	std::istringstream convert{ value };
	int temporaryVariable;
	convert >> temporaryVariable;

	if (!(convert >> temporaryVariable) || convert.bad())
	{
		throw std::out_of_range("My apologies, you are currently out of the range. Please correct.");
	}
	setValue(temporaryVariable);
}

void RangeInt::setUpper(float const value)
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setUpper(long long const value)
{
	setValue(gsl::narrow<int>(value));
}
int RangeInt::getLower() const noexcept
{
	return value_;
}

int RangeInt::getUpper() const noexcept
{
	return value_;
}

int RangeInt::getValue() const noexcept
{
	return value_;
}