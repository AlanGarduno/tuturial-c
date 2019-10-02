/*
Ejemplo de arreglos en lenguage C

Para compilar: gcc matriz_1.c -o testM.out // gcc matriz_1.c -o testM.exe
Para ejecutar: ./testM.out(Linux/Mac)
                testM.exe (Windows)

Autor: Alan Garduño Velazquez
*/
//Bibliotecas a utilizar
#include<stdio.h>

//Funcion principal
int main(){

 //Declaracion de dos matrices de tipo entero, ambos con tamaño de 3x3
  int matriz[3][3];
  int matriz2[3][3] = { {1,2,3} , {4,5,6}, {7,8,9} };

// Impresion de los elementos 0,0 y 2,1  respectivamente
  // printf("%d\n", matriz[0][0]);
  // printf("%d\n", matriz2[2][1]);


//LLenado de datos de la matriz mediante ciclos
  for(int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++)
    {
      matriz[i][j] = i*j;
    }
    
  }

//Impresion de datos de la matriz mediante ciclos
  for(int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++)
    {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }

  

  return 0;
}
