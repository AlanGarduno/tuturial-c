/*
Ejemplo de punteros en lenguage C

Para compilar: gcc punteros_1.c -o testA.out // gcc punteros_1.c -o testA.exe
Para ejecutar: ./testA.out(Linux/Mac)
                testA.exe (Windows)

Autor: Alan Garduño Velazquez
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
  // varible comun
  int a;
  // puntero
  int *b;

  a = 5; // Se inicializa variable 
  b = &a; // Se asigna la direccion de memeoria (puntero de a) a el puntero b 

  // Se imprime el valor de a y el valor de de la direccion de memeoria de b (el valor de a)
  printf("El valor de a es %d y el valor de b es %d\n",a,*b);

  return 0;
}