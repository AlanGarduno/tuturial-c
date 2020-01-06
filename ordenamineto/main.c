/*
Algoritmos de ordenamiento en lenguage C

Para compilar: make
Para ejecutar: ./ord (Linux/Mac)
                ord (Windows)

Autor: Alan Garduño Velazquez
*/

#include "ord.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void print(long *a, long n);
void fill_array(long *a, long n);

int main() {
  long a[100]; // Se declara arreglo de 100 posiciones
  fill_array(a,100); // Se llena el arreglo de numeros aleatprios
  print(a,100); // Se imprime el arreglo
  shell_sort(a,100); // Se ordena
  print(a,100); // Se imprime ordenado
}
// Funcion para llenar de numeros aleatorios un arreglo
void fill_array(long *a, long n) {
  int num;
  srand(time(NULL));
  for(int i = 0; i<n; i++){
    num = 1 + rand()%(100);
    a[i] = num;
  }
}
// Funcion para imprimir los valores de un arreglo
void print(long *a, long n){
  for(int i = 0; i<n; i++){
    printf("%ld\n",a[i]);
  }
}