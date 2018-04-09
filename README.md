# CST136SRS01
Mayday Mamate

Grading Name: 

Solution Name: CST136SRS01
Project Name(s): Exceptional

---

Purpose:

- Pratice using the various C++ error handling mechanisms
- Learn to use C++ exceptions
- Learn ctor options

Create an integer range class or struct named "IntRange".

Create a ctor that accepts: \[lower bound, upper bound).  
Create a default ctor is unbound on both upper and lower values.  

Create the default ctor by delgating, default parameters, or default generation. 

Create a constexpr member for kUnboundLower and kUnboundUpper. 

Create lower bound and upper bound setters and getters. Handle narrowing conversions (float, double, long, unsigned, ...). Allow std::string and c-strings for setters and handle non-valid strings. 

Create setters for the value and throw an exception if the value exceeds the bounds. Ensure a strong exception guarantee. 

Create a getter for the value. 

Devise a strategy for dealing with changing bounds when the value is outside the bounds. 

Don't forget to use noexcept and const when and where applicable. 

Describe the reason(s) for your default ctor technique.  

Describe the reason IntRange is a struct/class. (see the cppguidelines)
