#include <stdlib.h>

int main() {

  // Declaracion de puntreros
  int *i;
  int *j;

  // Uso de funcion malloc que reseva la memoria sufuciente para guardar un enetero
  i = (int*)malloc(sizeof(int));

  // Uso de la funcion callo que reserva el espacio para 10 enetreso y ademas los inicializa en 0
  j = (int*)calloc(10, sizeof(int));

 // reasigancion de memoria de i de memeria para un enetro a memeoria para 10 enteros
  int *t = (int *)realloc(i, sizeof(int) * 10);
  i = t;

  // Libereacion de la memeria reservada
  free(i);
  free(j);
  free(t);
}