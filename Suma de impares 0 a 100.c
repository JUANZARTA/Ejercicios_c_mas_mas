#include <stdio.h>
#include <stdlib.h>
int main() {
	//Algoritmo que permita sumar numero impares desde el 0 hasta el 100
    /** Declaramos la variable y la variable X */
	int i;
    int x=0;
	/** Ciclo for que recorrera desde i=1 hasta que i<=100 sumando de dos en dos para que sea impar*/
	for(i=1;i<=100;i+=2)
	{   //damos cada valor que toma y lo guardamos en i
		printf(" %d ",i);
		//el valor de X sera igual a la suma de X mas i
		x=x+i;
	}
	/** Presentamos en consola el resultado */
	printf("el resultado de la suma de los numeros impares entre 0 y 100 es: %d", x);	
	//return=0;
}
	



