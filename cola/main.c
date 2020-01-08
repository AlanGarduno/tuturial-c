/*
TAD Cola en lenguage C

Para compilar: make
Para ejecutar: ./Cola (Linux/Mac)
                Cola (Windows)

Autor: Alan Garduño Velazquez
*/
#include <stdio.h>
#include "Cola.h"


int main(){

  Cola *c = init();

  queue(c, 10);
  queue(c, 1);
  queue(c, 3);
  queue(c, 5);
  queue(c, 7);

  printf("El primer elemento es %d \n", front(c));
  printf("El ultimo elemento es %d \n", final(c));
  printf("El tamaño de la Cola es %d \n", size(c));

  dequeue(c);
  dequeue(c);
  dequeue(c);

  printf("El primer elemento es %d \n", front(c));
  printf("El ultimo elemento es %d \n", final(c));
  printf("El tamaño de la Cola es %d \n", size(c));

  return 0;
}