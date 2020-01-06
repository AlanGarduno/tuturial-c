/*
Algoritmos de busqueda en lenguage C

Para compilar: make
Para ejecutar: ./bus (Linux/Mac)
                bus (Windows)

Autor: Alan Garduño Velazquez
*/

#include <stdio.h>
#include <stdlib.h>
#include "bus.h"

int main(){
  long A[] = {1213,3412421,54546,324233,55555,131313,453546,665788,2311231};
	long dato = 55555;

  if(busquedaLineal(A,9,dato))
    printf("El dato %ld pertenece a la coleccion\n",dato);
  else
    printf("El dato %ld no pertenece a la coleccion\n",dato);

  return 0; 
}