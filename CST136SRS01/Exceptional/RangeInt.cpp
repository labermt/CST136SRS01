#include "stdafx.h"
#include "RangeInt.h"
#include "stdafx.h"
#include <iostream>
#include <limits.h>
#include <gsl.h>
#include <string.h>
#include <string>

using namespace std;
using namespace gsl;

//private vars
int upperBound = 0;
int lowerBound = 0;
int value = 0;

//private functions

//unbound constexpr for default constr
constexpr int RangeInt::unboundUpper() {

	return numeric_limits<int>::max() - 1;
}

constexpr int RangeInt::unboundLower() {

	return numeric_limits<int>::min();
}

//public

//default constructor
RangeInt::RangeInt()
{
	upperBound = unboundUpper();
	lowerBound = unboundLower();
}

//constructor with bounds
RangeInt::RangeInt(const int lb, const int ub)
{
	//check for bad strings
	if ((!lb) || (!ub)) {

		

	}
	else {
		//check for which arg will be upper and lower
		if (lb <= ub) {

			upperBound = ub;
			lowerBound = lb;
		}
		else {
			upperBound = lb;
			lowerBound = ub;
		}
	}
	
}

//destructor
RangeInt::~RangeInt()
{
	//probably wont need
}

//setters
void RangeInt::setValue(int v) {

	//check for valid vale based on range before setting
	if ((v >= upperBound) || (v < lowerBound)) {

		throw logic_error("Value attempting to set is out of bounds.");
		if (v >= upperBound) {

			value = unboundUpper();
		}
		else if( v < lowerBound){

			value = unboundLower();
		}
	}
	else {
		value = v;
	}
}

void RangeInt::setValue(string v) {
	//this is for changing value in main.cpp catch
	//check for valid vale based on range before setting
	if ((stoi(v) >= upperBound) || (stoi(v) < lowerBound)) {

		throw logic_error("Value attempting to set is out of bounds.");
		if (stoi(v) >= upperBound) {

			value = unboundUpper();
		}
		else if (stoi(v) < lowerBound) {

			value = unboundLower();
		}
	}
	else {
		value = stoi(v);
	}
}

void RangeInt::setUpper(const int x) {
	upperBound = x;
}

void RangeInt::setUpper(const double x) {
	upperBound = narrow<int>(x) ;
}

void RangeInt::setUpper(const float x) {
	upperBound = narrow<int>(x);
}

void RangeInt::setUpper(const bool x) {
	upperBound = narrow<int>(x);
}

void RangeInt::setUpper(const char* x) {
	//check for good string
	if (atoi(x)) {
		//will stay as default/intialized value if bad
		upperBound = narrow<int>(atoi(x));
	}
	else if (!atoi(x)) {	
		badStringUpper();
	}
}

void RangeInt::setUpper(const string x) {
	if (stoi(x)) {
		upperBound = narrow<int>(stoi(x));
	}
}

void RangeInt::setLower(const int x) {
	lowerBound = x;
}

void RangeInt::setLower(const double x) {
	lowerBound = narrow<int>(x);
}

void RangeInt::setLower(const float x) {
	lowerBound = narrow<int>(x);
}

void RangeInt::setLower(const bool x) {
	lowerBound = narrow<int>(x);
}

void RangeInt::setLower(const char* x) {
	//check for good string
	if (atoi(x)) {
		//will stay as default/intialized value if bad
		lowerBound = narrow<int>(atoi(x));
	}
	else if (!atoi(x)) {
		badStringLower();
	}
}

void RangeInt::setLower(const string x) {
	if (stoi(x)) {
		lowerBound = narrow<int>(stoi(x));
	}
}

//getters
int RangeInt::getValue() {
	return value;
}

int RangeInt::getUpper(){
	return upperBound;
}

int RangeInt::getLower() {
	return lowerBound;
}

//bad string handling
void RangeInt::badStringUpper() {

	cout << "Bad string! Default value set for upper bound!" << endl;
	upperBound = numeric_limits<int>::max() - 1;

}

void RangeInt::badStringLower() {

	cout << "Bad string! Default value set for upper bound!" << endl;
	lowerBound = numeric_limits<int>::min();

}

