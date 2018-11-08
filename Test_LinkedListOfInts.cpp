#include "Test_LinkedListOfInts.h"

using namespace std;


void Test_LinkedListOfInts::runTest()
{
	std::cerr << "\n\n====================================================================\n";
	std::cerr << "   			 RUNNING ALL TESTS   			  \n";
	std::cerr << "=====================================================================\n\n";

	testAddBack();
	testAddFront();	
	testRemoveBack();
	testRemoveFront();
	testEmpty();
	testSize();
	testSearch();
	
	std::cerr << "All tests finished." << std::endl;
}


Test_LinkedListOfInts::Test_LinkedListOfInts(int testSize) : Test(testSize)
{
}



void Test_LinkedListOfInts::testAddBack()
{
	LinkedListOfInts list, list2;
	string testNum = "1";
	string Message;
	
	bool check1 = false;
	bool check2 = false;

	list.addBack(0);
	if(list.size() == 1 && list.isEmpty() == false)
	{
		check1 = true;
	}

	for(int i = 0; i < Test_size; i++)
	{
		list2.addBack(i);
	}
	if(list2.size() == Test_size && list2.isEmpty() == false)
	{
		check2 = true;
	}

	if(check1 && check2)
	{
		Message = "addBack Method test: PASSED.";
		printTestMessage(testNum, Message);	
	}

	if(check1 == false)
	{
		Message = "addBack method add one element test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "addBack or size or isEmpty method have problem. \n(warning, since the add method didn't correct you will have lots of error in following test. Please fix the add method before other test.)";
		printExpectedError(Message);	
	}
	if(check2 == false)
	{
		Message = "addBack method stress test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "addBack or size or isEmpty method have problem. \n(warning, since the add method didn't correct you will have lots of error in following test. Please fix the add method before other test.)";
		printExpectedError(Message);	
	}

	
}


void Test_LinkedListOfInts::testAddFront()
{
	LinkedListOfInts list, list2;
	string testNum = "2";
	string Message;
	
	bool check1 = false;
	bool check2 = false;

	list.addFront(0);
	if(list.size() == 1 && list.isEmpty() == false)
	{
		check1 = true;
	}

	for(int i = 0; i < Test_size; i++)
	{
		list2.addFront(i);
	}
	if(list2.size() == Test_size && list2.isEmpty() == false)
	{
		check2 = true;
	}

	if(check1 && check2)
	{
		Message = "addFront Method test: PASSED.";
		printTestMessage(testNum, Message);	
	}

	if(check1 == false)
	{
		Message = "addFront method add one element test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "addFront or size or isEmpty method have problem. \n(warning, since the add method didn't correct you will have lots of error in following test. Please fix the add method before other test.)";
		printExpectedError(Message);	
	}
	if(check2 == false)
	{
		Message = "addFront method stress test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "addFront or size or isEmpty method have problem. \n(warning, since the add method didn't correct you will have lots of error in following test. Please fix the add method before other test.)";
		printExpectedError(Message);	
	}

	
}


void Test_LinkedListOfInts::testRemoveBack()
{
	LinkedListOfInts list, list2;
	string testNum = "3";
	string Message;
	
	bool check1 = false;
	bool check2 = false;
	bool check3 = false;
	bool check4 = false;

	if(list.removeBack() == false)
	{
		check1 = true;
	}

	list.addBack(0);
	list.removeBack();
	if(list.size() == 0 && list.isEmpty() == true)
	{
		check2 = true;
	}

	for(int i = 0; i < Test_size; i++)
	{
		list2.addBack(i);
	}
	list2.removeBack();
	if(list2.size() == (Test_size - 1))
	{
		check3 = true;
	}
	for(int i = 1; i < Test_size; i++)
	{
		list2.removeBack();
	}
	if(list.size() == 0 && list.isEmpty() == true)
	{
		check4 = true;
	}	

	if(check1 && check2 && check3 && check4)
	{
		Message = "removeBack Method test: PASSED.";
		printTestMessage(testNum, Message);	
	}

	if(check1 == false)
	{
		Message = "call removeBack method for a empty list: ERROR.";
		printTestMessage(testNum, Message);
		Message = "removeBack or size or isEmpty method have problem.";
		printExpectedError(Message);		
	}
	if(check2 == false)
	{
		Message = "call removeBack method once after add one element test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "removeBack or addBack method have problem.";
		printExpectedError(Message);	
	}
	if(check3 == false)
	{
		Message = "call removeBack method once after stress test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "removeBack or addback method have problem.";
		printExpectedError(Message);		
	}
	if(check4 == false)
	{
		Message = "call removeBack method many times after stress test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "removeBack or addback method have problem.";
		printExpectedError(Message);		
	}

	
}

void Test_LinkedListOfInts::testRemoveFront()
{
	LinkedListOfInts list, list2;
	string testNum = "4";
	string Message;
	
	bool check1 = false;
	bool check2 = false;
	bool check3 = false;
	bool check4 = false;

	if(list.removeFront() == false)
	{
		check1 = true;
	}

	list.addBack(0);
	list.removeFront();
	if(list.size() == 0 && list.isEmpty() == true)
	{
		check2 = true;
	}

	for(int i = 0; i < Test_size; i++)
	{
		list2.addBack(i);
	}
	list2.removeFront();
	if(list2.size() == (Test_size - 1))
	{
		check3 = true;
	}
	for(int i = 1; i < Test_size; i++)
	{
		list2.removeFront();
	}
	if(list.size() == 0 && list.isEmpty() == true)
	{
		check4 = true;
	}	

	if(check1 && check2 && check3 && check4)
	{
		Message = "RemoveFront Method test: PASSED.";
		printTestMessage(testNum, Message);	
	}

	if(check1 == false)
	{
		Message = "call RemoveFront method for a empty list: ERROR.";
		printTestMessage(testNum, Message);
		Message = "RemoveFront or size or isEmpty method have problem.";
		printExpectedError(Message);		
	}
	if(check2 == false)
	{
		Message = "call RemoveFront method once after add one element test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "RemoveFront or addBack method have problem.";
		printExpectedError(Message);	
	}
	if(check3 == false)
	{
		Message = "call RemoveFront method once after stress test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "RemoveFront or addback method have problem.";
		printExpectedError(Message);		
	}
	if(check4 == false)
	{
		Message = "call RemoveFront method many times after stress test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "RemoveFront or addback method have problem.";
		printExpectedError(Message);		
	}

	
}


void Test_LinkedListOfInts::testEmpty()
{
	LinkedListOfInts list;
	LinkedListOfInts list2;
	LinkedListOfInts list3;
	string testNum = "5";
	string Message;
	bool check1 = false;
	bool check2 = false;
	bool check3 = false;
	
	if(list.isEmpty() == true)
	{
		list.addFront(1);	
		if(list.isEmpty() == false)
		{
			check1 = true;
		}

		list2.addBack(1);

		if(list2.isEmpty() == false)
		{
			check2 = true;
		}

		for(int i = 0; i < Test_size; i++)
		{
			list3.addFront(i);
		}
		
		if(list2.isEmpty() == false)
		{
			check3 = true;
		}
	}
	else
	{
		Message = "isEmpty Method test for empty list: ERROR.";
		printTestMessage(testNum, Message);
		Message = "isEmpty method have problem.";
		printExpectedError(Message);
	}

	if(check1 && check2)
	{
		Message = "isEmpty Method test: PASSED.";
		printTestMessage(testNum, Message);
	}
	if(check1 == false)
	{
		Message = "isEmpty Method test for non-empty list: ERROR.";
		printTestMessage(testNum, Message);
		Message = "add Front or isEmpty method have problem.";
		printExpectedError(Message);
	}
	if(check2 == false)
	{
		Message = "isEmpty Method test for non-empty list: ERROR.";
		printTestMessage(testNum, Message);
		Message = "add back or isEmpty method have problem.";
		printExpectedError(Message);
	}
	if(check3 == false)
	{
		Message = "isEmpty Method test for stress test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "add back or add front or isEmpty method have problem.";
		printExpectedError(Message);
	}

}


void Test_LinkedListOfInts::testSize()
{
	LinkedListOfInts list;
	LinkedListOfInts list2;
	LinkedListOfInts list3;
	LinkedListOfInts list4;
	string testNum = "6";
	string Message;
	bool check1 = false;
	bool check2 = false;
	bool check3 = false;
	bool check4 = false;
	bool check5 = false;
	bool check6 = false;

	if(list.size() == 0)
	{
		check1 = true;
	}	

	list.addFront(0);
	if(list.size() == 1)
	{
		check2 = true;
	}
			
	list2.addBack(1);
	if(list2.size() == 1)
	{
		check3 = true;
	}
				
	for(int i = 0; i < Test_size; i++)
	{
		list3.addFront(i);
	}
	if(list3.size() == Test_size)
	{
		check4 = true;
	}

	list3.removeFront();
	if(list3.size() == (Test_size - 1))
	{
		check5 = true;
	}

	for(int i = 0; i < Test_size; i++)
	{
		list4.addFront(i);
	}
	list4.removeBack();
	if(list4.size() == (Test_size - 1))
	{
		check6 = true;
	}


	if(check1 == false)
	{	
		Message = "size Method test for empty list: ERROR.";
		printTestMessage(testNum, Message);
		Message = "size method have problem.";
		printExpectedError(Message);
	}
	
	if(check2 == false)
	{
		Message = "size Method test for 1 value add front of the list: ERROR.";
		printTestMessage(testNum, Message);
		Message = "add front or size method have problem.";
		printExpectedError(Message);
	}
	if(check3 == false)
	{	
		Message = "size Method test for 1 value add back of the list: ERROR.";
		printTestMessage(testNum, Message);
		Message = "add back or size method have problem.";
		printExpectedError(Message);	
	}

	if(check4 == false)
	{
		Message = "size Method test for stress test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "size method of border have problem.";
		printExpectedError(Message);
	}
	if(check5 == false)
	{
		Message = "size Method test for after remove test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "remove Front or size method have problem.";
		printExpectedError(Message);
	}
	if(check6 == false)
	{
		Message = "size Method test for after remove test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "remove Back or size method have problem.";
		printExpectedError(Message);
	}

	if(check1 && check2 && check3 && check4 && check5 && check6)
	{
		Message = "size Method test: PASSED.";
		printTestMessage(testNum, Message);
	}
}


void Test_LinkedListOfInts::testSearch()
{
	LinkedListOfInts list, list2;
	string testNum = "7";
	string Message;
	bool check1 = false;
	bool check2 = false;
	bool check3 = false;
	bool check4 = false;
	bool check5 = false;
	bool check6 = false;
	bool check7 = false;
	bool check8 = false;
	bool check9 = false;
	bool check10 = false;
	bool check11 = false;	

	if(list.search(1) == false)
	{
		check1 = true;
	}
	
	list.addFront(0);
	if(list.search(0) == true)
	{
		check2 = true;
	}

	list2.addBack(0);
	if(list2.search(0) == true)
	{
		check3 = true;
	}

	for(int i = 1; i < Test_size; i++)
	{
		list.addFront(i);
	}
	if(list.search(10) == true )
	{
		check4 = true;
	}
	if(list.search(100) == false)
	{
		check5 = true;
	}

	for(int i = 1; i < Test_size; i++)
	{
		list2.addBack(i);
	}
	if(list2.search(10) == true)
	{
		check6 = true;
	}
	if(list2.search(100) == false)
	{
		check7 = true;
	}

	list2.removeBack();
	if(list2.search(Test_size - 1) == false)
	{
		check8 = true;	
	}
	if(list2.search(100) == false)
	{
		check9 = true;
	}

	list.removeFront();
	if(list.search(Test_size - 1) == false)
	{
		check10 = true;	
	}
	if(list.search(100) == false)
	{
		check11 = true;
	}

	



	if(check1 && check2 && check3 && check4 && check5 && check6 && check7 && check8 && check9 && check10 && check11)
	{
		Message = "search Method test: PASSED.";
		printTestMessage(testNum, Message);
	}
	if(check1 == false)
	{
		Message = "seach Method test for empty list: ERROR.";
		printTestMessage(testNum, Message);
		Message = "search method have problem.";
		printExpectedError(Message);
	}
	if(check2 == false)
	{
		Message = "seach Method test for add 1 value at front: ERROR.";
		printTestMessage(testNum, Message);
		Message = "add front or search method have problem.";
		printExpectedError(Message);
	}
	if(check3 == false)
	{
		Message = "seach Method test for add 1 value at back: ERROR.";
		printTestMessage(testNum, Message);
		Message = "add back or search method have problem.";
		printExpectedError(Message);
	}	
	if(check4 == false || check5 == false)
	{
		Message = "seach Method test for stress test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "add front or search method have problem.";
		printExpectedError(Message);
	}			
	if(check6 == false || check7 == false)
	{
		Message = "seach Method test for stress test: ERROR.";
		printTestMessage(testNum, Message);
		Message = "add back or search method have problem.";
		printExpectedError(Message);
	}
	if(check8 == false || check9 == false)
	{
		Message = "seach Method test for after remove from back: ERROR.";
		printTestMessage(testNum, Message);
		Message = "remove back or search method have problem.";
		printExpectedError(Message);
	}	
	if(check10 == false || check11 == false)
	{
		Message = "seach Method test for after remove from front: ERROR.";
		printTestMessage(testNum, Message);
		Message = "remove front or search method have problem.";
		printExpectedError(Message);
	}		

}


