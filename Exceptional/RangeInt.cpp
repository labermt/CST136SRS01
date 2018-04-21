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
		throw std::out_of_range("Lower bound parameter is not valid");
	}
}

void RangeInt::setValue(std::string const num)
{
	int tempInt;
	std::istringstream iss(num);
	if (!(iss >> tempInt || iss.bad()))
	{
		throw std::out_of_range("Lower bound parameter is not valid");
	}

}

void RangeInt::setLower(int const lowerNum)
{
	if (lowerNum < lowerBound_ || lowerNum >= upperBound_)
	{
		throw std::out_of_range("out of range!");
	}
	value_ = lowerNum;

}

void RangeInt::setLower(short const num)
{

}

void RangeInt::setLower(unsigned const num)
{
}

void RangeInt::setLower(double const num)
{
}

void RangeInt::setLower(long const num)
{
	
}

void RangeInt::setLower(char* const num)
{

}

void RangeInt::setLower(std::string const num)
{

}

void RangeInt::setUpper(int const num)
{
}

void RangeInt::setUpper(short const num)
{
}

void RangeInt::setUpper(unsigned const num)
{
}

void RangeInt::setUpper(double const num)
{
}

void RangeInt::setUpper(char* const num)
{

}

void RangeInt::setUpper(std::string const num)
{

}


int RangeInt::getValue() const
{
	gsl::narrow<int>(value_);
}

int RangeInt::getUpper() const
{

}

int RangeInt::getLower() const
{
}
