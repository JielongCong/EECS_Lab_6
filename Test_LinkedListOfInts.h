#ifndef TEST_LINKED_LIST_H
#define TEST_LINKED_LIST_H

#include <iostream>
#include <vector>
#include "LinkedListOfInts.h"
#include "Test.h"

using namespace std;

class Test_LinkedListOfInts : public Test
{
public:
	Test_LinkedListOfInts(int testSize);
	void runTest();

	void testEmpty();
	void testSize();
	void testSearch();
	void testAddBack();
	void testAddFront();
	void testRemoveBack();
	void testRemoveFront();

};

#endif
