all: test

test: test.o LL1.o
	g++ -Wall -o test test.o LL1.o 

test.o: test.cpp LL1.h 
	g++ -Wall -o test.o -c test.cpp 

LL1.o: LL1.cpp LL1.h
	g++ -Wall -o LL1.o -c LL1.cpp

clean:
	rm -f test *.o
