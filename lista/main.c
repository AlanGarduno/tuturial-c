#include <stdio.h>
#include "Lista.h"

int main(){

  Lista * l = init();

  insertFirst(l,10);
  insertFirst(l,20);

  insertLast(l,90);

  insertAhead(0,l,88);

  printf("El primer elemento de la lista es %d \n", getElementByPosition(0,l));
  printf("El ultimo elemento de la lista es %d \n", getElementByPosition(3,l));
  printf("El tamaño de la lista es %d \n", size(l));
  
  deleteFirst(l);
  deleteLast(l);

  printf("El primer elemento de la lista es %d \n", getElementByPosition(0,l));
  printf("El ultimo elemento de la lista es %d \n", getElementByPosition(1,l));
  printf("El tamaño de la lista es %d \n", size(l));
  
  destroy(l);

  return 0;
}