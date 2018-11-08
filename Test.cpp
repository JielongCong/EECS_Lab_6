#include "Test.h"



Test::Test(int testSize) : Test_size(testSize), CurrTest(0)
{
}

void Test::printTestMessage(std::string testNum, std::string Message)
{
	std::cerr << "Test" << testNum << ": " << Message << std::endl;
}


void Test::printExpectedError(std::string Message)
{
	std::cerr << "Expected Error: " << Message << std::endl;
}
