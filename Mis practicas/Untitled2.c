#include<stdio.h>
#include<string.h>    //gets
#include<stdlib.h>    //system

int main (){
	char nombre[20], apellido[20];
	int tel, edad;
	
	printf ("Ingrese su nombre: "); gets(nombre); fflush(stdin);
	printf ("\nIngrese su apellido: "); gets(apellido); fflush(stdin);
	printf ("\nIngrese su telefono: "); scanf("%d",&tel); fflush(stdin);
	printf ("\nIngrese su edad: "); scanf("%d",&edad); fflush(stdin);
/*
    fflush sirve para borrar la tecla ENTER
	que queda guardada en la memoria cada vez que ingresamos un dato
*/
	printf ("Nombre y apellido:%s, %s.\nTel: %i.\nEdad: %i\n\n",nombre,apellido,tel,edad);
	system ("pause");
	
	return 0;
}