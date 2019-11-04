#include <stdio.h>
#include <stdlib.h>

int main() {
  // varible comun
  int a;
  // puntero
  int *b;

  a = 5;
  b = &a;

  printf("El valor de a es %d y el valor de b es %x\n",a,b);

  return 0;
}