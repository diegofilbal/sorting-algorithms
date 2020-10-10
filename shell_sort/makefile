# makefile shell sort

all:
	mkdir -p bin
	g++ -Wall -c src/shell_sort.cpp -o bin/shell_sort.o
	g++ -Wall -c ../insertion_sort/src/insertion_sort.cpp -o bin/insertion_sort.o
	g++ -Wall src/main.cpp bin/shell_sort.o bin/insertion_sort.o -o bin/main
run:
	./bin/main	