# CST136SRS01
First stop on our journey: The Island of Errors

Hi An! :-)

Student Name: <Not your secret Class ID>

Solution Name: CST136SRS01
Project Name(s): Exceptional

---

Purpose:

- Pratice and review using the various C++ error handling mechanisms
- Learn to use C++ exceptions
- Learn ctor options

Create an integer range class/struct named IntRange

Create a default ctor that has no bounds
Create a ctor that accepts: \[lower bound, upper bound)

Create a default ctor by delgation, default parameters, or default generation. 

Create a constexpr member for kUnboundLower and kUnboundUpper. 

Create lower bound and upper bound setters and getters. Handle narrowing conversions (float, double, long, unsigned). 

Create setters for the value and throw an exception if the value exceeds the bounds. Ensure a strong exception guarantee. 

Create a getter for the value. 

Devise a strategy for dealing with changing bounds when the value is outside the bounds. 

Use noexcept and const when and where reasonable to do so. 

Describe the reasons for your choice of a default ctor being a delagator, default parameter or default generation. 
Describe the reason you chose to make IntRange a struct/class. (see cppguidelines)
