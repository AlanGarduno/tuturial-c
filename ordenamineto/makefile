ord: ord.o
	gcc -g -o ord main.c ord.o

ord.o: ord.h ord.c
	gcc -g -c ord.o ord.c

.PHONY: clean
clean:
	rm -rf *.o