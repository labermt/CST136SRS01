#pragma once
#include <exception>

//You can define your own exceptions by inheriting and overriding exception class functionality.


struct badlimits : std::exception
{
	/*what() is the public method provided by the exception class and it has been overriden by all the child class
	The noexcept operator performs a compile - time check that returns true if an expression is declared to not throw any exceptions.
	It can be used within a function template's noexcept specifier to declare that the function will throw exceptions for some types but not others. 
	This returns the cause of the exception
	*/
	const char* what() const noexcept
	{
		return " entered incorrectly!\n";
	};

};

struct badupper : std::exception
{
	const char* what() const noexcept
	{
		return "The upper limit is below the lower limit!\n";
	}
	
};

struct badlower : std::exception
{
	const char* what() const noexcept
	{
		return "The lower limit is above the upper limit!\n";
	};

};

struct badvalue : std::exception
{
	const char* what() const noexcept
	{
		return "The params entered are not valid types!\n";
	};

};




	class Exception
{
public:
	Exception();
	~Exception();
};

