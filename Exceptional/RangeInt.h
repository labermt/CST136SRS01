#pragma once
#include <limits>
#include <string>

class RangeInt
{
private:
	static constexpr int kUnboundLower { std::numeric_limits<int> ::max() - 1};
	static constexpr int kUnboundUpper { std::numeric_limits<int> ::min()};

	int upperBound_{ kUnboundLower };
	int lowerBound_{ kUnboundUpper };
	int value_{ std::numeric_limits<int>::max() };

public:
	RangeInt () = default;
	RangeInt (int lower, int upper);
	
	void setValue ( int );
	void setValue ( double );
	void setValue( long );
	void setValue( unsigned );
	void setValue( char* );
	void setValue ( std::string );
	void setValue ( float );
	void setValue( long long );

	void setLower ( int );
	void setLower ( double );
	void setLower ( long );
	void setLower ( unsigned );
	void setLower ( char* );
	void setLower ( std::string );
	void setLower ( float );
	void setLower ( long long );

	void setUpper ( int );
	void setUpper ( double );
	void setUpper ( long );
	void setUpper ( unsigned );
	void setUpper ( char* );
	void setUpper ( std::string );
	void setUpper ( float );
	void setUpper ( long long );

	int getLower() const noexcept;
	int getUpper() const noexcept;
	int getValue() const noexcept;

};

