#include <stdio.h>
#include "calc.h"

int main () {
  int a = 6;
  int b = 10;

  printf("La suma de %d mas %d es %d\n", a, b, suma(a,b));
  printf("La resta de %d menos %d es %d\n", a, b, resta(a,b));
  printf("La multiplicacion de %d por %d es %d\n", a, b, mult(a,b));
  printf("El resultado de %d entre %d es %f\n", a, b, div((double)a,(double)b));
}