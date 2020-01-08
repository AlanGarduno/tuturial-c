Cola: Cola.o
	gcc -g -Wall -o Cola main.c Cola.o

Cola.o: Cola.h Cola.c
	gcc -Wall -g -c -o Cola.o Cola.c

.PHONY: clean
clean:
	rm -rf *.o