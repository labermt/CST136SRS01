//
// Created by Thea Van Kessel on 4/20/18.
//

#ifndef ERRORHANDLING_RANGEINT_H
#define ERRORHANDLING_RANGEINT_H

#include <iostream>
#include <limits>
#include <string>

using namespace std;

class RangeInt {
public:
    RangeInt() = default;
    //include the lower bound but do not include the upper bound
    //RangeInt(int const lower, int const upper) : lowerBound{lower}, upperBound{upper - 1}{};
    RangeInt(int const lower, int const upper);

    void setLower(int const lower);
    void setLower(unsigned const lower);
    void setLower(short const lower);
    void setLower(long const lower);
    void setLower(float const lower);
    void setLower(double const lower);
    void setLower(long long const lower);
    void setLower(char * lower);
    void setLower(string const lower);

    void setUpper(int const upper);
    void setUpper(unsigned const upper);
    void setUpper(short const upper);
    void setUpper(long const upper);
    void setUpper(float const upper);
    void setUpper(double const upper);
    void setUpper(long long const upper);
    void setUpper(char * upper);
    void setUpper(string const upper);

    void setValue(int const val);
    void setValue(unsigned const val);
    void setValue(short const val);
    void setValue(long const val);
    void setValue(float const val);
    void setValue(double const val);
    void setValue(long long const val);
    void setValue(char * value);
    void setValue(string value);

    //getters will not throw exceptions
    int getUpper()const noexcept;
    int getLower()const noexcept;
    int getValue()const noexcept;



private:
    static constexpr int kUnboundUpper{numeric_limits<int>::max() - 1};
    static constexpr int kUnboundLower{numeric_limits<int>::min()};
    int upperBound;
    int lowerBound;
    //set value to the maximum
    int value{numeric_limits<int>::max() - 1};
};


#endif //ERRORHANDLING_RANGEINT_H
