#	Author: John Gibbons
#	Date: 2016.10.26


#Add needed Test.o
prog: main.o Test.o Test_LinkedListOfInts.o
	g++ -g -Wall -std=c++11 main.o LinkedListOfInts.o Test.o Test_LinkedListOfInts.o -o prog


main.o: main.cpp LinkedListOfInts.h Node.h Test_LinkedListOfInts.h
	g++ -g -Wall -std=c++11 -c main.cpp


#Add needed Test.o recipe and compiler command
Test_LinkedListOfInts.o: Test_LinkedListOfInts.h Test_LinkedListOfInts.cpp Test.h
	g++ -g -Wall -std=c++11 -c Test_LinkedListOfInts.cpp

Test.o: Test.h Test.cpp
	g++ -g -Wall -std=c++11 -c Test.cpp

#DON'T delete LinkedList.o!
clean:
	rm main.o *.*~ prog
