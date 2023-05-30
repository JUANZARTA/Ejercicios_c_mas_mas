#include <stdio.h>
#include <stdlib.h>
int main() {
	
	int opcion;
	float basR,altR, areaR;
	float radC, areaC;
	float basT,altT, areaT;
	printf("\t Bienvenido");
	printf("\n1.Calcular area de un Rectangulo\n");
	printf("\n2.Calcular area de un Circulo\n");
	printf("\n3.Calcular area de un Triangulo\n");
	printf("\n4. Salir del programa\n");
	scanf("%i",&opcion);
	
	switch(opcion){
    case 1: printf("\ningrese el valor de la base  del rectangulo\n");
	        scanf("%f", &basR);
			printf("\ningrese el valor de la altura  del rectangulo\n");
			scanf("%f", &altR);
			areaR=basR*altR;
			printf("\nel area del rectangulo es: %f", areaR);
			
	break; 
	case 2:printf("\ningrese el valor del radio del circulo\n");
	       scanf("%f", &radC);
		   areaC=(radC*3.1416);
		   printf("\nel area del circulo es : %f", areaC);
		
	break;
	case 3:printf("\ningrese el valor de la base  del triangulo\n");
	       scanf("%f", &basT);
		   printf("\ningrese el valor de la altura  del triangulo\n");
	       scanf("%f", &altT);		
		   areaT=((basT*altT)/2);
		   printf("\nel area del Triangulo es : %f", areaT);
	break;
	case 4:("saliendo");
	return false;
	break;
	default: printf("\nse equivoco de opcion de menu, Intente Nueamente\n");
	         
	}
	while(opcion <5);//3d8bfb
		return 0;
}

