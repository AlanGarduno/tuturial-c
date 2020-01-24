#include <stdlib.h>
#include "Cola.h"

/*
Funcion: initNode
Regresa: Apuntador de tipo Nodo
Descripcion: Reserva la memoria necesaria para 
cada uno de los nodos de la cola
*/
Nodo* initNode(elemento e){
  Nodo *aux = NULL;
  aux = (Nodo*)malloc(sizeof(Nodo));
  if ( aux != NULL){
    aux->e = e;
    aux->siguiente = NULL;
  }

  return  aux;
}

/*
Funcion: destroyNode
Regresa: N/A
Descripcion: Libera la memeria que utiliza un nodo
*/
void destroyNode(Nodo *n){
  n->e = 0;
  n->siguiente = NULL;
  free(n);
}

/*
Funcion: init
Regresa: Apuntador de tipo Cola
Descripcion: Reserva la memoria necesaria para 
cada la estrcutura Cola (frente, final y tamaño)
*/
Cola* init(){
  Cola *aux = NULL;
  aux = (Cola*)malloc(sizeof(Cola));
  if (aux != NULL){
    aux->tam = 0;
    aux->frente = aux->final = NULL;
  }

  return aux;
}

/*
Funcion: queue
Regresa: N/A
Descripcion: Inserta un elemento en la Cola
*/
void queue(Cola *c, elemento e){
  Nodo *aux = initNode(e);
  if (!c->frente){
    c->frente = aux;
    c->final = aux;
  } else {
    c->final->siguiente = aux;
    c->final = aux;
  }
  c->tam++;
}

/*
Funcion: dequeue
Regresa: El elemento eliminado
Descripcion: Desencola un elemento de la Cola y lo retorna
*/
elemento dequeue(Cola *c){
  elemento r = -1;
  if(c->frente){
    Nodo *aux = c->frente;
    r = c->frente->e;
    c->frente = c->frente->siguiente;
    destroyNode(aux);
    c->tam--;
    if(!c->frente){
      c->frente = NULL;
      c->tam = 0;
    }
  }

  return r;
}

/*
Funcion: isEmpty
Regresa: TRUE si la Cola esta vacia FALSE SI NO
Descripcion: Verifica si la Cola esta vacia
*/
boolean isEmpty(Cola *c){
  boolean r;
  if (c->tam == 0)
    r = TRUE;
  else
    r = FALSE;

  return r;
}

/*
Funcion: front
Regresa: El primer elemento de la Cola
Descripcion: Regresa el primer elemento de la Cola
*/
elemento front(Cola *c){
  return c->frente->e;
}

/*
Funcion: final
Regresa: El ultimo elemento de la Cola
Descripcion: Regresa el ultimo elemento de la Cola
*/
elemento final(Cola *c){
  return c->final->e;
}

/*
Funcion: size
Regresa: El numero de elementos en la Cola
Descripcion: Obtiene el numero de elementos en un Cola
*/
int size(Cola *c){
  return c->tam;
}

/*
Funcion: destroy
Regresa: N/A
Descripcion: Libera la memoria ocupada por una Cola
*/
void destoy(Cola *c){
  while(c->frente){
    dequeue(c); 
  }
  free(c);
}