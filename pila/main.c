#include <stdio.h>
#include "Pila.h"


int main(){

  Pila *p = init();

  push(p,10);
  push(p,5);
  push(p,0);
  push(p,100);

  printf("Longitud Pila %d\n",size(p)); // 4

  printf("Tope Pila %d\n",top(p)); // 100

  pop(p);
  pop(p);

  printf("Longitud Pila %d\n",size(p)); // 2

  printf("Tope Pila %d\n",top(p)); // 5

  destroy(p);
  
  return 0;
}