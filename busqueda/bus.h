#ifndef BUS_H
#define BUS_H
/*Funcion: busquedaLienal
Recibe:un vetor A, n que es el tamaño del vector A y dato que es el dato a buscar dentto de A
Devuelve: 1 si el dato existe en A y 0 si no existe*/
int busquedaLineal(long A[], long n, long dato);
/*
Fucion: busquedaBinaria
Recibe:un vetor A, n que es el tamaño del vector A y dato que es el dato a buscar dentto de A
Devuelve: 1 si el dato existe en A y 0 si no existe
Precondicion: A necesariamente tiene que estar ordenado
*/
int busquedaBinaria(long A[], long n, long dato);

#endif