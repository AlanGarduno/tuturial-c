/*
Ejemplo de recursividad en lenguage C

Para compilar: gcc recursividad_1.c -o testA.out // gcc recursividad_1.c -o testA.exe
Para ejecutar: ./testA.out(Linux/Mac)
                testA.exe (Windows)

Autor: Alan Garduño Velazquez
*/
#include <stdlib.h>
#include <stdio.h>

// Prototipo de la funcion
int factorial(int n);

int main() {
  int n = 10;

  printf("%d\n", factorial(n));
  return 0;
}

// Implementacion de la funcion
int factorial(int n) {
  // Casos base se sabe que 0! = 1 y 1! = 1
  if(n < 2 && n > -1)
    return 1;
  else if (n < 0) // En el caso de que n sea menor a 0 se retorna 0 ya que el factorial de numeros negativos no existe
    return 0;
  // Si n es mayor a 2 se devuelve el producto de n por el factorial de n - 1 
  return n * factorial(n-1); 
}