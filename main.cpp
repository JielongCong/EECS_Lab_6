/**
*	@author 
*	@date 
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#include <iostream>
#include "LinkedListOfInts.h"
#include "Test_LinkedListOfInts.h"

int main(int argc, char** argv)
{
	const int Test_size = 50;
	
	Test_LinkedListOfInts test(Test_size);
	test.runTest();

	
	return (0);

}

