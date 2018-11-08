#ifndef TEST_H
#define TEST_H

#include <iostream>
#include <vector>
#include <string>
#include <climits>
#include <algorithm> 
#include <math.h>
#include <random>


class Test
{
	public:
		Test(int testSize);
		virtual void runTest() = 0;
	
	protected:
		
		const int Test_size;
		int CurrTest;
		

		void printTestMessage(std::string testNum, std::string Message);
		void printExpectedError(std::string Message);
};

#endif
