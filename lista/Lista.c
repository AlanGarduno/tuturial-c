#include <stdlib.h>
#include "Lista.h"

/*
Funcion: initNode
Regresa: Apuntador de tipo Nodo
Descripcion: Reserva la memoria necesaria para 
cada uno de los nodos de la lista
*/
Nodo* initNode(elemento e){
  Nodo* aux = NULL;
  aux = (Nodo*)malloc(sizeof(Nodo));
  if(aux != NULL){
    aux->e = e;
    aux->siguiente = NULL;
  }

  return aux;
}
/*
Funcion: destroyNode
Regresa: N/A
Descripcion: Libera la memeria que utiliza un nodo
*/
void destroyNode(Nodo *nodo){
  free(nodo);
}

/*
Funcion: init
Regresa: Apuntador de tipo Cola
Descripcion: Reserva la memoria necesaria para 
cada la estrcutura Cola (frente, final y tamaño)
*/
Lista* init(){
  Lista *l = NULL;
  l = (Lista*)malloc(sizeof(Lista));
  if(l != NULL){
    l->cabeza = NULL;
    l->tam = 0;
  }

  return l;
}

/*
Funcion: destroy
Regresa: N/A
Descripcion: Libera la memoria de una lista
*/
void destroy(Lista *l){
  free(l);
}
/*
Funcion: insertFirst
Regresa: N/A
Descripcion: Inserta en la lista l el elemento e al principio de la lista l
*/
void insertFirst(Lista *l, elemento e){
  Nodo* nodo = initNode(e);
  nodo->siguiente = l->cabeza;
  l->cabeza = nodo;
  l->tam++;
}
/*
Funcion: insertLast
Regresa: N/A
Descripcion: Inserta en la lista l el elemento e al final de la lista l
*/
void insertLast(Lista *l, elemento e){
  Nodo* nodo = initNode(e);
  if (l->cabeza == NULL) {
    l->cabeza = nodo;
  } else {
    Nodo* aux = l->cabeza;
    while(aux->siguiente){
      aux = aux->siguiente;
    }
    aux->siguiente = nodo;
    l->tam++;
  }
}
/*
Funcion: insertAhead
Regresa: N/A
Descripcion: Inserta en la lista l el elemento e despues de la posicion n
*/
void insertAhead(int n, Lista *l, elemento e){
  Nodo* nodo = initNode(e);
  if(l->cabeza == NULL){
    l->cabeza = nodo;
  } else {
    Nodo* aux = l->cabeza;
    int pos = 0;
    while(aux->siguiente && pos < n){
      aux = aux->siguiente;
      pos++;
    }
    nodo->siguiente = aux->siguiente;
    aux->siguiente = nodo;
    l->tam++;
  }
}
/*
Funcion: getElementByPosition
Regresa: elemento en la posicion n
Descripcion: Retorna el elemento l de la lista l
*/
elemento getElementByPosition(int n, Lista *l){
  elemento r;
  if(l->cabeza == NULL){
    r = (elemento)NULL;
  } else {
    Nodo *aux = l->cabeza;
    int pos = 0;
      while (aux->siguiente && pos < n){
        aux = aux->siguiente;
        pos++;
    }
    if(pos != n)
      r = (elemento)NULL;
    else
      r = aux->e;
  }

  return r;
}
/*
Funcion: size
Regresa: el tamaño de la lista
Descripcion: Retorna el tamaño de la lista l
*/
int size(Lista* l){
  return l->tam;
}
/*
Funcion: isEmpty
Regresa: TRUE si la lista esta vacia FALSE SI NO
Descripcion: Verifica si la lista esta vacia
*/
boolean isEmpty(Lista *l){
  boolean r;
  if(l->tam == 0)
    r = TRUE;
  else
    r = FALSE;
  return r;
}
/*
Funcion: deleteFirst
Regresa: N/A
Descripcion: Elimina el primer elemento de la lista l
*/
void deleteFirst(Lista *l){
  if(l->cabeza){
    Nodo* aux = l->cabeza;
    l->cabeza = l->cabeza->siguiente;
    destroyNode(aux);
    l->tam--;
  }
}
/*
Funcion: deleteLast
Regresa: N/A
Descripcion: Elimina el ultimo elemento de la lista l
*/
void deleteLast(Lista *l){
  Nodo* deleted = NULL;
  if(l->cabeza){
    if(l->cabeza->siguiente){
      Nodo* aux = l->cabeza;
      while (aux->siguiente->siguiente){
        aux = aux->siguiente;
      }
      deleted = aux->siguiente;
      aux->siguiente = NULL;
      destroyNode(deleted);
    } else {
      deleted = l->cabeza;
      destroyNode(deleted);
    }
    l->tam--;
  }
}
/*
Funcion: deleteElement
Regresa: N/A
Descripcion: Elimina el elemento en la posicion n de la lista l
*/
void deleteElement(int n, Lista* l){
  if(l->cabeza){
    if(n ==  0){
      Nodo* aux = l->cabeza;
      l->cabeza = l->cabeza->siguiente;
      destroyNode(aux);
      l->tam--;
    } else if (n < l->tam) {
      Nodo* aux = l->cabeza;
      int pos = 0;
      while(pos < (n-1)){
        aux = aux->siguiente;
        pos++;
      }
      Nodo* deleted = aux->siguiente;
      aux->siguiente = deleted->siguiente;
      destroyNode(deleted);
      l->tam--;
    }
  }
}