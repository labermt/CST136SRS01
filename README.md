# CST136SRS01
Mayday Mamate

Grading Name: Forrest Warner

Solution Name: CST136SRS01  
Project Name(s): Exceptional

Notes:

- Default ctor created with default parameters. Easiest way to setup a range of integers in my opinion. Since I have the range unbound 
  by default with a default value of 0, the user can easily narrow the bounds and set a new value for the class.

- The reason why I made RangeInt a class is because its members are not just POD (Plain Old Data) and requires public/private methods 
  to function properly.

 - As for my strategy to deal with changing bounds when value_ is outside bounds, my code throws and exception then swallows the exception
 and then sets a valid bound that Ensures value is in the bounds properly.

---

Purpose:

- Pratice using various C++ error handling mechanisms.
- Learn to use C++ exceptions.
- Understand the exception class hierarchy and how to extend it. 
- Learn about ctor options. 

[*]Create an integer range class or struct named "RangeInt".  

[*]Create a ctor that accepts: \[lower bound, upper bound).  

[*]Create a default ctor is unbound on both upper and lower values.  

[*]Create the default ctor by delegating, default parameters, or default generation.  

[*]Create a const member for kUnboundLower and kUnboundUpper.  

[*]Create lower bound and upper bound setters and getters. Handle narrowing conversions (float, double, long, unsigned, ...). Allow std::string and c-strings for setters and handle non-valid strings.  

[*]Create setters for the value and throw an exception if the value exceeds the bounds. Ensure a strong exception guarantee.  

[*]Create a getter for the value.  

[*]Devise a strategy for dealing with changing bounds when the value is outside the bounds.  

[*]Write test code in main that exercises your code. Be sure to use a try/catch block and std::exception::what() in your testing code.  

[*]Don't forget to use noexcept and const when and where applicable.  

[*]Describe the reason(s) for your default ctor technique in the README.md.  

[*]Describe the reason you made RangeInt a struct or class. (see the cppguidelines for details.)