# CST136SRS01
Mayday Mamate

Grading Name:Purrloin 

Solution Name: CST136SRS01  
Project Name(s): Exceptional

---

Purpose:

- Pratice using various C++ error handling mechanisms.
- Learn to use C++ exceptions.
- Understand the exception class hierarchy and how to extend it. 
- Learn about ctor options. 

Create an integer range class or struct named "RangeInt".  

Create a ctor that accepts: \[lower bound, upper bound).  
Create a default ctor that is unbound on both upper and lower values.  
done. 
Create the default ctor by delegating, default parameters, or default member generation.  
done.
Create a constexpr member for kUnboundLower and kUnboundUpper.  

Create lower bound and upper bound setters and getters. Handle narrowing conversions (float, double, long, unsigned, ...). Allow std::string and c-strings for setters and handle non-valid strings.  

Create a setter for the value and throw an exception if the value exceeds the bounds. Ensure a strong exception guarantee.  
done. 
Create a getter for the value.  
done.
Devise a strategy for dealing with changing bounds when the value is outside the bounds.  

Write test code in main the exercises your code. Be sure to use a try/catch block and std::exception::what() or derived in your testing code.  

Don't forget to use noexcept and const when and where applicable.  

Describe the reason(s) for your default ctor technique in the README.md.  
	*Just created a default to set values if main calls to create an instance with no params. used <limits> numeric limits for upper
	and lower bownds to give the system some numbers in (might not be necessary but was attempting some defensive coding).
	I maybe should have followed the rule of 3 to prevent shallow copies but at least this seems to do work. When in doubt aside from overriding 
	the default constructor I set the value to min.
Describe the reason you made RangeInt a struct or class. (see the cppguidelines for details.)
	*Went with rangeInt class because description requested getters and setters, Im not sure if there is a way to do getters
and setters by just defining a the object as a struct. 