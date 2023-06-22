/*
Ejer 1 - Trabajo practico 1

ESCRIBIR UN ALGORITMO QUE PIDA:
NOMBRE
APELLIDO
TELEFONO
EDAD

DE UNA PERSONA Y LUEGO LO MUESTRE POR PANTALLA.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define tam 20

int main(){
	char nombre[tam], apellido[tam], tell[tam];
	int edad;

	printf("Nombre:  \t");
	gets(nombre);
	fflush(stdin);
	printf("Apellido:\t");
	gets(apellido);
	fflush(stdin);
	printf("Telefono:\t");
	gets(tell);
	fflush(stdin);
	printf("Edad:    \t");
	scanf("%i",&edad);
	fflush(stdin);

	printf("\nNombre:\t%s",nombre);
	printf("\nApellido:\t%s",apellido);
	printf("\nTelefono:\t%s",tell);
	printf("\nEdad:    \t%i",edad);

	return 0;
}