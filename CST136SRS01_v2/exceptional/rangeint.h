#pragma once
#include "stdafx.h"
#include <iostream>
using namespace std;



class RangeInt
{
private:
	int lower_;
	int upper_;
	int value_;

	static constexpr int kUnboundLower_{ numeric_limits<int>::min() };
	static constexpr int kUnboundUpper_{ numeric_limits<int>::max() };

public:
	//default constructor
	RangeInt()
	{
		lower_ = kUnboundLower_;
		upper_ = kUnboundUpper_;
		value_ = 0;
	}



public:
	void check_value(int);
	void check_string(string);
	// upper bound setters
	void set_upper(int);
	void set_upper(float);
	void set_upper(double);
	void set_upper(long);
	void set_upper(long double);
	void set_upper(unsigned);
	void set_upper(string);

	// lower bound setters
	void set_lower(int);
	void set_lower(float);
	void set_lower(double);
	void set_lower(long);
	void set_lower(unsigned);
	void set_lower(long double);
	void set_lower(string);


	// value setters
	void set_value(int);
	void set_value(float);
	void set_value(double);
	void set_value(long);
	void set_value(unsigned);
	void set_value(long double);
	void set_value(string);

	//getters
	int get_lower();
	int get_upper();
	int get_value();
};

