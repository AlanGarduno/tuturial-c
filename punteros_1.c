/*
Ejemplo de punteros en lenguage C

Para compilar: gcc punteros_1.c -o testA.out // gcc punteros_1.c -o testA.exe
Para ejecutar: ./testA.out(Linux/Mac)
                testA.exe (Windows)

Autor: Alan Garduño Velazquez
*/

#include <stdio.h>
#include <stdlib.h>

void add(int a);
void addPtr(int *a);

int main() {
  // varible comun
  int a;
  // puntero
  int *b;

  a = 5; // Se inicializa variable 
  b = &a; // Se asigna la direccion de memeoria (puntero de a) a el puntero b 

  // Se imprime el valor de a y el valor de de la direccion de memeoria de b (el valor de a)
  printf("El valor de a es %d y el valor de b es %d\n",a,*b);

  add(a);
  addPtr(b);

  printf("El valor de a es %d y el valor de b es %d\n",a,*b);


  return 0;
}

void add(int n){
   n += 40;
  printf("Resultado: %d\n",n);
}
void addPtr(int *n){
  *n += 30;
  printf("Resultado: %d\n",*n);

}