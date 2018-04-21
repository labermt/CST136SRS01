#include "stdafx.h"

#include <iostream>
#include <sstream>

#include "gsl.h"
#include "RangeInt.h"


RangeInt::RangeInt() //Default parameters
{}

void RangeInt::setLower(char* value)
{
	std::stringstream fromCstr(value);

	double toDouble;

	if (fromCstr >> toDouble)
	{
		setLower(toDouble);
	}
	else
		throw std::exception("cannot convert from 'char*' to 'double'");
}

void RangeInt::setLower(std::string value)
{
	std::stringstream fromStr(value);

	double toDouble;

	if (fromStr >> toDouble)
	{
		setLower(toDouble);
	}
	else
		throw std::exception("cannot convert from 'std::string' to 'double'");
}

void RangeInt::setLower(double lower)
{
	if (lower >= upperBound_)
	{
		throw std::logic_error("lowerBound_ cannot be >= upperBound_!");
	}
	else if (lower > value_)
	{
		throw std::logic_error("lowerBound_ cannot be > value_!");
	}

	lowerBound_ = lower;

	Ensures(lowerBound_ < upperBound_ && lowerBound_ <= value_);
}

void RangeInt::setUpper(char* value)
{
	std::stringstream fromCstr(value);

	double toDouble;

	if (fromCstr >> toDouble)
	{
		setUpper(toDouble);
	}
	else
		throw std::exception("cannot convert from 'char*' to 'double'");
}

void RangeInt::setUpper(std::string value)
{
	std::stringstream fromStr(value);

	double toDouble;

	if (fromStr >> toDouble)
	{
		setUpper(toDouble);
	}
	else
		throw std::exception("cannot convert from 'std::string' to 'double'");
}

void RangeInt::setUpper(double upper)
{
	if (upper <= lowerBound_)
	{
		throw std::logic_error("upperBound_ cannot be <= lowerBound_!");
	}
	else if (upper <= value_)
	{
		throw std::logic_error("upperBound_ cannot be <= value_!");
	}

	upperBound_ = upper;

	Ensures(upperBound_ > lowerBound_ && upperBound_ > value_);
}

void RangeInt::setValue(float value) noexcept
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setValue(double value) noexcept
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setValue(long double value) noexcept
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setValue(unsigned value) noexcept
{
	setValue(gsl::narrow<int>(value));
}

void RangeInt::setValue(char* value)
{
	std::stringstream fromCstr(value);

	int toInt;

	if (fromCstr >> toInt)
	{
		setValue(toInt);
	}
	else
		throw std::exception("cannot convert from 'char *' to 'int'");
}

void RangeInt::setValue(std::string value)
{
	std::stringstream fromStr(value);

	int toInt;

	if (fromStr >> toInt)
	{
		setValue(toInt);
	}
	else
		throw std::exception("cannot convert from 'std::string' to 'int'");
}

void RangeInt::setValue(int const value) noexcept
{
	Expects(gsl::narrow<int>(value));

	if (!inBounds(value)) //throws
	{
		newBounds(value);

		value_ = value;
	}
	else
		value_ = value;
}

double RangeInt::getLower() const noexcept
{
	return lowerBound_;
}

double RangeInt::getUpper() const noexcept
{
	return upperBound_;
}

int RangeInt::getValue() const noexcept
{
	return value_;
}

bool RangeInt::inBounds(int const value) const
{
	try {
		if (value < lowerBound_ || value >= upperBound_)
		{
			throw std::out_of_range("value is out of Bounds!");
		}
	} catch (std::out_of_range& e) {
		std::cout << "Error occured because: " << e.what() << "'\n";
	} catch (...) {
		return false;
	}
	return true;
}

void RangeInt::newBounds(int const value) noexcept //changes violated bound
{
	if (value < lowerBound_)
	{
		setLower(value);
	}
	else if (value >= upperBound_)
	{
		setUpper(value + 1);
	}

	Ensures(value >= lowerBound_ && value < upperBound_);
}
