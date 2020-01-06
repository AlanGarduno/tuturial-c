ord: ord.o
	gcc -g -Wall -o ord main.c ord.o

ord.o: ord.h ord.c
	gcc -Wall -g -c -o ord.o ord.c

.PHONY: clean
clean:
	rm -rf *.o