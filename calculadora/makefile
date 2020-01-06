calc: calc.o
	gcc -g -Wall -o calc main.c calc.o

calc.o: calc.h calc.c
	gcc -Wall -g -c -o calc.o calc.c

.PHONY: clean
clean:
	rm -rf *.o