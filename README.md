# CST136SRS01
Mayday Mamate

Grading Name: Thea Van Kessel

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

Create the default ctor by delegating, default parameters, or default member generation.  

Create a constexpr member for kUnboundLower and kUnboundUpper.  

Create lower bound and upper bound setters and getters. Handle narrowing conversions (float, double, long, unsigned, ...). Allow std::string and c-strings for setters and handle non-valid strings.  

Create a setter for the value and throw an exception if the value exceeds the bounds. Ensure a strong exception guarantee.  

Create a getter for the value.  

Devise a strategy for dealing with changing bounds when the value is outside the bounds.  

Write test code in main the exercises your code. Be sure to use a try/catch block and std::exception::what() or derived in your testing code.  

Don't forget to use noexcept and const when and where applicable.  

Describe the reason(s) for your default ctor technique in the README.md.  

Describe the reason you made RangeInt a struct or class. (see the cppguidelines for details.)


I chose to use a class because a struct deals with changing data members. In my class I am using private data members and according to the cpp guidelines, private data members means you should use a class. 
I am using a mac so I was unable to use gsl. For that reason, I have included code in a header file "gsl.h" to use the narrowing functionality. 
The default constructor makes use of default values because they are already created in kUnboundUpper and kUnboundLower and it makes sense to use the max and min for an int. 
