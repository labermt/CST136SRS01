#pragma once

#include <string>

using namespace std;

class RangeInt
{

private:
	//vars
	int upperBound;
	int lowerBound;
	int value;

	//private functions

	void badStringUpper();
	void badStringLower();
	
public:
	//default constructor
	RangeInt();

	//constructor with passed in bounds
	RangeInt(const int lb, const int ub);

	//destructor
	~RangeInt();

	//setters
	void setValue(int v);
	void setValue(string v);

	void setUpper(const int x);
	void setUpper(const double x);
	void setUpper(const float x);
	void setUpper(const bool x);
	void setUpper(const char * x);
	void setUpper(const string x);

	void setLower(const int x);
	void setLower(const double x);
	void setLower(const float x);
	void setLower(const bool x);
	void setLower(const char * x);
	void setLower(const string x);

	//getters
	int getValue();
	int getUpper();
	int getLower();

	constexpr int unboundUpper();
	constexpr int unboundLower();

};

