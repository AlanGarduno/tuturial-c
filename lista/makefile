Lista: Lista.o
	gcc -g -Wall -o Lista main.c Lista.o

Lista.o: Lista.h Lista.c
	gcc -Wall -g -c -o Lista.o Lista.c

.PHONY: clean
clean:
	rm -rf *.o