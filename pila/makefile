Pila: Pila.o
	gcc -g -Wall -o Pila main.c Pila.o

Pila.o: Pila.h Pila.c
	gcc -Wall -g -c -o Pila.o Pila.c

.PHONY: clean
clean:
	rm -rf *.o