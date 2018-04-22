#pragma once
#include <iostream>

// Learned about this method to add custom error output messages from  http://www.cplusplus.com/reference/exception/exception/what/

class ErrorHandler
{
public:
	ErrorHandler();

	struct outOfBounds : std::exception {
		const char* what() const noexcept { return "Number is out of bounds!\n"; }
	};

	struct notValidInt : std::exception {
		const char* what() const noexcept { return "Not a valid integer!\n"; }
	};

};

