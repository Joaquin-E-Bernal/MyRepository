/*
Ejer 3 - Trabajo practico 1

ESCRIBIR UN ALGORITMO EN EL CUAL SE INGRESAN DOS VARIABLES: A Y B.

REALICE...	
LA SUMA, LA RESTA, LA DIVISION Y LA MULTIPLICACION DE A CON B.

MUESTRE LOS CUATRO RESULTADOS POR PANTALLA.

LUEGO...
INTERCAMBIE EL VALOR DE LAS DOS VARIABLES
Y MOSTRAR LOS VALORES INTERCAMBIADOS.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define tam 20

void ayb(float *a, float *b);

int main(){
	float a, b, c;

	scanf("%f",&a);
	scanf("%f",&b);
	
	ayb(&a,&b);
	c=a;
	a=b;
	b=c;
	ayb(&a,&b);
	
	return 0;
}

void ayb(float *a, float *b){
	float suma=*a+*b, resta=*a-*b, multi=*a*(*b), divi=*a/(*b);
	
	printf("\nSuma: %.2f\nResta: %.2f\nMultiplicacion: %.2f\nDivision: %.2f",suma,resta,multi,divi);
}