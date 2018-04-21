//
// Created by Thea Van Kessel on 4/20/18.
//

#include "rangeInt.h"
#include "gsl.h"

using namespace std;

RangeInt::RangeInt(int const lower, int const upper) {
    //setLower(lower);
    //setUpper(upper);
    lowerBound = lower;
    upperBound = upper;
}

void RangeInt::setLower(int const lower) {
    if(lower > value || value >= upperBound)
    {
        throw std::out_of_range("Out of range lower bound");
    }
    lowerBound = lower;
}

void RangeInt::setLower(unsigned const lower) {
    setLower(narrow<int>(lower));
}

void RangeInt::setLower(short const lower) {
    setLower(narrow<int>(lower));
}

void RangeInt::setLower(long const lower) {
    setLower(narrow<int>(lower));
}

void RangeInt::setLower(float const lower) {
    setLower(narrow<int>(lower));
}

void RangeInt::setLower(double const lower) {
    setLower(narrow<int>(lower));
}

void RangeInt::setLower(long long const lower) {
    setLower(narrow<int>(lower));
}

void RangeInt::setLower(char * const lower) {
    cout << "In the char * function";
    setLower(narrow<int>(*lower));
}

void RangeInt::setLower(string const lower) {

}

void RangeInt::setUpper(int const upper) {
    if(upper <= value || upper <= lowerBound) {
        throw std::out_of_range("Out of range upper");
    }
    upperBound = upper;
}

void RangeInt::setUpper(unsigned const upper) {
    setUpper(narrow<int>(upper));
}

void RangeInt::setUpper(short const upper) {
    setUpper(narrow<int>(upper));
}

void RangeInt::setUpper(long const upper) {
    setUpper(narrow<int>(upper));
}

void RangeInt::setUpper(float const upper) {
    setUpper(narrow<int>(upper));
}

void RangeInt::setUpper(double const upper) {
    setUpper(narrow<int>(upper));
}

void RangeInt::setUpper(long long const upper) {
    setUpper(narrow<int>(upper));
}

void RangeInt::setUpper(char * upper) {

}

void RangeInt::setUpper(string const upper) {

}

//Throw an exception if the value is not within the bounds
void RangeInt::setValue(int const val) {
    if(val < lowerBound || val >= upperBound) {
        throw out_of_range("Value is not within the bounds");
    }
    value = val;
}

void RangeInt::setValue(unsigned const val) {
    setValue(narrow<int>(val));
}

void RangeInt::setValue(short const val) {
    setValue(narrow<int>(val));
}

void RangeInt::setValue(long const val) {
    setValue(narrow<int>(val));
}

void RangeInt::setValue(float const val) {
    setValue(narrow<int>(val));
}

void RangeInt::setValue(double const val) {
    setValue(narrow<int>(val));
}

void RangeInt::setValue(long long const val) {
    setValue(narrow<int>(val));
}

void RangeInt::setValue(char * val) {

}

void RangeInt::setValue(string val) {

}

int RangeInt::getUpper()const noexcept {
    return upperBound;
}

int RangeInt::getLower()const noexcept {
    return lowerBound;
}

int RangeInt::getValue()const noexcept {
    return value;
}
