Arbol: Arbol.o
	gcc -g -Wall -o Arbol main.c Arbol.o

Arbol.o: Arbol.h Arbol.c
	gcc -Wall -g -c -o Arbol.o Arbol.c

.PHONY: clean
clean:
	rm -rf *.o