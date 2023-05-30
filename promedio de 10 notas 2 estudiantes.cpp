#include <stdio.h>
#include <stdlib.h>
int main() {
	/** VARIABLES DEL ESTUDIANTE #1**/
	float a,b,c,d,e,f,g,h,i,j;
	float EstudianteUno;
	/** VARIABLES DEL ESTUDIANTE #2**/
	float l,m,n,o,p,q,r,s,t,u;
	float EstudianteDos;
	//Primer estudiante
	printf(" Recuerde que las notas van de 0-5\n");
	printf("ingrese las notas del primer estudiante:\n ");
	scanf("%f %f %f %f %f %f %f %f %f%f ",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	//Operacion para sacar promedio
	EstudianteUno=(a+b+c+d+e+f+g+h+i+j)/10;
	/*
		printf("las notas que usted ingreso no son validas");
	}
	**/
	/**CONDICIONALES**/
	if(EstudianteUno>=3)
	{
		printf("El primedio de las notas del estudante es:\n %f",EstudianteUno);
		printf("el estudiante Aprobo\n");
	}
	else
	{
		printf("El primedio de las notas del estudante es:\n %f",EstudianteUno);
		printf("el estudiante reprobo\n");
	}
	//segundo EstudianteDos
	printf("ingrese las notas del Segundo estudiante:\n ");
	scanf("%f %f %f %f %f %f %f %f %f%f ",&l,&m,&n,&o,&p,&q,&r,&s,&t,&u);
	//Operacion de promedio
	EstudianteDos=(l+m+n+o+p+q+r+s+t+u)/10;
	printf("es: %f",EstudianteDos);
	/**CONDICIONALES**/
	if(EstudianteDos>=3)
	{
		printf("El primedio de las notas del estudante es:\n %f",EstudianteDos);
		printf("el estudiante Aprobo\n");
	}
	else
	{
		printf("El primedio de las notas del estudante es:\n %f",EstudianteDos);
		printf("el estudiante reprobo\n");
	}
	
}
