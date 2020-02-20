/*
Ejemplo de memoria dinamica en lenguage C

Para compilar: gcc mem_din_1.c -o testA.out // gcc arreglo_1.c -o testA.exe
Para ejecutar: ./testA.out(Linux/Mac)
                testA.exe (Windows)

Autor: Alan Garduño Velazquez
*/
#include <stdlib.h>
#include <stdio.h>

int main() {

  // Declaracion de puntreros
  int *i;
  int *j;

  // Uso de funcion malloc que reseva la memoria sufuciente para guardar un enetero
  i = (int*)malloc(sizeof(int));

  // Uso de la funcion calloc que reserva el espacio para 10 enetreso y ademas los inicializa en 0
  j = (int*)calloc(10, sizeof(int));
  *i = 10;
  printf("%d\n",*i);
  for (int k = 0; k < 10; k++) {
    j[k] = k+1;
  }
  for (int k = 0; k < 10; k++) {
    printf("%d\n",j[k]);
  }
  
 // reasigancion de memoria de i, de memoria para un enetro a memeoria para 10 enteros
  int *t = (int *)realloc(i, sizeof(int) * 10);
  i = t;
  for (int k = 0; k < 10; k++) {
    i[k] = k+1;
  }
  for (int k = 0; k < 10; k++) {
    printf("%d\n",i[k]);
  }

  // Libereacion de la memeria reservada
  free(i);
  free(j);
}