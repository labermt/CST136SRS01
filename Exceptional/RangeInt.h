#ifndef RANGE_INT_H
#define RANGE_INT_H

#include <string>
#include <limits>

class RangeInt
{
private: 
	static_assert(std::numeric_limits<double>::has_infinity, "double does not have infinity");

private: //types that are int
	static_assert(std::numeric_limits<char>::is_integer, "char is not int");
	static_assert(std::numeric_limits<short>::is_integer, "short is not int");
	static_assert(std::numeric_limits<unsigned short>::is_integer, "unsigned short is not int");
	static_assert(std::numeric_limits<size_t>::is_integer, "size_t is not int");
	static_assert(std::numeric_limits<long>::is_integer, "long is not int");
	static_assert(std::numeric_limits<unsigned long>::is_integer, "unsigend long is not int");
	static_assert(std::numeric_limits<long long>::is_integer, "long long is not int");
	static_assert(std::numeric_limits<unsigned long long>::is_integer, "unsigend long long is not int");

private:
	int value_{0};
	double lowerBound_{ kUnboundLower_ };
	double upperBound_{ kUnboundUpper_ };

private:
	static constexpr  auto const kUnboundLower_{ -std::numeric_limits<double>::infinity() };
	static  constexpr auto const kUnboundUpper_{ std::numeric_limits<double>::infinity() };

public:
	RangeInt();

public:
	void setLower(char*); //might throw
	void setLower(std::string); //might throw
	void setLower(double const lower); //might throw

	void setUpper(char*); //might throw
	void setUpper(std::string); //might throw
	void setUpper(double const upper); //might throw

	void setValue(float) noexcept;
	void setValue(double) noexcept;
	void setValue(long double) noexcept;
	void setValue(unsigned) noexcept;
	void setValue(char*); //might throw
	void setValue(std::string); //might throw
	void setValue(int const value) noexcept; //throw exception via inBounds(), if !inBounds()
	
	double getLower() const noexcept;
	double getUpper() const noexcept;
	int getValue() const noexcept;

	bool inBounds(int const value) const; //might throw

private:
	void newBounds(int const value) noexcept;
};

#endif