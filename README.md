# CST136SRS01
Mayday Mamate

Grading Name: Jared Muralt

Solution Name: CST136SRS01  
Project Name(s): Exceptional

Reason for using a delegating default ctor:
The delegating ctor allows me to use another constructor's definition and
member initialization list instead of repeating the same code in another
ctor. It is also easy to read and looks clean. In short, it reduces code
duplication.

Reason for using a class instead of a struct:
The C++ Guidelines say "Use class rather than struct if any member is non-public".
I assumed that our member variables would be private because it is safer, cleaner,
and the SRS said to use getters and setters for the members. If any member variables
were public, they would not need getters or setters.


Issues:
I don't understand what you meant (or what you were wanting to accomplish) by using constexpr bounds. 
How are you supposed to have setters for constant member variables? Doesn't make sense to me. I feel
like I'm seriously misunderstanding the specifications.

I tried for hours to figure out what you wanted regarding "Handle narrowing conversions" but got nowhere.
I would cast values to convert them to integers but I don't think that's what you are looking for.
Therfore, the program only works with intergers (no strings, doubles, cstrings, etc). I tried overloading
setters to work with otehr data types but the narrow function kept crashing the program and I couldn't
figure it out.

Well, I tried my best. :)

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
