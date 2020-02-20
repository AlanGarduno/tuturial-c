/*
Ejemplo de TAD en lenguage C

Para compilar: gcc tad_1.c -o testA.out // gcc tad_1.c -o testA.exe
Para ejecutar: ./testA.out(Linux/Mac)
                testA.exe (Windows)

Autor: Alan Garduño Velazquez
*/
#include<stdio.h>
#include<stdlib.h>

// Declaracion de un estructura y su alias
typedef struct Fraccion {
  // Atributos o propiedades
  int denominador;
  int numerador;
}Fraccion;

int main(){

  Fraccion f; //Varaible normal
  Fraccion * fptr = (Fraccion*)malloc(sizeof(Fraccion)); // Puntero
  f.denominador = 10; //Acc
  f.numerador = 20; // Acceso a las propiedades por operador .
  fptr->denominador=10;
  fptr->numerador=80; // Acceso a las propiedades por operador flecha

  printf("Fraccion: %d/%d\n", f.numerador,f.denominador);
  printf("Fraccion: %d/%d\n", fptr->numerador, fptr->denominador);

  return 0;
  
}
