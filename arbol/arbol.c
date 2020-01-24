#include <stdlib.h>
#include <stdio.h>
#include "Arbol.h";

/*
Funcion: initNode
Regresa: Apuntador de tipo Nodo
Descripcion: Reserva la memoria necesaria para 
cada uno de los nodos del Arbol
*/
Nodo* initNodo(elemento e){
  Nodo* aux = NULL;
  aux = (Nodo*)malloc(sizeof(Nodo));
  if (aux != NULL){
    aux->valor = e;
    aux->der = aux->izq = NULL;
  }

  return aux;
}

/*
Funcion: destroyNode
Regresa: N/A
Descripcion: Libera la memeria que utiliza un nodo
*/
void destroyNode(Nodo* n){
  n->der = n->izq = NULL;
  free(n);
}

/*
Funcion: insertNode
Regresa: N/A
Descripcion: Inserta un nodo en el arbol
*/
void insertNode(Nodo **a, elemento e){
  if(*a == NULL){
    *a = initNodo(e);
  } else {
    elemento valor = (*a)->valor;
    if (valor < e)
      insertNode(&(*a)->izq, e);
    else
      insertNode(&(*a)->der, e);
  }
}

/*
Funcion: exist
Regresa: TRUE si el elemento exite en el arbol FALSE si no
Descripcion: Verifica la exitencia de un elemento en el arbol
*/
boolean exist(Nodo* arbol,elemento e){
  if (arbol == NULL)
    return FALSE;
  else if (arbol->valor == e)
    return TRUE;
  else if(e < arbol->valor)
    return exist(arbol->izq, e);
  else
    return exist(arbol->der, e);
}
/*
Funcion: preOrder
Regresa: N/A
Descripcion: Recorrido en preOrder del arbol
*/
void preOrder(Nodo* a){
  if(a == NULL);
  else{
    printf("%d\n", a->valor);
    preOrder(a->izq);
    preOrder(a->der);
  }
}
/*
Funcion: inOrder
Regresa: N/A
Descripcion: Recorrido en inOrder del arbol
*/
void inOrder(Nodo* a){
  if(a == NULL);
  else{
    inOrder(a->izq);
    printf("%d\n", a->valor);
    inOrder(a->der);
  }
}
/*
Funcion: posOrder
Regresa: N/A
Descripcion: Recorrido en posOrder del arbol
*/
void posOrder(Nodo* a){
  if(a == NULL);
  else{
    posOrder(a->izq);
    posOrder(a->der);
    printf("%d\n", a->valor);
  }
}

