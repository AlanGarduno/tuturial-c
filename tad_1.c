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
  Fraccion * fptr; // Puntero
  f.denominador = 10; //Acc
  f.numerador = 20; // Acceso a las propiedades por operador .
  fptr->denominador=10;
  fptr->numerador=80; // Acceso a las propiedades por operador flecha

  return 0;
  
}
