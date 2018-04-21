# CST136SRS01
Mayday Mamate

Grading Name: Nathan TOut

Solution Name: CST136SRS01  
Project Name(s): Exceptional

---
notes:

---
issues:
- unhandled error if the input is a string with a decimal.  still goes through and does proper conversion though.
- I get messages about possible loss of data with the narrowing.

---
Describe the reason(s) for your default ctor technique in the README.md.  
- this was the format I saw on geeksforgeeks.org. 
- I set the lower and upper unbounds to the numeric limits min and max because
- I did not want to guess a random limit.

Describe the reason you made RangeInt a struct or class. (see the cppguidelines for details.)
- cppguidelines suggested that if there is anything private to use a class

---
Helps:
- https://www.geeksforgeeks.org/constructors-c/
- https://msdn.microsoft.com/en-us/library/hh279667.aspx
- http://en.cppreference.com/w/cpp/types/numeric_limits
- http://www.cplusplus.com/reference/exception/exception/what/
- http://www.cplusplus.com/reference/stdexcept/logic_error/

Purpose:

- Pratice using various C++ error handling mechanisms.
- Learn to use C++ exceptions.
- Understand the exception class hierarchy and how to extend it. 
- Learn about ctor options. 

Create an integer range class or struct named "RangeInt".  
Create a ctor that accepts: \[lower bound, upper bound).  
Create a default ctor that is unbound on both upper and lower values.  
