CC = g++
FLAGS = -Wall

all: genericfunc testStack testLinkedList vectorI vectorII

genericfunc: genericfunc.cpp
	mkdir -p build
	$(CC) -o build/genericfunc genericfunc.cpp $(FLAGS)

testStack: testStack.cpp
	mkdir -p build
	$(CC) -o build/testStack testStack.cpp $(FLAGS)

testLinkedList: testLinkedList.cpp
	mkdir -p build
	$(CC) -o build/testLinkedList testLinkedList.cpp $(FLAGS)

vectorI: vectorI.cpp
	mkdir -p build
	$(CC) -o build/vectorI vectorI.cpp $(FLAGS)

vectorII: vectorII.cpp
	mkdir -p build
	$(CC) -o build/vectorII vectorII.cpp $(FLAGS)

clean:
	rm -rf build/
