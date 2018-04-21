#CST136SRS01

Mayday Mamate

Grading Name: Fennekin

Solution Name: CST136SRS01
Project Name(s): Exceptional

Notes: constructor needs to take default types convertable to int, else exception will be thrown.

---

Purpose:

- Pratice using various C++ error handling mechanisms.
- Learn to use C++ exceptions.
- Understand the exception class hierarchy and how to extend it.
- Learn about ctor options.
- Create an integer range class or struct named "RangeInt".

Create an integer range class or struct named "RangeInt".

Create a ctor that accepts: [lower bound, upper bound).
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
	Chose default parameters because of cpp guidelines C.48 recommending default parameters


Describe the reason you made RangeInt a struct or class. (see the cppguidelines for details.)
	Chose class because of C.2 & C.8 of cpp guidelines stating use class if any data member is non public