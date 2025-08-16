CC = g++
FLAGS = -Wall

all: list deques WindGauge vectorReverse lotto maps

list: list.cpp
	mkdir -p build
	$(CC) -o build/list list.cpp $(FLAGS)

deques: deques.cpp
	mkdir -p build
	$(CC) -o build/deques deques.cpp $(FLAGS)

WindGauge: WindGauge.cpp testWindGauge.cpp
	mkdir -p build
	$(CC) -o build/WindGauge WindGauge.cpp testWindGauge.cpp $(FLAGS)

lotto: lotto.cpp
	mkdir -p build
	$(CC) -o build/lotto lotto.cpp $(FLAGS)

maps: maps.cpp copy_file
	mkdir -p build
	$(CC) -o build/maps maps.cpp $(FLAGS)

copy_file:
	cp maps.txt build/

vectorReverse: vectorReverse.cpp
	mkdir -p build
	$(CC) -o build/vectorReverse vectorReverse.cpp $(FLAGS)

clean:
	rm -rf build/
