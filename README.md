# CST136SRS01
Mayday Mamate

Name: Andrew Deraita

Grading Name: Volbeat

Solution Name: CST136SRS01  
Project Name(s): Exceptional

---

 The `Rangeint()` constructor initializes members using default parameters as suggested in [section C.48 of the C++ Core Guidelines](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c48-prefer-in-class-initializers-to-member-initializers-in-constructors-for-constant-initializers).

 The `RangeInt` class is a class and not a struct, as it has private data members as per [section C.8 of the C++ Core Guidelines](http://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#c8-use-class-rather-than-struct-if-any-member-is-non-public) 
 
 
 ## Notes
 
 ---
 
 I worked together with Mike, An, Sasha, Thea and Colin on this project.

The constructor `RangeInt(int,int)` requires parameters of fundamental type convertable to `int` to be used. An extension of the class `RangeInt` could be to add the ability to interpert different data types as parameters for the constructor.

Likewise, `get_value(double)` throws an exception if there is no exact translation between `double` and `int`, whereas it may be more useful to round to the nearest `int` instead of throwing.

---

## Purpose:

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
