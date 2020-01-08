#include <stdlib.h>
#include "Pila.h"

/*
Funcion: initNode
Regresa: Apuntador de tipo Nodo
Descripcion: Reserva la memoria necesaria para 
cada uno de los nodos de la pila
*/
Nodo *initNode(elemento e){
  Nodo *aux = (Nodo *)malloc(sizeof(Nodo));
  if(aux != NULL){
    aux->e = e;
    aux->siguiente = NULL;
    return aux;
  }
  return NULL;
}

/*
Funcion: destroyNode
Regresa: N/A
Descripcion: Libera la memeria que utiliza un nodo
*/
void *destroyNode(Nodo *n){
  n->siguiente = NULL;
  free(n);
}

/*
Funcion: init
Regresa: Apuntador de tipo Pila
Descripcion: Reserva la memoria necesaria para 
cada la estrcutura Pila (tope y tamaño)
*/
Pila* init(){
  Pila *p = (Pila *)malloc(sizeof(Pila));
  if (p != NULL){
    p->tope = NULL;
    p->tam = 0;
  }
  return p;
}

/*
Funcion: push
Regresa: N/A
Descripcion: Inserta un elemento en la Pila
*/
void push(Pila *p, elemento e){
  Nodo *aux = initNode(e);
  aux->siguiente = p->tope;
  p->tope = aux;
  p->tam++;
}

/*
Funcion: pop
Regresa: elemento sacado de la pila
Descripcion: Saca un elemento de la pila
*/
elemento pop(Pila *p){
  elemento r = -1;
  Nodo *aux;
  if (p->tope != NULL){
    r = p->tope->e;
    aux = p->tope;
    p->tope = p->tope->siguiente;
    p->tam--;
    destroyNode(aux);
  }
  return r;
}

/*
Funcion: isEmpty
Regresa: TRUE si la pila esta vacia FALSE SI NO
Descripcion: Inserta un elemento en la Pila
*/
boolean isEmpty(Pila *p){
  boolean r;
  if(p->tam > 0)
    r =  FALSE;
  else
    r = TRUE;
  
  return r;
}

/*
Funcion: top
Regresa: El elemento de la cima/tope de la pila
Descripcion: Obtiene el elemento del tope de la pila
*/
elemento top(Pila *p){
  elemento r;
  if(!isEmpty(p)){
    r =  p->tope->e;
    return r;
  }
  return -1;
}

/*
Funcion: size
Regresa: El numero de elementos en la pila
Descripcion: Obtiene el numero de elementos en un pila
*/
int size(Pila *p){
  return p->tam;
}

/*
Funcion: destroy
Regresa: N/A
Descripcion: Libera la memoria ocupada por una Pila
*/
void destroy(Pila *p){
  Nodo *aux;
  if (p->tope != NULL){
    while(p->tope!=NULL){
      aux = p->tope->siguiente;
      free(p->tope);
      p->tope = aux;
    }
  }
}