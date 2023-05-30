#include <stdio.h>
#include <stdio.h>
/**LIBRERIA DE MATEMATICA**/
#include <math.h>
#define PI 3.1415926535897932384

int main(int argc, char *argv[]) {
	// conociedno el angulo y la velocidad
	//Altura maxima: 
	/** Ymáx = (Vo²·Sen(2?))/g */
	//Velocidad maxima:
	/** Ymax=(Vo² . sin²(?)/2g*/
	float vInicial=0, a=0, b=2;
	float yMax, xMax, g=9.8;
	float seno,rad, seno2,rad2;
	
	printf("\t\t\t Bienvenido\n");
	printf("\neste programa calculara la altura y distancia maxima de un Cañon conociendo su angulo y Velocidad inicial\n");
	printf("\nPorfavor ingrese el angulo:\n");
	scanf("%f",&a);
	printf("ingrese la velocidad incial:\n");
	scanf("%f",&vInicial);
	/** Altura maxima**/
	b=(2*a);
	rad2=(b*PI/180);
	seno2=sin(rad2);
	yMax=((vInicial*vInicial)*(seno2))/g;
	printf("la altura maxima es: %f\n", yMax);
	/** Distancia maxima**/
	rad=(a*PI/180);
	seno=sin(rad);
	xMax=((vInicial*vInicial)*(seno*seno))/(2*g);
	printf("la Distancia maxima es: %f\n", xMax);
	

}

