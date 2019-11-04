/*
Ejemplo de funciones en lenguage C

Para compilar: gcc funcion_1.c -o testF.out // gcc funcion_1.c -o testF.exe
Para ejecutar: ./testF.out (Linux/Mac)
                testF.exe (Windows)

Autor: Alan Garduño Velazquez
*/
//Bibliotecas a utilizar
#include<stdio.h>
//Declaraciones de prototipos de las funciones
int suma(int, int);
int resta(int, int);
int multiplicacion(int, int);
double division(int, int);

//Funcion principal
int main(){
  // Declaracion de variables que serviran como parametros de las funciones
    int parametro1 = 100;
    int parametro2 = 20;

    // Decalracion de una varible entera que guardara el entero que devuelve la funcion suma
    /*
    Los parametros no tienen porque llamarse igual que en el prototipo/implementacion
    En este caso a tomara el valor de parametro1 y b el de parametro2
    */
    int resultadoSuma = suma(parametro1, parametro2);
    //Impresion del resultado suma
    printf("%d\n",resultadoSuma);
    /*
    De igual manera nos podemos ahorrar la variable que guarda el resultado.
    Una funcion se puede llamar en cualquier parte del programa, incluos como parametro
    de otra funcion como en este caso, La funcion printf() esta esperando un entero debido al
    formateador %d que indica que el parametro sera entero y dado que la funcion resta regresa un entero
    al momento de ejecucion se tomara el entero que dicha funcion devuelve
    */
    printf("%d\n",resta(parametro1, parametro2));
    //LLamada a la funcion multiplicacion
    printf("%d\n",multiplicacion(parametro1, parametro2));
    printf("%.2f\n",division(parametro1, parametro2));

    return 0;
}
/*
int suma(int a, int b){
  int res = 0;
  res = a + b;
  return res;
}*/

/*
Funcion: Suma
Recibe: Dos enteros a y b
Regresa: La suma de los enteros a y b
*/
int suma(int a, int b){
  return a+b;
}
/*
Funcion: Resta
Recibe: Dos enteros a y b
Regresa: La Resta de los enteros a y b
*/
int resta(int a, int b){
  return a-b;
}
/*
Funcion: Multiplicacion
Recibe: Dos enteros a y b
Regresa: El producto de los enteros a y b
*/
int multiplicacion(int a, int b){
  return a*b;
}
/*
Funcion: division
Recibe: Dos enteros a y b
Regresa: La division de los enteros a y b que puede ser decimal
*/
double division(int a, int b){
  if ( b == 0 ) {
    return -1;
  }
  return (double)(a/b);
}