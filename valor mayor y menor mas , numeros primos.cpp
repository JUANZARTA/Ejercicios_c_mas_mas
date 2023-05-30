#include <stdio.h>
#include <stdlib.h>
int main() {
	//DECLARACION DE VARIABLES
	int x,y,i,cont=0, cont2=0;
	/**INGRESE LOS DOS VALORES ENTEROS*/
	printf("\ningrese el primer valor: \n");
	scanf("%d",&x);
	printf("\ningrese el segundo valor: \n");
	scanf("%d",&y);	
	
    /** QUE VALOR ES MAYOR **/
	if(x-y==0)
	{
		printf("los dos valores ingresados son iguales: %i=%i \n ",x,y);
	}
	//SI AMBOS VALORES SON DIFERENTES ENTONCES:
		if(x-y<0)
		{
			printf("el primer valor ingresado (%i) es menor al segundo valor ingresado (%i) \n ",x,y );
		}	
		else
		   printf("el primer valor ingresado (%i) es mayor al segundo valor ingresado (%i) \n ",x,y);
		
	/** NUMERO PRIMO EN EL PRIMER VALOR INGRESADO X**/
		for(i=1;i<=x;i++){
			if(x%i==0){
				cont++;
			}
		}
		if(cont>2)
		{
			printf("el Numero (%i) no es un numero primo \n",x);
		}
		else
		   printf("el Numero (%i)  es un numero primo \n",x);
	/** NUMERO PRIMO EN EL SEGUNDO VALOR INGRESADO Y **/
		for(i=1;i<=y;i++){
			if(y%i==0){
				cont2++;
			}
		}
		if(cont2>2)
		{
			
			printf("el Numero (%i) no es un numero primo \n",y);
			
		}
		else
		   printf("el Numero (%i)  es un numero primo \n",y);
	
	
	

}
