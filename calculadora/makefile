calc: calc.o
	gcc -g -o calc main.c calc.o

calc.o: calc.h calc.c
	gcc -g -c calc.o calc.c

.PHONY: clean
clean:
	rm -rf *.o