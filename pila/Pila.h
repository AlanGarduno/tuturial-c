#ifndef PILA_H
#define PILA_H
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
la referencia al siguiente elemento
*/
typedef struct Nodo {
  elemento e;
  struct Nodo * siguiente;
  
}Nodo;

/*
TAD o estrictira Pila
Se alamcena la referencia siempre al tope de la pila
Y el tamaño de las misma
 */
typedef struct Pila{
  Nodo *tope;
  int tam;
}Pila;

// ************ Declaracion de las funciones *********** //
Nodo *initNode(elemento e); // Incializa los atributos de la estrcutura Nodo
void *destroyNode(Nodo *n); // Libera la memoria que utiliza un Nodo
Pila* init(); // Inicializa los valores de la estrcutura Pila
void push(Pila *p, elemento e); // Inserta un elemento en la Pila
elemento pop(Pila *p); // Saca un elemento de la pila
boolean isEmpty(Pila *p); // Se comprueba si la Pila esta vacia
elemento top(Pila *p); // Devuelve el elemento del tope de la pila
int size(Pila *p); // Deveuelve el tamaño de la pila o numero de elementos
void destroy(Pila *p); // Libera la memoria que utiliza una Pila
#endif