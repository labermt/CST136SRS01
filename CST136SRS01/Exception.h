#pragma once
#include <exception>

struct badlimits : std::exception
{
	const char* what() const noexcept { return "The limits were entered incorrectly\n"; }
};

struct badupper : std::exception
{
	const char* what() const noexcept { return "The upper limit was below the value\n"; }
};

struct badlower : std::exception
{
	const char* what() const noexcept { return "The lower limit was above the value\n"; }
};

struct badvalue : std::exception
{
	const char* what() const noexcept { return "The value was not properly between the limits\n"; }
};