#include "stdafx.h"
#include <limits>
#include <sstream>
#include <cmath>
#include "gsl.h"
#include "RangeInt.h"

// Ctors
RangeInt::RangeInt(const int lower, const int upper) :
lower_{ lower },
upper_{ upper },
value_{ lower }
{
	
}

// Lower
void RangeInt::setLower(const long double lower)
{
	if(lower > std::numeric_limits<int>::max())
	{
		std::stringstream stream;
		stream << "The number you entered is higher than the maximum size of a signed int. (";
		stream << lower << " > " << std::numeric_limits<int>::max() << ")";
		throw std::range_error(stream.str());
	}

	if(lower < std::numeric_limits<int>::min())
	{
		std::stringstream stream;
		stream << "The number you entered is less than the minimum size of a signed int. (";
		stream << lower << " < " << std::numeric_limits<int>::min() << ")";
		throw std::range_error(stream.str());
	}

	if(lower != floor(lower))
	{
		throw std::range_error("The number you entered has a floating point, so a narrowing conversion is impossible.");
	}

	if (lower >= upper_)
	{
		try
		{
			setUpper(lower + 1);
		}
		catch (std::range_error e) // Only possible error is for the lower bound to be less than the min size of an int
		{
			std::stringstream stream;
			stream << "The value for the lower bound you entered cannot be used because it will force the upper bound outside of the range of a signed int. (";
			stream << lower + 1 << " > " << std::numeric_limits<int>::max() << ")";
			throw std::range_error(stream.str());
		}
	}

	if(lower > value_) // Will describe strategy in presentation. To put it short, someone changing the bounds of the RangeInt likely doesn't want to have to check the value first, so no exception
	{
		value_ = lower;
	}

	lower_ = gsl::narrow<int>(lower);
}

void RangeInt::setLower(const std::string& lowerStr)
{
	std::stringstream stream;
	stream << lowerStr;
	long double lower = std::numeric_limits<double>::quiet_NaN();
	stream >> lower;
	if(lower * 0 != 0) // If a bad string is used, lower will stay nan, so lower * 0 will be nan rather than 0
	{
		throw std::logic_error("The string used must be an actual number.");
	}
	setLower(lower);
}

int RangeInt::getLower() const noexcept
{
	return lower_;
}


// Upper
void RangeInt::setUpper(const long double upper)
{
	if (upper > std::numeric_limits<int>::max())
	{
		std::stringstream stream;
		stream << "The number you entered is higher than the maximum size of a signed int. (";
		stream << upper << " > " << std::numeric_limits<int>::max() << ")";
		throw std::range_error(stream.str());
	}

	if (upper < std::numeric_limits<int>::min())
	{
		std::stringstream stream;
		stream << "The number you entered is less than the minimum size of a signed int. (";
		stream << upper << " < " << std::numeric_limits<int>::min() << ")";
		throw std::range_error(stream.str());
	}

	if (upper != floor(upper))
	{
		throw std::range_error("The number you entered has a floating point, so a narrowing conversion is impossible.");
	}

	if (upper <= lower_)
	{
		try
		{
			setLower(upper - 1);
		}
		catch (std::range_error e) // Only possible error is for the lower bound to be less than the min size of an int
		{
			std::stringstream stream;
			stream << "The value for the upper bound you entered cannot be used because it will force the lower bound outside of the range of a signed int. (";
			stream << upper - 1 << " < " << std::numeric_limits<int>::min() << ")";
			throw std::range_error(stream.str());
		}
	}

	if (upper <= value_) // Will describe strategy in presentation. To put it short, someone changing the bounds of the RangeInt likely doesn't want to have to check the value first, so no exception
	{
		value_ = upper - 1;
	}

	upper_ = gsl::narrow<int>(upper);
}

void RangeInt::setUpper(const std::string& upperStr)
{
	std::stringstream stream;
	stream << upperStr;
	long double upper = std::numeric_limits<double>::quiet_NaN();
	stream >> upper;
	if (upper * 0 != 0) // If a bad string is used, lower will stay nan, so lower * 0 will be nan rather than 0
	{
		throw std::logic_error("The string used must be an actual number.");
	}
	setUpper(upper);
}

int RangeInt::getUpper() const noexcept
{
	return upper_;
}


// Value
void RangeInt::setValue(const long double value)
{
	if (value != floor(value))
	{
		throw std::range_error("The number you entered has a floating point, so a narrowing conversion is impossible.");
	}

	checkValueInRange(value);

	value_ = gsl::narrow<int>(value);
}

void RangeInt::setValue(const std::string& valueStr)
{
	std::stringstream stream;
	stream << valueStr;
	long double value = std::numeric_limits<double>::quiet_NaN();
	stream >> value;
	if (value * 0 != 0) // If a bad string is used, lower will stay nan, so lower * 0 will be nan rather than 0
	{
		throw std::logic_error("The string used must be an actual number.");
	}
	setValue(value);
}

int RangeInt::getValue() const noexcept
{
	return value_;
}

void RangeInt::checkValueInRange(const long double value) const
{
	if(value >= upper_)
	{
		std::stringstream stream;
		stream << "The value is too high. It must be within the range of [Lower, Upper). (";
		stream << value << " >= " << upper_ << ")";
		throw std::range_error(stream.str());
	}
	if(value < lower_)
	{
		std::stringstream stream;
		stream << "The value is too low. It must be within the range of [Lower, Upper). (";
		stream << value << " < " << lower_ << ")";
		throw std::range_error(stream.str());
	}
}



// operator==
bool RangeInt::operator==(const RangeInt& rangeInt) const
{
	return lower_ == rangeInt.lower_ && upper_ == rangeInt.upper_ && value_ == rangeInt.value_;
}
