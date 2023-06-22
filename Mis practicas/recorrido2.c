#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define tamanio 5

int main (){
	int enteros[tamanio], *ent, i;
	ent=enteros;
	
	printf("Ingrese un entero en la posici%cn ",162);
	for(i=0;i<tamanio;i++){
		printf("%i:\t",162,i);
		enteros[i]==getchar();
		fflush(stdin);
	}if (getch()=='x') system("cls");
	
	printf("Enteros del arreglo:\t");
	for(i=0;i<tamanio;i++) printf("Enteros del arreglo:\t%i",*ent+i);
	getch();
	
	return 0;
}