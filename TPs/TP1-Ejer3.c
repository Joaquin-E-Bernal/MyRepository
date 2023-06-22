/*
SE INGRESAN DOS VARIABLES:
A Y B

REALICE:
LA SUMA, LA RESTA, LA DIVISION Y LA MULTIPLICACION DE A CON B.

MUESTRE:
LOS CUATRO RESULTADOS POR PANTALLA.

LUEGO...
INTERCAMBIE EL VALOR DE LAS DOS VARIABLES, MOSTRAR: LOS VALORES INTERCAMBIADOS.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define tam 20

void mostrar(float a, float b);

int main(){
	float a,b,c;
	
	printf("Ingrese dos numeros\n");
	scanf("%f",&a);
	scanf("%f",&b);
	mostrar(a,b);
	getch();
	
	c=a;
	a=b;
	b=c;
	printf("\n\n\nAhora con los valores intercambiados\n");
	mostrar(a,b);
	getch();
	
	return 0;
}

void mostrar(float a, float b){
	float suma=a+b,resta=a-b,div=a/b,mult=a*b;
	
	printf("\nSuma:\t\t\t%.2f",suma);
	printf("\nResta:\t\t\t%.2f",resta);
	printf("\nDivision:\t\t%.2f",div);
	printf("\nMultiplicacion:\t\t%.2f",mult);
}