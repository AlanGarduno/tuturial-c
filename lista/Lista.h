#ifndef LISTA_H
#define LISTA_H
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
TAD o estructura Lista
Se alamcena la referencia al primer elemento (cabeza) de la Lista
Y el tamaño de las misma
 */
typedef struct Lista{
  Nodo *cabeza;
  int tam;
}Lista;
// ************ Declaracion de las funciones *********** //
Nodo* initNode(elemento e);
void destroyNode(Nodo *nodo);
Lista* init();
void destroy(Lista *l);
void insertFirst(Lista *l, elemento e);
void insertLast(Lista *l, elemento e);
void insertAhead(int n, Lista *l, elemento e);
elemento getElementByPosition(int n, Lista *l);
int size(Lista* l);
boolean isEmpty(Lista *l);
void deleteFirst(Lista *l);
void deleteLast(Lista *l);
void deleteElement(int n, Lista* l);

#endif
