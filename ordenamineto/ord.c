#include "ord.h"

void bubble_sort(long A[],long n){
	long aux;
	for (long i = 1; i <= n-1; i++)
		for (long j = 0; j <= (n-1)-i; j++)
			if (A[j]>A[j+1])
			{
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
			}
}

void Obubble_sort(long A[], long n){
	char cambios=1;
	long i=0,aux;

	while(i < n-1 && cambios != 0){
		cambios=0;
		for (int j  = 0; j <= (n-2)-i; j++)
			if (A[j]>A[j+1])
			{
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
				cambios=1;
			}
		i++;
	}
}


/*
Implemtancion del algortimo insertion_sort
Recibe: un puntero a un arreglo A y un long n que es el tamaño del mismo
*/
void insertion_sort(long A[], long n){
	long int i,j,temp; //Variables auxiliares
	for(i = 0; i <= n-1; i++){ //i inicia en cero, mientras i sea menor o igual a n-1, i incrementara su valor en 1
		j = i; // Se iguala j al valor de i
		while (j >0 && A[j] < A[j-1]) { // Mientras j sea major que zero y la posicion j de A sea mnero a la posicion j-1 de A
			//Mientras la condicion se cumpla se hara el siguiente interambio de valores
			temp = A[j]; //Guardaremos el valor de A[j] en temp
			A[j] = A[j-1]; // El nuevo valor de A[j] sera el valor que estaba en A[j-1]
			A[j-1] = temp;//El nuevo valor de A[j-1] sera el valor que estaba en A[j](temp)
			j--; // Decrementamos el valor de j en una
		}
	}
}

void selection_sort(long A[],long n){
  long k,p,i,aux;
  	for(k = 0; k <= n-2; k++){
	    p = k;
	    for(i = k+1; i<= n-1; i++){
	      	if(A[i] < A[p] ){
	        	p = i;
	     	}	
	    }
	    aux = A[p];
	    A[p] = A[k];
	    A[k] = aux;
  	}
}

/*
Implementacion del algortimo shell shell_sort
Recibe: un puneto a un arrglo A  y el tamaño de ese arreglo n
*/
void shell_sort(long A[], long n){
	long int gap = n/2;  //Se obtiene el gap dividiendo el tamaño de arreglo entre dos
  	long int inner, outer, swap; //Variables auxiliares
  	while (gap > 0) { //Mientras gap sea mayor que zero entonces:
	    for(outer = gap; outer < n; outer++){ // Para outer igual a gap, siempre que outer sea menor a n, outer aumentara su valor en uno
	      	inner = outer; // inner se iguala al valor de outer
	      	swap = A[inner]; // Swap se iguala a la posiscion inner de A
	      	while (inner > gap - 1 && A[inner - gap] > swap ) {  // Mientras inner sea mayor que gap menos 1 y que A en su posicion inner menos gap sea mayor a Swap
	        	A[inner] = A[inner - gap]; //La posicion inner de A tomara como nuevo valor la posicion inner menos  gap de A
	        	inner -= gap; //inner decrementa su valor en gap veces
	      	}
	      	A[inner] = swap; //La posicion inner de A tomo como nuevo valor swap
    	}
    	gap /=2; // se divide a gap entre dos
  	}
}
