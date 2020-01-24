#ifndef ARBOL_H
#define ARBOL_H
// Se definen constantes para hacer el codigo mas legible
#define TRUE	1
#define FALSE	0
// ****** DEFINICIONES DE TIPOS DE DATO *********
/*
Tipo de dato que se guardara en los Nodos
esta linea ayuda a cambiar el tipo facilmente
*/
typedef int elemento;
// En C no exiten los boolean pero se pueden simular de la siguiente manera
typedef unsigned char boolean;

/*
TAD o estrcutura nodo
En esta estructura se almacena el dato y 
la referencia a las hojas del arbol
*/
typedef struct Nodo{
  elemento valor;
  struct Nodo* izq;
  struct Nodo* der;
  struct Nodo* padre;
}Nodo;

typedef Nodo Arbol;

#endif