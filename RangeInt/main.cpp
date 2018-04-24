#include "stdafx.h"
#include <exception>
#include "RangeInt.h"
#include <iostream>

void testrangeteststring(int a,int b)
{
	std::cout << "Testing Constructor by Setting Values for RangeInt(int,int) with  " << a << " and " << b <<  std::endl;
}

void testrangeteststringcomplete(int a,int b)
{
	std::cout << " RangeInts values currently are " << a << " and " << b << std::endl;
	
}



int main()
{
	
	

	int a = 4, b = 9;
	

	testrangeteststring(a,b);
	
	RangeInt LR{a,b};
	
	testrangeteststringcomplete(a,b);

	a = 0, b = 8;
	try
	{
		testrangeteststring(a, b);
		RangeInt LR{a,b};
	}
	catch (std::exception& msg)
	{
		std::cout << msg.what();
		
	}	
	
	a = 6, b = 28;
	try
	{
		testrangeteststring(a, b);
		RangeInt LR{ a, b };

		try
		{
			
			testrangeteststring(a, b);
			LR.setValue(30);
		}
		catch (std::exception& msg)
		{
			std::cout << msg.what();
		}

		try
		{
			std::cout << "testing setValue with 16 \n";;
			LR.setValue(16);
		}
		catch (std::exception& msg)
		{
			std::cout << msg.what();
		}
		std::cout << "setValue with 16 test complete\n\n";
		
		try
		{
			std::cout << "testing setUpper with a value of 4 \n";;
			LR.setUpper(4);
		}
		catch (std::exception& msg)
		{
			std::cout << msg.what();
		}
		std::cout << "setUpper with a value of 4 test is complete \n\n";;

		try
		{
			std::cout << "testing setUpper with a value of 61 \n";;
			LR.setUpper(61);
		}
		catch (std::exception& msg)
		{
			std::cout << msg.what();
		}
		std::cout << "testing of setUpper with a value of 61 is complete \n\n";

		try
		{
			std::cout << "testing setLower with a value of 100 \n";
			LR.setLower(100);
		}
		catch (std::exception& msg)
		{
			std::cout << msg.what();
		}
		std::cout << "testing of setLower with a value of 100 is complete \n\n";
		
		try
		{
			std::cout << "testing setLower with a value of -2 \n";
			LR.setLower(-2);
		}
		catch (std::exception& msg)
		{
			std::cout << msg.what();
		}
		std::cout << "testing of setLower with a value of -2 is complete \n\n" << std::endl;

		try
		{
			std::cout << "testing setLower with a value of 0 \n";
			LR.setLower(0);
		}
		catch (std::exception& msg)
		{
			std::cout << msg.what();
		}
		std::cout << "testing of setLower with a value of 0 is complete \n\n" << std::endl;
	}
	catch (std::exception& msg)
	{
		std::cout << msg.what();
	}
	std::cout << "all tests are complete" << std::endl;
	


	
	return 0;
    
}

