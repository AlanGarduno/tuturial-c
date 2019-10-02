/*
Ejemplo de arreglos en lenguage C

Para compilar: gcc arreglo_1.c -o testA.out // gcc arreglo_1.c -o testA.exe
Para ejecutar: ./testA.out(Linux/Mac)
                testA.exe (Windows)

Autor: Alan Garduño Velazquez
*/
//Bibliotecas a utilizar
#include<stdio.h>

//Funcion principal
int main(){

 //Declaracion de dos arreglos de tipo entero, ambos con tamaño de 5
  int arreglo[5];
  int arreglo2[5] = {1,2,3,4,5};

// Impresion de los elementos 0 y 3 respectivamente
  printf("%d\n", arreglo2[0]);
  printf("%d\n", arreglo[3]);

//LLenado de datos del arreglo mediante un ciclo
  for(int i = 0; i < 5; i++){
    arreglo[i] = (i+1);
  }

//Impresion de datos del arrgelo mediante un ciclo
  for(int i = 0; i < 5; i++){
    printf("%d\n",arreglo[i]);
  }

  

  return 0;
}
