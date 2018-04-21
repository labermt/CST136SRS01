#include "stdafx.h"
#include "RangeInt.h"
#include "gsl.h"
#include <sstream>


void RangeInt::setValue(int const setNum)
{
	if (setNum < lowerBound_ || setNum >= upperBound_)
	{
		throw std::out_of_range("out of range!");
	}
	value_ = setNum;
}

void RangeInt::setValue(short const setNum)
{
	setValue(gsl::narrow<int>(setNum));
}

void RangeInt::setValue(float const setNum)
{
	setValue(gsl::narrow<int>(setNum));
}
void RangeInt::setValue(unsigned const setNum)
{
	setValue(gsl::narrow<int>(setNum));
}

void RangeInt::setValue(double const setNum)
{
	setValue(gsl::narrow<int>(setNum));

}

void RangeInt::setValue(long const setNum)
{
	setValue(gsl::narrow<int>(setNum));

}

void RangeInt::setValue(char* const setNum)
{
	int tempInt;
	std::istringstream iss(setNum);
	if (!(iss >> tempInt || iss.bad()))
	{
		throw std::out_of_range("Invalid Argument");
	}
}

void RangeInt::setValue(std::string const num)
{
	int tempInt;
	std::istringstream iss(num);
	if (!(iss >> tempInt || iss.bad()))
	{
		throw std::out_of_range("Invalid Argument");
	}
}

void RangeInt::setLower(int const lowerNum)
{
	if (lowerNum > value_ || lowerNum <= upperBound_)
	{
		throw std::out_of_range("out of range!");
	}
	value_ = lowerNum;

}

void RangeInt::setLower(short const lowerNum)
{
	setValue(gsl::narrow<int>(lowerNum));
}

void RangeInt::setLower(float const lowerNum)
{
	setValue(gsl::narrow<int>(lowerNum));
}

void RangeInt::setLower(unsigned const lowerNum)
{
	setValue(gsl::narrow<int>(lowerNum));
}

void RangeInt::setLower(double const lowerNum)
{
	setValue(gsl::narrow<int>(lowerNum));

}

void RangeInt::setLower(long const lowerNum)
{
	setValue(gsl::narrow<int>(lowerNum));

}

void RangeInt::setLower(char* const lowerNum)
{
	int tempInt;
	std::istringstream iss(lowerNum);
	if (!(iss >> tempInt || iss.bad()))
	{
		throw std::out_of_range("Invalid Argument");
	}
}

void RangeInt::setLower(std::string const lowerNum)
{
	int tempInt;
	std::istringstream iss(lowerNum);
	if (!(iss >> tempInt || iss.bad()))
	{
		throw std::out_of_range("Invalid Argument");
	}
}

void RangeInt::setUpper(int const upper)
{
	if (upper < value_ || upper <= lowerBound_)
	{
		throw std::out_of_range("Upper bound out of range!");
	}
	upperBound_ = upper; 
}

void RangeInt::setUpper(short const upper)
{
	setUpper(gsl::narrow<int>(upper));
}

void RangeInt::setUpper(float const upper)
{
	setUpper(gsl::narrow<int>(upper));
}

void RangeInt::setUpper(unsigned const upper)
{
	setUpper(gsl::narrow<int>(upper));
}

void RangeInt::setUpper(double const upper)
{
	setUpper(gsl::narrow<int>(upper));
}

void RangeInt::setUpper(long upper)
{
	setUpper(gsl::narrow<int>(upper));
}

void RangeInt::setUpper(char* const upper)
{
	int tempInt;
	std::istringstream iss(upper);
	if (!(iss >> tempInt || iss.bad()))
	{
		throw std::out_of_range("Invalid Argument");
	}
}

void RangeInt::setUpper(std::string const upper)
{
	int tempInt;
	std::istringstream iss(upper);
	if (!(iss >> tempInt || iss.bad()))
	{
		throw std::out_of_range("Invalid Argument");
	}
}

int RangeInt::getValue() const noexcept
{
	return value_; 
}

int RangeInt::getUpper() const noexcept
{
	return value_; 
}

int RangeInt::getLower() const noexcept
{
	return value_; 
}

RangeInt::RangeInt(int const min, int const max)
{
	if (max <= min)
	{
		throw std::out_of_range("Out of range!"); 
	}
	lowerBound_ = min; 
	upperBound_ = max; 
}

