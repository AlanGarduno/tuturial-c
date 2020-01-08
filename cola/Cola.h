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
TAD o estructura Cola
Se almacena una referencila al primer y ultimo elemento de la Cola
y el tamaño de la misma
 */
typedef struct Cola {
	Nodo *frente;
	Nodo *final;
	int tam;
} Cola;

// ************ Declaracion de las funciones *********** //
Nodo* initNode(elemento e); // Inicializa y reserva los elementos de un nodo
void destroyNode(Nodo *n); // Libera la memoria que ocupaba un nodo
Cola* init(); // Incializa los elementos de una cola
void queue(Cola *c, elemento e); // Encola/Inserta un elemnto en una Cola
elemento dequeue(Cola *c); // Quita un elemento de un cola
boolean isEmpty(Cola *c); // Se comprueba si la Cola esta vacia
elemento front(Cola *c); // Obtiene el elemento de enfrente de la Cola
elemento final(Cola *c); // Obtiene el elemento final de la Cola
int size(Cola *c); // Obtiene el tamaño de la Cola
void destoy(Cola *c); // Libera la memoria que utiliza un Cola

#endif