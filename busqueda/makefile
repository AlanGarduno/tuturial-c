bus: bus.o
	gcc -g -Wall -o bus main.c bus.o

bus.o: bus.h bus.c
	gcc -Wall -g -c -o bus.o bus.c

.PHONY: clean
clean:
	rm -rf *.o