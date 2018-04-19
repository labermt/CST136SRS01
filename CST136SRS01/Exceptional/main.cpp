// Exceptional.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <limits.h>
#include <gsl.h>



using namespace std;
using namespace gsl;


class RangeInt {

private:
	//vars
	int upperBound = 0;
	int lowerBound = 0;
	int value = 0;

	int setValue(int v) {




	}

public:

	//default const
	RangeInt() {

		//max -1 for upperbound exclusion requirement
		upperBound = numeric_limits<int>::max() - 1;
		lowerBound = numeric_limits<int>::min();

	}


	//upper lower bound const
	RangeInt(const int lb, const int ub) {

		//check for which arg will be upper and lower
		if (lb <= ub) {

			

			//upperbound - 1 for upper exclusion requirement
			upperBound = ub - 1;
			lowerBound = lb;

		}
		else {

			//upperbound - 1 for upper exclusion requirement
			upperBound = lb - 1;
			lowerBound = ub;

		}
		
	}

	
	//setters
	void setUpper(const int x) {

		upperBound = x;

	}

	void setUpper(const double x) {
		
		upperBound = narrow<int>(x);

	}

	void setUpper(const float x) {
	
		upperBound = narrow<int>(x);
	
	}

	void setUpper(const bool x) {

		upperBound = narrow<int>(x);

	}

	void setUpper(const char* x) {

		//check for good string
		if (atoi(x)) {
			//will stay as default/intialized value if bad
			upperBound = narrow<int>(atoi(x));
			
		}
	}

	void setUpper(const string x) {
		if (stoi(x)) {
			//will stay as default/intialized value if bad
			upperBound = narrow<int>(stoi(x));

		}	
	}

	//getters
	int getUpper() {

		return upperBound;

	}


};

int main()
{
	//vars 
	auto temp = 0;

	//****UPPER BOUND CHECKS MUST BE EXCLUSIVE OF UPPER BOUND INTEGER******
	//****USE TRY AND CATCH FOR STUFF IN MAIN

	RangeInt test; 

	test.setUpper(".jk@^5");


	//debugging
	cout << "get upper bound: " << test.getUpper();
	cin >> temp;
	

    return 0;
}

