#include <stdlib.h>
#include "Cola.h"

Nodo* initNode(elemento e){
  Nodo *aux = NULL;
  aux = (Nodo*)malloc(sizeof(Nodo));
  if ( aux != NULL){
    aux->e = e;
    aux->siguiente = NULL;
  }

  return  aux;
}

void destroyNode(Nodo *n){
  n->e = 0;
  n->siguiente = NULL;
  free(n);
}

Cola* init(){
  Cola *aux = NULL;
  aux = (Cola*)malloc(sizeof(Cola));
  if (aux != NULL){
    aux->tam = 0;
    aux->frente = aux->final = NULL;
  }

  return aux;
}

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

boolean isEmpty(Cola *c){
  boolean r;
  if (c->tam == 0)
    r = TRUE;
  else
    r = FALSE;

  return r;
}

elemento front(Cola *c){
  return c->frente->e;
}

elemento final(Cola *c){
  return c->final->e;
}

int size(Cola *c){
  return c->tam;
}

void destoy(Cola *c){
  while(c->frente){
    dequeue(c); 
  }
  free(c);
}