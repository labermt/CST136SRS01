#include <iostream>
#include <string>

#include "rangeInt.h"

int main() {
    RangeInt outOfBounds(1, 5);

    //Throws an exception because 10 is greater than upperBound of 3
    try {
        outOfBounds.setValue(10);
    }
    catch(const exception &e) {
        cout << e.what() << endl;
    }

    outOfBounds.setValue(2); //This is within the range. No exception.

    //Throws an exception because we are trying to set the lower bound greater than the value
    try {
        outOfBounds.setLower(3);
    }
    catch(const exception &e) {
        cout << e.what() << endl;
    }

    //Throws an exception because we are trying to set the upper bound to value which is not included in our range
    try {
        outOfBounds.setUpper(2);
    }
    catch(const exception &e) {
        cout << e.what() << endl;
    }

    return 0;
}