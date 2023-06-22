//no edita la cadena, borro un caracter dsps de mostrarla xd
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main(){
	char cadena[5];
	
	gets(cadena);
	fflush(stdin);
	printf("\n\n%s",cadena);
	
	if(getch()=='b')printf("\b%c\b",255);
	
	getch();
	return 0;
}