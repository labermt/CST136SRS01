# CST136SRS01
Mayday Mamate

Grading Name: Phantump

Solution Name: CST136SRS01  
Project Name(s): Exceptional

Errors: constexpr members are missing. The program can not handle conversions, and parameters must be passed as ints.

Notes: The program is set up more as a test of exception handling, as it requires no input from the user.
Instead, it will show an exception being thrown when a logical misstep is made (e.x. trying to set the lower bound above the upper bound)
follow by the same function call with the logic corrected, (setting the lower bound lower, or at least below the current value)
Whenever a RangeInt is made, I default the value to the lower bound for the sake of having the space definded into an int.
Because I used a ctor, I had to specifically ask for the default as well, however, I have default values set up, so when it is called, 
I pass it no parameters and the default value is 0.
I choose to use a Class, because the spec requested setters and getters, which implicectly implies to me that the values are to remain private,
and according to CPPguidelines, a class is better suited to that, where as a struct would be better if I wanted to change out numbers more freely.


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
