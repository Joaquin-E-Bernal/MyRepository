/*
ESCRIBIR UN ALGORITMO QUE PIDA:
NOMBRE
APELLIDO
TELEFONO 
EDAD

LUEGO LOS MUESTRE POR PANTALLA.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

#define tam 20

int main(){
	char nom[tam],ape[tam],tel[tam];
	int edad;
	
	gets(nom);
	fflush(stdin);
	gets(ape);
	fflush(stdin);
	gets(tel);
	fflush(stdin);
	scanf("%i",&edad);
	
	printf("Nombre:\t\t%s\nApellido:\t%s\nTel:\t\t%s\nEdad:\t\t%i\n",nom,ape,tel,edad);
	
	return 0;
}