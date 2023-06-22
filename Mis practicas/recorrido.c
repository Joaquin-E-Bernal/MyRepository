#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define tamanio 5

int main (){
	int enteros[tamanio], *ent, i;
	ent=enteros;
	
	for(i=0;i<tamanio;i++){
		printf("Ingrese un entero en la posici%cn %i:\t",162,i);
		scanf("%i",&enteros[i]);
		fflush(stdin);
	}if (getch()=='x') system("cls");
	
	printf("Enteros del arreglo:\t");
	for(i=0;i<tamanio;i++) printf("Enteros del arreglo:\t%i",*ent+i);
	getch();
	
	return 0;
}