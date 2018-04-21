# CST136SRS01
Mayday Mamate

Grading Name: 

Solution Name: CST136SRS01  
Project Name(s): Exceptional

Possible Issue: I was unsure of the best strategy to show my RangeInt class cleanly without using std::cout, which may be considered excessive i/o.  

Misc. Notes:  

Reason for bound change strategy: The two strategies I was debating between were to move value_ and to throw an exception. I decided that, if somebody were to try and use this class for their own purposes & changed the bounds, they were likely wanting to change what they were checking. It's most likely that they wanted to change the bounds and *then* the value. If RangeInt threw an exception, it would force the user of the class to check the value every time they tried changing bounds, which would make the class cumbersome and overly frustrating to use.  

Reason for ctor strategy: This was the only strategy that I knew how to do with my current skill set.  

Reason for class over struct: Structs are typically used to hold plain ol' data publicly, and the spec describes how RangeInt should have various methods and, considering the getters and setters, implies that the data should be private.  

---

Purpose:

- Pratice using various C++ error handling mechanisms.
- Learn to use C++ exceptions.
- Understand the exception class hierarchy and how to extend it. 
- Learn about ctor options. 

-[x] Create an integer range class or struct named "RangeInt".  

-[x] Create a ctor that accepts: \[lower bound, upper bound).  
-[x] Create a default ctor is unbound on both upper and lower values.  

-[x] Create the default ctor by delegating, default parameters, or default generation.  

-[x] Create a const member for kUnboundLower and kUnboundUpper.  

-[x] Create lower bound and upper bound setters and getters. Handle narrowing conversions (float, double, long, unsigned, ...). Allow std::string and c-strings for setters and handle non-valid strings.  

-[x] Create setters for the value and throw an exception if the value exceeds the bounds. Ensure a strong exception guarantee.  

-[x] Create a getter for the value.  

-[x] Devise a strategy for dealing with changing bounds when the value is outside the bounds.  

-[x] Write test code in main the exercises your code. Be sure to use a try/catch block and std::exception::what() in your testing code.  

-[x] Don't forget to use noexcept and const when and where applicable.  

Describe the reason(s) for your default ctor technique in the README.md.  

Describe the reason you made RangeInt a struct or class. (see the cppguidelines for details.)
