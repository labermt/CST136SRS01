#include "stdafx.h"
#include "RangeInt.h"

int main()
{
	RangeInt something{ 3, 26 };

	something.setValue(15);

	something.setValue(30); //needs to fail, then revert

    return 0;
}