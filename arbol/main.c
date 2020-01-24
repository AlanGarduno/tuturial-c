/*
TAD Arbol binario en lenguage C

Para compilar: make
Para ejecutar: ./Arbol (Linux/Mac)
                Arbol (Windows)

Autor: Alan Garduño Velazquez
*/
#include "Arbol.h"
#include <stdio.h>
#include <stdlib.h>

int main(){
  int A [] = {23,53,6,312,34,856,213};
  int n = 7;
  Nodo *arbol = NULL;

  for(int i = 0; i<n; i++){
    insertNode(&arbol,A[i]);
  }

  preOrder(arbol);
  printf("\n**********\n");
  inOrder(arbol);
  printf("\n**********\n");
  posOrder(arbol);

  return 0;
}


